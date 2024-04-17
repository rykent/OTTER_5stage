// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_OTTER_Wrapper;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__ALU0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__CSR0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__CU_DCDR0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__CU_FSM0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__MEM0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__PC0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__PC_MUX;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__RF0;
    VerilatedScope __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX;
    VerilatedScope __Vscope_OTTER_Wrapper__DEBOUCE;
    VerilatedScope __Vscope_OTTER_Wrapper__SSG_DISP;
    VerilatedScope __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod;
    VerilatedScope __Vscope_OTTER_Wrapper__SSG_DISP__CathMod;
    VerilatedScope __Vscope_TOP;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
