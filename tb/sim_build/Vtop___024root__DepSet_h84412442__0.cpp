// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->OTTER_Wrapper__DOT__clk_50) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__clk_50__0))));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0))));
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__clk_50__0 
        = vlSelf->OTTER_Wrapper__DOT__clk_50;
    vlSelf->__Vtrigprevexpr___TOP__OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500__0 
        = vlSelf->OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
