`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Ryken Thompson
// 
// Create Date: 10/30/2023 10:49:26 AM
// Design Name: OTTER MCU
// Module Name: OTTER_MCU
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module OTTER_MCU(
    input RST,
    input INTR,
    input CLK,
    input [31:0] IOBUS_IN,
    output IOBUS_WR,
    output [31:0] IOBUS_OUT,
    output [31:0] IOBUS_ADDR
    );
    
    struct packed {
        logic [31:0] npc,
        logic [31:0] pc,
        logic [31:0] instr
    } IF_ID_r;

    struct packed {
        logic [31:0] npc,
        logic [31:0] pc,
        logic [31:0] instr,
        logic regWrite,
        logic memWrite,
        logic memRead2,
        logic alu_fun,
        logic alu_srcA,
        logic alu_srcB,
        logic rf_wr_sel,
        logic [31:0] rs1_data,
        logic [31:0] rs2_data,
        logic [31:0] u_type,
        logic [31:0] i_type,
        logic [31:0] s_type,
        logic [31:0] j_type,
        logic [31:0] b_type
    } ID_EX_r;

    struct packed {
        logic [31:0] npc,
        logic [1:0] mem_size,
        logic mem_sign,
        logic regWrite,
        logic memWrite,
        logic memRead2,
        logic rf_wr_sel,
        logic [31:0] rs2_data,
        logic [4:0] rd_addr,
        logic [31:0] alu_res
    } EX_MEM_r;

    struct packed {
        logic [31:0] npc,
        logic regWrite,
        logic rf_wr_sel,
        logic [31:0] dout2,
        logic [4:0] rd_addr,
        logic [31:0] alu_res
    } MEM_WB_r;



    //**************************************************************************
    // * Fetch (Instruction Memory) Stage
    // *************************************************************************

    logic pc_source;

    logic [31:0] pc_din;
    logic [31:0] pc_w;
    logic [31:0] npc_w;
    logic [31:0] instr_w;

    logic [31:0] jalr_addr;
    logic [31:0] branch_addr;
    logic [31:0] jal_addr;

    assign npc_w = pc_w + 4;


    always_ff @(posedge CLK) begin
        if(RST) begin
             IF_ID_r <= 0;
        end else begin
            IF_ID_r.pc <= pc_w;
            IF_ID_r.npc <= npc_w;
            IF_ID_r.instr <= instr_w;
        end
    end

    mux_3bit_sel PC_MUX (
        .A  (npc_w),
        .B  (jalr_addr),
        .C  (branch_addr),
        .D  (jal_addr), 
        .E  (MTVEC_w),
        .F  (MEPC_w),
        .sel(pc_source), 
        .O  (pc_din)
    );

    PC PC0 (
        .CLK     (CLK), 
        .PC_WRITE(PC_WRITE), 
        .PC_RST  (PC_RST), 
        .PC_DIN  (PC_DIN), 
        .PC_COUNT(pc_w)
    );


    Memory OTTER_MEM (
        .MEM_CLK  (CLK),
        .MEM_RDEN1(TODO),
        .MEM_RDEN2(EX_MEM_r.memRead2),
        .MEM_WE2  (EX_MEM_r.memWrite),
        .MEM_ADDR1(pc_w[15:2]),
        .MEM_ADDR2(EX_MEM_r.alu_res),
        .MEM_DIN2 (EX_MEM_r.rs2_data),
        .MEM_SIZE (EX_MEM_r.mem_size),
        .MEM_SIGN (EX_MEM_r.mem_sign),
        .IO_IN    (IOBUS_IN),
        .IO_WR    (IOBUS_WR),
        .MEM_DOUT1(instr_w),
        .MEM_DOUT2(dout2_w)
    );
    
    //**************************************************************************
    // * Decode (Register File) stage
    // *************************************************************************

    logic [31:0] rs1_data_w;
    logic [31:0] rs2_data_w;

    logic [1:0] alu_srcA_w;
    logic [2:0] alu_srcB_w;
    logic [3:0] alu_fun_w;
    logic [1:0] rf_wr_sel_w;

    logic [31:0] u_type_w;
    logic [31:0] i_type_w;
    logic [31:0] s_type_w;
    logic [31:0] j_type_w;
    logic [31:0] b_type_w;
    

    always_ff @(posedge CLK) begin
        if(RST) begin
             ID_EX_r <= 0;
        end else begin
            ID_EX_r.pc <= IF_ID_r.pc;
            ID_EX_r.npc <= IF_ID_r.npc;
            ID_EX_r.instr <= IF_ID_r.instr;
            ID_EX_r.regWrite <= regWrite_w;
            ID_EX_r.memWrite <= memWrite_w;
            ID_EX_r.memRead2 <= memRead2_w;
            ID_EX_r.alu_fun <= alu_fun_w;
            ID_EX_r.alu_srcA <= alu_srcA_w;
            ID_EX_r.alu_srcB <= alu_srcB_w;
            ID_EX_r.rf_wr_sel <= rf_wr_sel_w;
            ID_EX_r.rs1_data <= rs1_data_w;
            ID_EX_r.rs2_data <= rs2_data_w;
            ID_EX_r.u_type <= u_type_w;
            ID_EX_r.i_type <= i_type_w;
            ID_EX_r.s_type <= s_type_w;
            ID_EX_r.j_type <= j_type_w;
            ID_EX_r.b_type <= b_type_w;
        end
    end

    RF OTTER_RF (
        .CLK    (CLK),
        .RF_ADR1(IF_ID_r.instr[19:15]),
        .RF_ADR2(IF_ID_r.instr[24:20]),
        .RF_WA  (MEM_WB_r.rd_addr),
        .RF_WD  (rf_wd_w),
        .RF_EN  (MEM_WB_r.regWrite),
        .RF_RS1 (rs1_data_w),
        .RF_RS2 (rs2_data_w),
    );

    CU_DCDR DECODER (
        .rf_wr_sel(rf_wr_sel_w),
        .alu_srcA (alu_srcA_w),
        .alu_srcB (alu_srcB_w),
        .alu_fun  (alu_fun_w),
        .opcode   (IF_ID_r.instr[6:0]),
        .funct3   (IF_ID_r.instr[14:12]),
        .funct7   (IF_ID_r.instr[30]),
        .br_eq    (TODO),
        .br_lt    (TODO),
        .br_ltu   (TODO),
        .int_taken(TODO),
        .pcSource (TODO),
    );

    IMMED_GEN IMM (
        .INSTRUCT(IF_ID_r.instr),
        .U_TYPE  (u_type_w),
        .I_TYPE  (i_type_w),
        .S_TYPE  (s_type_w),
        .J_TYPE  (j_type_w),
        .B_TYPE  (b_type_w)
    );


    //**************************************************************************
    // * Execute (ALU) Stage
    // *************************************************************************


    logic [31:0] alu_srcA_data_w;
    logic [31:0] alu_srcB_data_w;
    logic [31:0] alu_res_w;

    always_ff @(posedge CLK) begin
        if(RST) begin
             EX_MEM_r <= 0;
        end else begin
            EX_MEM_r.npc <= ID_EX_r.npc;
            EX_MEM_r.mem_size <= ID_EX_r.instr[13:12];
            EX_MEM_r.mem_sign <= ID_EX_r.instr[14]
            EX_MEM_r.regWrite <= ID_EX_r.regWrite;
            EX_MEM_r.memWrite <= ID_EX_r.memWrite;
            EX_MEM_r.memRead2 <= ID_EX_r.memRead2;
            EX_MEM_r.rf_wr_sel <= ID_EX_r.rf_wr_sel;
            EX_MEM_r.rd_addr <= ID_EX_r.instr[11:7];
            EX_MEM_r.rs2_data <= ID_EX_r.rs2_data;
            EX_MEM_r.alu_res <= alu_res_w;
            
        end
    end

    mux_2bit_sel ALU_SRCA_MUX (
        .A  (ID_EX_r.rs1_data),
        .B  (ID_EX_r.u_type),
        .C  (~ID_EX_r.rs1_data),
        .D  (0),
        .sel(ID_EX_r.alu_srcA),
        .O  (alu_srcA_data_w),
    );


    mux_3bit_sel ALU_SRCB_MUX (
        .A  (ID_EX_r.rs2_data),
        .B  (ID_EX_r.i_type),
        .C  (ID_EX_r.s_type),
        .D  (ID_EX_r.pc), 
        .E  (TODO),
        .F  (0),
        .sel(ID_EX_r.alu_srcB), 
        .O  (alu_srcB_data_w)
    );


    ALU ALU0 (
        .srcA   (alu_srcA_data_w),
        .srcB   (alu_srcB_data_w),
        .ALU_FUN(ID_EX_r.alu_fun),
        .RESULT (alu_res_w),
    );


    BRANCH_ADDR_GEN TARGET_GEN (
        .J_TYPE(ID_EX_r.j_type),
        .B_TYPE(ID_EX_r.b_type),
        .I_TYPE(ID_EX_r.i_type),
        .PC    (ID_EX_r.pc),
        .RS1   (ID_EX_r.rs1_data),
        .JAL   (jal_addr),
        .BRANCH(branch_addr),
        .JALR  (jalr_addr),
    );

    BRANCH_COND_GEN BRANCH_COND_GEN0 (
        .RS1   (ID_EX_r.rs1_data),
        .RS2   (ID_EX_r.rs1_data),
        .INSTR   (ID_EX_r.instr),
        .INTR    (INTR & MSTATUS_w[3]),
        .pcSource(pcSource),
    );


    //**************************************************************************
    // * Memory (Data Memory) stage
    // *************************************************************************


    logic [31:0] dout2_w;


    assign IOBUS_OUT = EX_MEM_r.rs2_data;
    assign IOBUS_ADDR = EX_MEM_r.alu_res;

    always_ff @(posedge CLK) begin
        if(RST) begin
            MEM_WB_r <= 0;
        end else begin
            MEM_WB_r.npc <= EX_MEM_r.npc;
            MEM_WB_r.regWrite <= EX_MEM_r.regWrite;
            MEM_WB_r.rf_wr_sel <= EX_MEM_r.rf_wr_sel;
            MEM_WB_r.dout2 <= EX_MEM_r.dout2;
            MEM_WB_r.alu_res <= EX_MEM_r.alu_res;
            MEM_WB_r.rd_addr <= EX_MEM_r.rd_addr;
        end
    end




    //**************************************************************************
    // * Write (Write Back) stage
    // *************************************************************************


    logic [31:0] rf_wd_w;
    logic [31:0] csr_rd_w;
    logic [31:0] MSTATUS_w;
    logic [31:0] MEPC_w;
    logic [31:0] MTVEC_w;

    CSR CSR0 (
        .PC       (PC),
        .RST      (RST),
        .clk      (CLK),
        .mret_exec(mret_exec),
        .INT_TAKEN(INT_TAKEN),
        .ADDR     (ADDR),
        .WR_EN    (WR_EN),
        .WD       (MEM_WB_r.alu_res),
        .RD       (csr_rd_w),
        .MSTATUS  (MSTATUS_w),
        .MEPC     (MEPC_w),
        .MTVEC    (MTVEC_w),
    );


    mux_2bit_sel RF_WR_MUX (
        .A  (MEM_WB_r.npc),
        .B  (csr_rd_w),
        .C  (MEM_WB_r.dout2),
        .D  (MEM_WB_r.alu_res),
        .sel(MEM_WB_r.rf_wr_sel),
        .O  (rf_wd_w),
    );


endmodule