// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR;
    OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR = 0;
    // Body
    vlSelf->OTTER_Wrapper__DOT__BTNC = vlSelf->BTNC;
    vlSelf->OTTER_Wrapper__DOT__SWITCHES = vlSelf->SWITCHES;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR1 
        = (0x3fffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT 
                      >> 2U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIZE 
        = (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIGN 
        = (1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xeU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR1 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0xfU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR2 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0x14U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WA 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 7U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__opcode 
        = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct3 
        = (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct7 
        = (1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0x1eU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__opcode 
        = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__funct3 
        = (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__ADDR 
        = (0xfffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                     >> 0x14U));
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__CLK = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->LEDS = vlSelf->OTTER_Wrapper__DOT__LEDS;
    vlSelf->CATHODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
    vlSelf->OTTER_Wrapper__DOT__CATHODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CATHODES 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
    vlSelf->ANODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->OTTER_Wrapper__DOT__ANODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__ANODES 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MSTATUS = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
    vlSelf->OTTER_Wrapper__DOT__BTNL = vlSelf->BTNL;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN 
        = vlSelf->OTTER_Wrapper__DOT__r_SSEG;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val 
        = vlSelf->OTTER_Wrapper__DOT__r_SSEG;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__instr_bus 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 0U;
    if ((0U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
                }
            }
        } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
                }
            }
        } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                 != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 0U;
        }
    }
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 0U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
    vlSelf->OTTER_Wrapper__DOT__CLK = vlSelf->CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1 = 0U;
    vlSelf->OTTER_Wrapper__DOT__s_reset = vlSelf->BTNC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2 = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2 = 0U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN = 0U;
    if ((0U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 1U;
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN = 0U;
    } else {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
            }
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS 
                = ((IData)(vlSelf->BTNL) ? 2U : 1U);
        } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
                } else {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 2U;
                }
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 1U;
            }
        } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 4U;
            }
        } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
            } else if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                        == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 5U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 4U;
            }
        } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                 == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 5U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
        }
        if ((1U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((2U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                if ((3U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                    if ((4U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN 
                            = ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS) 
                               && ((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                                   != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS)));
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES = 0U;
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xfU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xeU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xdU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xcU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xbU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xaU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 9U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 8U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 7U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 6U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 5U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 4U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 2U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 1U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1) 
                                                 | ((0x800U 
                                                     & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                          >> 0x14U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                         >> 7U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus = 
        ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus 
        = (0xfffff000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xbU) | ((0x7e0U 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                      >> 7U))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD 
        = ((0x300U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                       >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS
            : ((0x305U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                           >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC
                : ((0x341U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                               >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC
                    : 0U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                   >> 0x14U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2 
        = ((0U == (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                            >> 0x14U))) ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram
           [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                      >> 0x14U))]);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1 
        = ((0U == (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                            >> 0xfU))) ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram
           [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                      >> 0xfU))]);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken = 0U;
    if ((0U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1 = 1U;
        }
        if ((1U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
            if ((2U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 6U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 5U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                     >> 0xeU)))) {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 1U;
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                             >> 0xcU)))) {
                                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                            }
                        }
                    }
                } else if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 3U)))) {
                            if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                    }
                                }
                            } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                         >> 3U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 2U)))) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 3U)))) {
                        if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                            }
                        }
                    }
                }
            } else if ((3U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
            } else if ((4U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
            }
            if ((2U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                if ((3U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                    if ((4U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken = 1U;
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__BTN = vlSelf->OTTER_Wrapper__DOT__BTNL;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HEX 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__HEX 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__INSTRUCT 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__instr_bus;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RST = vlSelf->OTTER_Wrapper__DOT__s_reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE;
    if ((0U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset = 1U;
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__clk 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__clk 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__E 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__F 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2 = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2;
    vlSelf->OTTER_Wrapper__DOT__BTN_INTR = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN;
    vlSelf->OTTER_Wrapper__DOT__s_INTR = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN;
    OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR 
        = ((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN) 
           & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
              >> 3U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS 
        = ((0U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
            ? 1U : ((1U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                     ? 2U : ((2U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                              ? ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                  ? ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                      ? ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                          ? ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                              ? 0U : 
                                             ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                               ? 0U
                                               : ((2U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                     ? 4U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U)))
                                          : ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                              ? ((4U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                     ? 4U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U)
                                                  : 0U)
                                              : ((4U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 
                                                 ((2U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                     ? 4U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U)
                                                  : 
                                                 ((2U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                     ? 4U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U))))
                                      : 0U) : ((0x20U 
                                                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 
                                                       ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                         ? 4U
                                                         : 1U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 
                                                       ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                         ? 4U
                                                         : 1U)
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 
                                                       ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                         ? 4U
                                                         : 1U)
                                                        : 0U)
                                                       : 0U))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 
                                                       ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                         ? 4U
                                                         : 1U)
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 
                                                       ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                         ? 4U
                                                         : 1U)
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                        ? 3U
                                                        : 0U)
                                                       : 0U))))))
                              : ((3U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                                  ? ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                      ? 4U : 1U) : 
                                 ((4U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                                   ? 1U : 0U)))));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val 
        = (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
            << 0xcU) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                         << 8U) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                    << 4U) | (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__J_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__J_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__B_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__B_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__U_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__S_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__PC 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__PC 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__I_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__I_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__IOBUS_out = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_OUT 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__C 
        = (~ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__RST 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RST;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_WRITE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_EN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__mret_exec 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WR_EN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_RST 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RST 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_WE2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__INTR = vlSelf->OTTER_Wrapper__DOT__s_INTR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__INTR 
        = OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JAL 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__BRANCH 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__E 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DIN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JALR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__RS1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus 
           == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT 
        = VL_LTS_III(32, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus 
           < vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__int_taken 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__INT_TAKEN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 0U;
    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken)))) {
        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 2U)))) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 1U;
                                            if ((0x1000U 
                                                 & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 7U;
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 2U;
                                            } else {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 6U;
                                            }
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 4U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 1U;
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 9U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun 
                                = ((8U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 0x1bU)) 
                                   | (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                            >> 0xcU)));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 2U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 3U)))) {
                if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 1U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 3U;
                        }
                    }
                } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 2U)))) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun 
                                = ((5U == (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                 >> 0xcU)))
                                    ? ((8U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 0x1bU)) 
                                       | (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                >> 0xcU)))
                                    : (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xcU)));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 2U)))) {
                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 2U;
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 1U;
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_eq 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_lt 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_ltu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 0U;
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 4U;
    } else if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
        if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    >> 0xcU)))) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 5U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 3U;
                        }
                    }
                }
            } else if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 1U;
                    }
                }
            } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    } else if ((2U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    } else if ((3U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__ALU_FUN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
                    ? (~ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1)
                    : 0U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus
                        : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD
                            : 0U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr
                        : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC
                            : ((5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC
                                : 0U))))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcA 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcB 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT 
        = (((((((((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun)) 
                  | (1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
                 | (2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
                | (3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
               | (4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
              | (5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
             | (6U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
            | (7U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun)))
            ? ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                   + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                    ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                       << (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                    : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                        ? VL_LTS_III(32, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                        : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                            ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                               < vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                            : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                   ^ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                                : ((5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                    ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                       >> (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                                    : ((6U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                        ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                           | vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                                        : (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                           & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))))))))
            : ((8U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                   - vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                : ((9U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu
                    : ((0xdU == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu, 
                                         (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                        : 0xdeadbeefU))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_ADDR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2 
        = (0x3fffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT 
                      >> 2U));
    vlSelf->OTTER_Wrapper__DOT__IOBUS_addr = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset 
        = (3U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_DIN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc;
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = ((0x11000000U 
                                             == vlSelf->OTTER_Wrapper__DOT__IOBUS_addr)
                                             ? (IData)(vlSelf->SWITCHES)
                                             : 0U);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized 
        = ((0x4000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
            ? ((0x2000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                ? 0U : ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                         ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? 0U : (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                         >> 0x10U))
                             : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (0xffffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                               >> 8U))
                                 : (0xffffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))
                         : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                    >> 0x18U) : (0xffU 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                    >> 0x10U)))
                             : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                             >> 8U))
                                 : (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))))
            : ((0x2000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                ? ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                    ? 0U : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? 0U : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                      ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))
                : ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                    ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? 0U : (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                 >> 0x1fU))) 
                                     << 0x10U) | (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x10U)))
                        : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x17U)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                >> 8U)))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord))))
                    : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                          >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                   >> 0x10U))))
                        : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WD 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid 
        = ((0x10000U > vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus) 
           && (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR 
        = ((0x10000U <= vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus) 
           && (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN 
        = vlSelf->OTTER_Wrapper__DOT__IOBUS_in;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2 
        = ((0x10000U <= vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus)
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer
            : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_WR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_IN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus
                        : 0U))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WD 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf;
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtop___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___act_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter 
        = (0xfffffU & ((IData)(1U) + vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter));
    if ((0x186a0U == vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter)) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter = 0U;
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500 
            = (1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500)));
    }
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf);
void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__clk_50 = (1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__clk_50)));
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__CLK = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__CLK 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__clk 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__clk 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CLK;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR;
    OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0;
    SData/*15:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 0;
    SData/*15:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0;
    CData/*4:0*/ __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6;
    __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0;
    SData/*15:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0;
    SData/*13:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 = 0;
    IData/*31:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 = 0;
    CData/*4:0*/ __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0;
    __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0;
    __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 = 0;
    IData/*31:0*/ __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
    __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS = 0;
    CData/*7:0*/ __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count;
    __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count = 0;
    // Body
    __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count 
        = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count;
    __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 = 0U;
    __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 = 0U;
    if (vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst) {
        __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count = 0U;
    } else if (vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc) {
        __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count 
            = (0xffU & ((IData)(1U) + (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count)));
    }
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid) {
        if (((((((((0U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                    >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))) 
                   | (1U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
                  | (2U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                     >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
                 | (3U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                    >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
                | (4U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                   >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
               | (5U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
              | (6U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                 >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) 
             | (8U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))))) {
            if ((0U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                 >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 
                    = (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 = 0U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((1U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 
                    = (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 = 8U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((2U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 
                    = (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 = 0x10U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((3U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 
                    = (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 = 0x18U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((4U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 
                    = (0xffffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 = 0U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((5U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 
                    = (0xffffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 = 8U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else if ((6U == ((0xcU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                        >> 0xaU)) | (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset)))) {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 
                    = (0xffffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 1U;
                __Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 = 0x10U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            } else {
                __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
                __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 = 1U;
                __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7 
                    = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2;
            }
        }
    }
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite) {
        __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf;
        __Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 = 1U;
        __Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0 
            = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 7U));
    }
    if (vlSelf->OTTER_Wrapper__DOT__IOBUS_wr) {
        if ((0x11000040U != vlSelf->OTTER_Wrapper__DOT__IOBUS_addr)) {
            if ((0x11000020U == vlSelf->OTTER_Wrapper__DOT__IOBUS_addr)) {
                vlSelf->OTTER_Wrapper__DOT__LEDS = 
                    (0xffffU & vlSelf->OTTER_Wrapper__DOT__IOBUS_out);
            }
        }
        if ((0x11000040U == vlSelf->OTTER_Wrapper__DOT__IOBUS_addr)) {
            vlSelf->OTTER_Wrapper__DOT__r_SSEG = (0xffffU 
                                                  & vlSelf->OTTER_Wrapper__DOT__IOBUS_out);
        }
    }
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer 
            = vlSelf->OTTER_Wrapper__DOT__IOBUS_in;
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
            [vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2];
    }
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS 
        = ((IData)(vlSelf->OTTER_Wrapper__DOT__s_reset)
            ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS);
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count 
        = __Vdly__OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count;
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset) {
        __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS = 0U;
    } else if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken) {
        __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
            = ((0xffffff7fU & __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS) 
               | (0x80U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
                           << 4U)));
        __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
            = (0xfffffff7U & __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS);
    } else if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE) {
        if ((0x300U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x14U))) {
            __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
                = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
        }
    } else if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec) {
        __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
            = ((0xfffffff7U & __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS) 
               | (8U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
                        >> 4U)));
        __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
            = (0xffffff7fU & __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS);
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
        = __Vdly__OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0] 
            = __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram__v0;
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MSTATUS = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS;
    vlSelf->LEDS = vlSelf->OTTER_Wrapper__DOT__LEDS;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 0U;
    if ((0U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
                }
            }
        } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
                }
            }
        } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                 != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 1U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc = 0U;
        }
    }
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 0U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN = 0U;
    if ((0U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 1U;
        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN = 0U;
    } else {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((1U & (~ (IData)(vlSelf->BTNL)))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
            }
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS 
                = ((IData)(vlSelf->BTNL) ? 2U : 1U);
        } else if ((2U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                     == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS))) {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
                } else {
                    vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 2U;
                }
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 1U;
            }
        } else if ((3U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 4U;
            }
        } else if ((4U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (vlSelf->BTNL) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 3U;
            } else if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                        == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 5U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 4U;
            }
        } else if ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if (((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                 == (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS))) {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
            } else {
                vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 5U;
            }
        } else {
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst = 1U;
            vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__NS = 0U;
        }
        if ((1U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
            if ((2U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                if ((3U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                    if ((4U != vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS)) {
                        vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN 
                            = ((5U == vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__PS) 
                               && ((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count) 
                                   != (IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS)));
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN 
        = vlSelf->OTTER_Wrapper__DOT__r_SSEG;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS = 0U;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES = 0U;
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xfU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xeU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xdU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xcU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xbU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 0xaU)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 9U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 8U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 7U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 6U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 5U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 4U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 2U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS)));
    }
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG) 
                                     >> 1U)));
    if ((5U <= (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
            = (0xfU & ((IData)(3U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES)));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                    << 1U)) | (1U & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                                     >> 3U)));
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES 
        = ((0xeU & ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES) 
                    << 1U)) | (1U & (IData)(vlSelf->OTTER_Wrapper__DOT__r_SSEG)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1 = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken = 0U;
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC = 0U;
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC;
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken)))) {
            if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE) {
                if ((0x300U != (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                >> 0x14U))) {
                    if ((0x305U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                    >> 0x14U))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC 
                            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
                    }
                }
            }
        }
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC;
        if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken) {
            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC 
                = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
        } else if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE) {
            if ((0x300U != (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                            >> 0x14U))) {
                if ((0x305U != (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                >> 0x14U))) {
                    if ((0x341U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                    >> 0x14U))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC 
                            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC;
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
            [(0x3fffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT 
                         >> 2U))];
    }
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT = 0U;
    } else if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT 
            = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc;
    }
    vlSelf->OTTER_Wrapper__DOT__BTN_INTR = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN;
    vlSelf->OTTER_Wrapper__DOT__s_INTR = vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN;
    OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR 
        = ((IData)(vlSelf->OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN) 
           & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS 
              >> 3U));
    if ((0U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset = 1U;
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS = 1U;
    } else {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS 
            = ((1U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                ? 2U : ((2U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                         ? ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                             ? ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                 ? ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                     ? ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                         ? 0U : ((4U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 
                                                  ((1U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                     ? 4U
                                                     : 1U)
                                                    : 0U)
                                                   : 0U)))
                                     : ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                         ? ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                             ? ((2U 
                                                 & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 
                                                 ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                   ? 4U
                                                   : 1U)
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                          ? ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                              ? ((1U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 
                                                 ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                   ? 4U
                                                   : 1U)
                                                  : 0U)
                                              : 0U)
                                          : ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                              ? ((1U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                  ? 
                                                 ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                   ? 4U
                                                   : 1U)
                                                  : 0U)
                                              : 0U))))
                                 : 0U) : ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                           ? ((0x10U 
                                               & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                               ? ((8U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                       ? 4U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                       ? 4U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U)))
                                               : ((8U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                       ? 4U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U))))
                                           : ((0x10U 
                                               & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                               ? ((8U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                       ? 4U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 
                                                     ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                                       ? 4U
                                                       : 1U)
                                                      : 0U)
                                                     : 0U)))
                                               : ((8U 
                                                   & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                                                      ? 3U
                                                      : 0U)
                                                     : 0U))))))
                         : ((3U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                             ? ((IData)(OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR)
                                 ? 4U : 1U) : ((4U 
                                                == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)
                                                ? 1U
                                                : 0U))));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HEX 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val 
        = (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS) 
            << 0xcU) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS) 
                         << 8U) | (((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS) 
                                    << 4U) | (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES))));
    if ((0U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
        if ((1U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1 = 1U;
        }
        if ((1U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
            if ((2U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                if ((3U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                    if ((4U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken = 1U;
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__E 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__F 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1;
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v0))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v1))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v2))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v3))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v4))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v5))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6] 
            = (((~ ((IData)(0xffffU) << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6))) 
                & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory
                [__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6) 
                                   << (IData)(__Vdlyvlsb__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v6))));
    }
    if (__Vdlyvset__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory[__Vdlyvdim0__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7] 
            = __Vdlyvval__OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory__v7;
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__INTR = vlSelf->OTTER_Wrapper__DOT__s_INTR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__INTR 
        = OTTER_Wrapper__DOT__CPU__DOT____Vcellinp__CU_FSM0__INTR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__int_taken 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__INT_TAKEN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIZE 
        = (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIGN 
        = (1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xeU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR1 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0xfU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR2 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0x14U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WA 
        = (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 7U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__opcode 
        = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct3 
        = (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct7 
        = (1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0x1eU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__opcode 
        = (0x7fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                    >> 0U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__funct3 
        = (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                 >> 0xcU));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__ADDR 
        = (0xfffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                     >> 0x14U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__instr_bus 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2 = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2 = 0U;
    if ((0U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
        if ((1U != vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
            if ((2U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 6U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 5U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 4U)))) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2 = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 3U)))) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 2U)))) {
                                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                     >> 0xeU)))) {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                                if (
                                                    (0x2000U 
                                                     & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 1U;
                                                } else if (
                                                           (0x1000U 
                                                            & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE = 1U;
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                         >> 0xdU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                             >> 0xcU)))) {
                                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                    }
                                }
                            }
                        } else if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                            }
                        }
                    }
                } else if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 3U)))) {
                            if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                    }
                                }
                            } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                         >> 3U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 2U)))) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 3U)))) {
                        if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                                }
                            }
                        } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
                            }
                        }
                    }
                }
            } else if ((3U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite = 1U;
            } else if ((4U == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS)) {
                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite = 1U;
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1) 
                                                 | ((0x800U 
                                                     & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                          >> 0x14U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                         >> 7U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus 
        = (0xfffff000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 0U;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xbU) | ((0x7e0U 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                      >> 7U))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 0U;
    if ((1U & (~ (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken)))) {
        if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 2U)))) {
                            if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                  >> 0xeU)))) {
                                        if ((0x2000U 
                                             & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 1U;
                                            if ((0x1000U 
                                                 & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 7U;
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 2U;
                                            } else {
                                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 6U;
                                            }
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 4U;
                                        } else if (
                                                   (0x1000U 
                                                    & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 1U;
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 9U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun = 9U;
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun 
                                = ((8U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                          >> 0x1bU)) 
                                   | (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                            >> 0xcU)));
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 2U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 3U)))) {
                if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA = 1U;
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 3U;
                        }
                    }
                } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 3U;
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 2U)))) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun 
                                = ((5U == (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                 >> 0xcU)))
                                    ? ((8U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 0x1bU)) 
                                       | (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                >> 0xcU)))
                                    : (7U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xcU)));
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                          >> 2U)))) {
                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel = 2U;
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB = 1U;
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD 
        = ((0x300U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                       >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS
            : ((0x305U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                           >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC
                : ((0x341U == (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                               >> 0x14U)) ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC
                    : 0U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus 
        = (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                        >> 0x1fU))) << 0xbU) | (0x7ffU 
                                                & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                   >> 0x14U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2 
        = ((0U == (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                            >> 0x14U))) ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram
           [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                      >> 0x14U))]);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1 
        = ((0U == (0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                            >> 0xfU))) ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram
           [(0x1fU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                      >> 0xfU))]);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__INSTRUCT 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__instr_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2 = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__J_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__J_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__B_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__B_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__U_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__S_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__I_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__I_TYPE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus;
    vlSelf->OTTER_Wrapper__DOT__IOBUS_out = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_OUT 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__C 
        = (~ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_RST 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RST 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__reset;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR1 
        = (0x3fffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT 
                      >> 2U));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__btype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jtype_bus 
           + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus = 
        ((IData)(4U) + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memRDEN2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_WRITE 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PCWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_EN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__regWrite;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__mret_exec 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mret_exec;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WR_EN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_WE;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_WE2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__ALU_FUN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__E 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DIN2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__B 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JALR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__RS1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS1 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus 
           == vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT 
        = VL_LTS_III(32, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU 
        = (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus 
           < vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs1_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__utype_bus
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcA))
                    ? (~ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1)
                    : 0U)));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__BRANCH 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JAL 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__A 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__PC 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__PC 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rs2_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__itype_bus
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__stype_bus
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pc_bus
                        : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_srcB))
                            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD
                            : 0U)))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_eq 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_lt 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_ltu 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 0U;
    if (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__int_taken) {
        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 4U;
    } else if ((0x40U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
        if ((0x20U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
            if ((0x10U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                  >> 2U)))) {
                        if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                                if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                              >> 0xeU)))) {
                                    if ((1U & (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                  >> 0xdU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                                    >> 0xcU)))) {
                                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 5U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                            vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 3U;
                        }
                    }
                }
            } else if ((4U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource = 1U;
                    }
                }
            } else if ((2U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                if ((1U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)) {
                    if ((0U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                      >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    } else if ((2U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    } else if ((3U == (3U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                             >> 0xdU)))) {
                        vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource 
                            = (2U & ((~ ((IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu) 
                                         ^ (~ (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1 
                                               >> 0xcU)))) 
                                     << 1U));
                    }
                }
            }
        }
    }
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcA 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcB 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT 
        = (((((((((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun)) 
                  | (1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
                 | (2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
                | (3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
               | (4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
              | (5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
             | (6U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))) 
            | (7U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun)))
            ? ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                   + vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                    ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                       << (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                    : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                        ? VL_LTS_III(32, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                        : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                            ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                               < vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                            : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                   ^ vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                                : ((5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                    ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                       >> (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                                    : ((6U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                                        ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                           | vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                                        : (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                                           & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))))))))
            : ((8U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu 
                   - vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu)
                : ((9U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu
                    : ((0xdU == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_fun))
                        ? VL_SHIFTRS_III(32,32,5, vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu, 
                                         (0x1fU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu))
                        : 0xdeadbeefU))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_ADDR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2 
        = (0x3fffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT 
                      >> 2U));
    vlSelf->OTTER_Wrapper__DOT__IOBUS_addr = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset 
        = (3U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__sel 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__branch_baddr
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__jal_baddr
                        : ((4U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MTVEC
                            : ((5U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcSource))
                                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEPC
                                : 0U))))));
    vlSelf->OTTER_Wrapper__DOT__IOBUS_in = ((0x11000000U 
                                             == vlSelf->OTTER_Wrapper__DOT__IOBUS_addr)
                                             ? (IData)(vlSelf->SWITCHES)
                                             : 0U);
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized 
        = ((0x4000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
            ? ((0x2000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                ? 0U : ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                         ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? 0U : (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                         >> 0x10U))
                             : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (0xffffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                               >> 8U))
                                 : (0xffffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))
                         : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                    >> 0x18U) : (0xffU 
                                                 & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                    >> 0x10U)))
                             : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                 ? (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                             >> 8U))
                                 : (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))))
            : ((0x2000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                ? ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                    ? 0U : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                             ? 0U : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                                      ? 0U : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))
                : ((0x1000U & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1)
                    ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? 0U : (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                 >> 0x1fU))) 
                                     << 0x10U) | (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x10U)))
                        : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x17U)))) 
                                << 0x10U) | (0xffffU 
                                             & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                >> 8U)))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0xfU)))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord))))
                    : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                            >> 0x1fU))) 
                                << 8U) | (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                          >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                   >> 0x10U))))
                        : ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset))
                            ? (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord)))))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__D 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR2 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WD 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid 
        = ((0x10000U > vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus) 
           && (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR 
        = ((0x10000U <= vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus) 
           && (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__memWE2));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN 
        = vlSelf->OTTER_Wrapper__DOT__IOBUS_in;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2 
        = ((0x10000U <= vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus)
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer
            : vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized);
    vlSelf->OTTER_Wrapper__DOT__IOBUS_wr = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_WR 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_DIN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_IN 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__C 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O 
        = ((0U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
            ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__npc_bus
            : ((1U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__csr_RD
                : ((2U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                    ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__mem_data
                    : ((3U == (IData)(vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel))
                        ? vlSelf->OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus
                        : 0U))));
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O;
    vlSelf->OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WD 
        = vlSelf->OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
        if ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
            vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES = 7U;
            vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES 
                = ((0x8000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((0x4000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x2000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? ((0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                ? 0xb8U : 0xb0U) : 
                           ((0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                             ? 0xc2U : 0xb1U)) : ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0xe0U
                                                    : 0x88U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0x8cU
                                                    : 0x80U)))
                    : ((0x4000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x2000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? ((0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                ? 0x8fU : 0xa0U) : 
                           ((0x1000U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                             ? 0xa4U : 0xccU)) : ((0x2000U 
                                                   & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                   ? 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0x86U
                                                    : 0x92U)
                                                   : 
                                                  ((0x1000U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0xcfU
                                                    : 0x81U))));
        } else {
            vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES = 0xbU;
            vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES 
                = ((0x800U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((0x400U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x200U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? ((0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                ? 0xb8U : 0xb0U) : 
                           ((0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                             ? 0xc2U : 0xb1U)) : ((0x200U 
                                                   & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0xe0U
                                                    : 0x88U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0x8cU
                                                    : 0x80U)))
                    : ((0x400U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x200U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? ((0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                ? 0x8fU : 0xa0U) : 
                           ((0x100U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                             ? 0xa4U : 0xccU)) : ((0x200U 
                                                   & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                   ? 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0x86U
                                                    : 0x92U)
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                    ? 0xcfU
                                                    : 0x81U))));
        }
    } else if ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit))) {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES = 0xdU;
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES 
            = ((0x80U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                ? ((0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0xb8U : 0xb0U) : ((0x10U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xc2U
                                                 : 0xb1U))
                    : ((0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0xe0U : 0x88U) : ((0x10U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0x8cU
                                                 : 0x80U)))
                : ((0x40U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0x8fU : 0xa0U) : ((0x10U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xa4U
                                                 : 0xccU))
                    : ((0x20U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((0x10U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0x86U : 0x92U) : ((0x10U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xcfU
                                                 : 0x81U))));
    } else {
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES = 0xeU;
        vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES 
            = ((8U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                ? ((4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0xb8U : 0xb0U) : ((1U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xc2U
                                                 : 0xb1U))
                    : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0xe0U : 0x88U) : ((1U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0x8cU
                                                 : 0x80U)))
                : ((4U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                    ? ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0x8fU : 0xa0U) : ((1U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xa4U
                                                 : 0xccU))
                    : ((2U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                        ? ((1U & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                            ? 0x86U : 0x92U) : ((1U 
                                                 & (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val))
                                                 ? 0xcfU
                                                 : 0x81U))));
    }
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit 
        = (3U & ((IData)(1U) + (IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit)));
    vlSelf->ANODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->OTTER_Wrapper__DOT__ANODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__ANODES 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES;
    vlSelf->CATHODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
    vlSelf->OTTER_Wrapper__DOT__CATHODES = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CATHODES 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val 
        = vlSelf->OTTER_Wrapper__DOT__r_SSEG;
    vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__HEX 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/ryken/Documents/CPE333/OTTER_multicycle_base/tb/../src/OTTER_Wrapper_v1_02.sv", 17, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/ryken/Documents/CPE333/OTTER_multicycle_base/tb/../src/OTTER_Wrapper_v1_02.sv", 17, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/ryken/Documents/CPE333/OTTER_multicycle_base/tb/../src/OTTER_Wrapper_v1_02.sv", 17, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->BTNL & 0xfeU))) {
        Verilated::overWidthError("BTNL");}
    if (VL_UNLIKELY((vlSelf->BTNC & 0xfeU))) {
        Verilated::overWidthError("BTNC");}
}
#endif  // VL_DEBUG
