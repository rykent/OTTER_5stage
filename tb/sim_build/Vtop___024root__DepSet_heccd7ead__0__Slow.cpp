// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    // Body
    Vtop___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___eval_static__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__clk_50 = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = 0U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS = 0x19U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS = 0x33U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS = 3U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__clk_50__0 
        = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
}

extern const VlWide<18>/*575:0*/ Vtop__ConstPool__CONST_h596463ad_0;

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xeU;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xdU;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xcU;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xbU;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xaU;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 9U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 8U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 7U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 6U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 5U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 4U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 3U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 2U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 1U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0xffffffffU;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(18, Vtop__ConstPool__CONST_h596463ad_0)
                 ,  &(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory)
                 , 0, ~0ULL);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__F = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__D = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__MODE = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/ryken/Documents/CPE333/OTTER_multicycle_base/tb/../src/OTTER_Wrapper_v1_02.sv", 17, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ vlSelf->__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge OTTER_Wrapper.clk_50)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge OTTER_Wrapper.SSG_DISP.CathMod.s_clk_500)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge OTTER_Wrapper.clk_50)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge OTTER_Wrapper.SSG_DISP.CathMod.s_clk_500)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->BTNL = VL_RAND_RESET_I(1);
    vlSelf->BTNC = VL_RAND_RESET_I(1);
    vlSelf->SWITCHES = VL_RAND_RESET_I(16);
    vlSelf->LEDS = VL_RAND_RESET_I(16);
    vlSelf->CATHODES = VL_RAND_RESET_I(8);
    vlSelf->ANODES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__BTNL = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__BTNC = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SWITCHES = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__LEDS = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__CATHODES = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__ANODES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__clk_50 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_out = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_addr = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__r_lcdinstr = VL_RAND_RESET_I(10);
    vlSelf->OTTER_Wrapper__DOT__r_lcd_ready = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__r_random = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__s_reset = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__s_INTR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__r_vga_we = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__r_vga_wa = VL_RAND_RESET_I(13);
    vlSelf->OTTER_Wrapper__DOT__r_vga_wd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__r_vga_rd = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__r_SSEG = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__BTN_INTR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__INTR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_WR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_OUT = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_ADDR = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__instr_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MSTATUS = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__E = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__F = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__sel = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__E = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__F = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__sel = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__A = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__B = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__C = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__D = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_WRITE = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_RST = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_DIN = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN1 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_WE2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR1 = VL_RAND_RESET_I(14);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DIN2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIZE = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIGN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_IN = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2 = VL_RAND_RESET_I(14);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR1 = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR2 = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WA = VL_RAND_RESET_I(5);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WD = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_EN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__INSTRUCT = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__U_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__I_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__S_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__J_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__B_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__J_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__B_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__I_TYPE = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__RS1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JAL = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__BRANCH = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JALR = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcA = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcB = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__ALU_FUN = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS1 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS2 = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_eq = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_lt = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_ltu = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__int_taken = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__INTR = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS = 0;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS = 0;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RST = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__mret_exec = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__INT_TAKEN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__ADDR = VL_RAND_RESET_I(12);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WR_EN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WD = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC = VL_RAND_RESET_I(32);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__MODE = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CATHODES = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__ANODES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HEX = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i = 0;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__HEX = VL_RAND_RESET_I(16);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES = VL_RAND_RESET_I(4);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit = VL_RAND_RESET_I(2);
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = VL_RAND_RESET_I(20);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__BTN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS = 0;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count = VL_RAND_RESET_I(8);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = VL_RAND_RESET_I(1);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__clk_50__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0 = VL_RAND_RESET_I(1);
}
