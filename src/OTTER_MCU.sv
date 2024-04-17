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
    
    logic pcWrite = 1'b1;
    logic memRead1 = 1'b1; //TODO: Change for use with hazards
    

    logic [1:0] pc_source;


    logic [31:0] pc_bus;
    logic [31:0] npc_bus;
    logic [31:0] jalr_addr;
    logic [31:0] branch_addr;
    logic [31:0] jal_addr;
    logic [31:0] pc_din;

    logic [31:0] instr_if_id;


    //Instruction Fetch -> Insturction Decode

    always_ff @(posedge CLK) begin
        if(RST) begin
             pc_if_id <= 0;
        end else begin
             pc_if_id <= pc_bus;
        end
    end


    //Instruction Decode -> Execute
    logic [31:0] rs1_id_ex;
    logic [31:0] rs2_id_ex;
    

    //Instruction Fetch
    mux_2bit_sel PCMUX (.A(npc_bus), .B(jalr_addr), .C(branch_addr), .D(jal_addr), .sel(pc_source), .O(pc_din));
    PC PC0 (.CLK     (CLK), .PC_WRITE(pcWrite), .PC_RST  (RST), .PC_DIN  (pc_din), .PC_COUNT(pc_bus));

    Memory Memory0 (.MEM_CLK  (CLK), .MEM_RDEN1(memRead1), .MEM_RDEN2(TODO), .MEM_WE2  (TODO), .MEM_ADDR1(pc_bus), .MEM_ADDR2(TODO), .MEM_DIN2 (TODO), .MEM_SIZE (TODO), .MEM_SIGN (TODO), .IO_IN    (TODO), .IO_WR    (TODO), .MEM_DOUT1(instr_if_id), .MEM_DOUT2(TODO));
    
    //Instruction Decode
    RF Regfile0 (.CLK    (CLK), .RF_ADR1(instr_if_id[19:15]), .RF_ADR2(instr_if_id[24:20]), .RF_WA  (TODO), .RF_WD  (TODO), .RF_EN  (TODO), .RF_RS1 (RF_RS1), .RF_RS2 (RF_RS2));


    //Execute

    //Memory

    //Writeback


endmodule