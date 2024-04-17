// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(CLK,0,0);
        CData/*0:0*/ OTTER_Wrapper__DOT__clk_50;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
        VL_IN8(BTNL,0,0);
        VL_IN8(BTNC,0,0);
        VL_OUT8(CATHODES,7,0);
        VL_OUT8(ANODES,3,0);
        CData/*0:0*/ OTTER_Wrapper__DOT__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__BTNL;
        CData/*0:0*/ OTTER_Wrapper__DOT__BTNC;
        CData/*7:0*/ OTTER_Wrapper__DOT__CATHODES;
        CData/*3:0*/ OTTER_Wrapper__DOT__ANODES;
        CData/*0:0*/ OTTER_Wrapper__DOT__r_lcd_ready;
        CData/*0:0*/ OTTER_Wrapper__DOT__s_reset;
        CData/*0:0*/ OTTER_Wrapper__DOT__IOBUS_wr;
        CData/*0:0*/ OTTER_Wrapper__DOT__s_INTR;
        CData/*0:0*/ OTTER_Wrapper__DOT__r_vga_we;
        CData/*7:0*/ OTTER_Wrapper__DOT__r_vga_wd;
        CData/*7:0*/ OTTER_Wrapper__DOT__r_vga_rd;
        CData/*0:0*/ OTTER_Wrapper__DOT__BTN_INTR;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__RST;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__INTR;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__IOBUS_WR;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__mret_exec;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__int_taken;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__csr_WE;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__PCWrite;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__regWrite;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__memWE2;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__memRDEN1;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__memRDEN2;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__reset;
        CData/*3:0*/ OTTER_Wrapper__DOT__CPU__DOT__alu_fun;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__alu_srcA;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__alu_srcB;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__pcSource;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__sel;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__sel;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__sel;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_WRITE;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_RST;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN1;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN2;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_WE2;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIZE;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIGN;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid;
        CData/*4:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR1;
        CData/*4:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR2;
        CData/*4:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WA;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_EN;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__CLK;
        CData/*3:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__ALU_FUN;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ;
    };
    struct {
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU;
        CData/*6:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__opcode;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct3;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct7;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_eq;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_lt;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_ltu;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__int_taken;
        CData/*3:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource;
        CData/*1:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__clk;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__RST;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__INTR;
        CData/*6:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__opcode;
        CData/*2:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__funct3;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__clk;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RST;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__mret_exec;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__INT_TAKEN;
        CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WR_EN;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__MODE;
        CData/*7:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CATHODES;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__ANODES;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES;
        CData/*0:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CLK;
        CData/*7:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
        CData/*3:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
        CData/*1:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit;
        CData/*0:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__CLK;
        CData/*0:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__BTN;
        CData/*0:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN;
        CData/*7:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS;
        CData/*7:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count;
        CData/*0:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst;
        CData/*0:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__clk_50__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(SWITCHES,15,0);
        VL_OUT16(LEDS,15,0);
        SData/*15:0*/ OTTER_Wrapper__DOT__SWITCHES;
        SData/*15:0*/ OTTER_Wrapper__DOT__LEDS;
    };
    struct {
        SData/*9:0*/ OTTER_Wrapper__DOT__r_lcdinstr;
        SData/*12:0*/ OTTER_Wrapper__DOT__r_vga_wa;
        SData/*15:0*/ OTTER_Wrapper__DOT__r_SSEG;
        SData/*13:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR1;
        SData/*13:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
        SData/*11:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__ADDR;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HEX;
        SData/*15:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__HEX;
        IData/*31:0*/ OTTER_Wrapper__DOT__IOBUS_out;
        IData/*31:0*/ OTTER_Wrapper__DOT__IOBUS_in;
        IData/*31:0*/ OTTER_Wrapper__DOT__IOBUS_addr;
        IData/*31:0*/ OTTER_Wrapper__DOT__r_random;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IOBUS_OUT;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IOBUS_ADDR;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__npc_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__instr_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__utype_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__stype_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__jtype_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__btype_bus;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__csr_RD;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MTVEC;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEPC;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MSTATUS;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__mem_data;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__branch_baddr;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__jal_baddr;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__A;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__B;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__C;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__D;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__E;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__F;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__A;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__B;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__C;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__D;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__E;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__F;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__A;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__B;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__C;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__D;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__A;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__B;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__C;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__D;
    };
    struct {
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_DIN;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR2;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DIN2;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_IN;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WD;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__INSTRUCT;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__U_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__I_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__S_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__J_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__B_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__J_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__B_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__PC;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__I_TYPE;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__RS1;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JAL;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__BRANCH;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JALR;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcA;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcB;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS1;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS2;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__PC;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WD;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC;
        IData/*31:0*/ OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC;
        IData/*31:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i;
        IData/*19:0*/ OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter;
        IData/*31:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__NS;
        IData/*31:0*/ OTTER_Wrapper__DOT__DEBOUCE__DOT__PS;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 16384> OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory;
        VlUnpacked<IData/*31:0*/, 32> OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ OTTER_Wrapper__DOT__SWITCHES_AD = 0x11000000U;
    static constexpr IData/*31:0*/ OTTER_Wrapper__DOT__LEDS_AD = 0x11000020U;
    static constexpr IData/*31:0*/ OTTER_Wrapper__DOT__SSEG_AD = 0x11000040U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
