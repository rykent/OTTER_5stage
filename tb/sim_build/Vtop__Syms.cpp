// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_OTTER_Wrapper);
    __Vhier.remove(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__CPU);
    __Vhier.remove(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__DEBOUCE);
    __Vhier.remove(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__SSG_DISP);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__BADDR_GEN0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__BCOND_GEN0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CSR0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CU_DCDR0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CU_FSM0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__IMMED_GEN0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__MEM0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__PC0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__PC_MUX);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__RF0);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__RF_WR_MUX);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__SSG_DISP, &__Vscope_OTTER_Wrapper__SSG_DISP__BCDMod);
    __Vhier.remove(&__Vscope_OTTER_Wrapper__SSG_DISP, &__Vscope_OTTER_Wrapper__SSG_DISP__CathMod);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(143);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_OTTER_Wrapper.configure(this, name(), "OTTER_Wrapper", "OTTER_Wrapper", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU.configure(this, name(), "OTTER_Wrapper.CPU", "CPU", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__ALU0.configure(this, name(), "OTTER_Wrapper.CPU.ALU0", "ALU0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.configure(this, name(), "OTTER_Wrapper.CPU.ALU_SRCA_MUX", "ALU_SRCA_MUX", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.configure(this, name(), "OTTER_Wrapper.CPU.ALU_SRCB_MUX", "ALU_SRCB_MUX", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.configure(this, name(), "OTTER_Wrapper.CPU.BADDR_GEN0", "BADDR_GEN0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.configure(this, name(), "OTTER_Wrapper.CPU.BCOND_GEN0", "BCOND_GEN0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__CSR0.configure(this, name(), "OTTER_Wrapper.CPU.CSR0", "CSR0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.configure(this, name(), "OTTER_Wrapper.CPU.CU_DCDR0", "CU_DCDR0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__CU_FSM0.configure(this, name(), "OTTER_Wrapper.CPU.CU_FSM0", "CU_FSM0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.configure(this, name(), "OTTER_Wrapper.CPU.IMMED_GEN0", "IMMED_GEN0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__MEM0.configure(this, name(), "OTTER_Wrapper.CPU.MEM0", "MEM0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__PC0.configure(this, name(), "OTTER_Wrapper.CPU.PC0", "PC0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__PC_MUX.configure(this, name(), "OTTER_Wrapper.CPU.PC_MUX", "PC_MUX", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__RF0.configure(this, name(), "OTTER_Wrapper.CPU.RF0", "RF0", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.configure(this, name(), "OTTER_Wrapper.CPU.RF_WR_MUX", "RF_WR_MUX", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__DEBOUCE.configure(this, name(), "OTTER_Wrapper.DEBOUCE", "DEBOUCE", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__SSG_DISP.configure(this, name(), "OTTER_Wrapper.SSG_DISP", "SSG_DISP", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.configure(this, name(), "OTTER_Wrapper.SSG_DISP.BCDMod", "BCDMod", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.configure(this, name(), "OTTER_Wrapper.SSG_DISP.CathMod", "CathMod", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_OTTER_Wrapper);
    __Vhier.add(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__CPU);
    __Vhier.add(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__DEBOUCE);
    __Vhier.add(&__Vscope_OTTER_Wrapper, &__Vscope_OTTER_Wrapper__SSG_DISP);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__BADDR_GEN0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__BCOND_GEN0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CSR0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CU_DCDR0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__CU_FSM0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__IMMED_GEN0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__MEM0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__PC0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__PC_MUX);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__RF0);
    __Vhier.add(&__Vscope_OTTER_Wrapper__CPU, &__Vscope_OTTER_Wrapper__CPU__RF_WR_MUX);
    __Vhier.add(&__Vscope_OTTER_Wrapper__SSG_DISP, &__Vscope_OTTER_Wrapper__SSG_DISP__BCDMod);
    __Vhier.add(&__Vscope_OTTER_Wrapper__SSG_DISP, &__Vscope_OTTER_Wrapper__SSG_DISP__CathMod);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"ANODES", &(TOP.OTTER_Wrapper__DOT__ANODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"BTNC", &(TOP.OTTER_Wrapper__DOT__BTNC), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"BTNL", &(TOP.OTTER_Wrapper__DOT__BTNL), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"BTN_INTR", &(TOP.OTTER_Wrapper__DOT__BTN_INTR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"CATHODES", &(TOP.OTTER_Wrapper__DOT__CATHODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"IOBUS_addr", &(TOP.OTTER_Wrapper__DOT__IOBUS_addr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"IOBUS_in", &(TOP.OTTER_Wrapper__DOT__IOBUS_in), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"IOBUS_out", &(TOP.OTTER_Wrapper__DOT__IOBUS_out), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"IOBUS_wr", &(TOP.OTTER_Wrapper__DOT__IOBUS_wr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"LEDS", &(TOP.OTTER_Wrapper__DOT__LEDS), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"LEDS_AD", const_cast<void*>(static_cast<const void*>(&(TOP.OTTER_Wrapper__DOT__LEDS_AD))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"SSEG_AD", const_cast<void*>(static_cast<const void*>(&(TOP.OTTER_Wrapper__DOT__SSEG_AD))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"SWITCHES", &(TOP.OTTER_Wrapper__DOT__SWITCHES), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"SWITCHES_AD", const_cast<void*>(static_cast<const void*>(&(TOP.OTTER_Wrapper__DOT__SWITCHES_AD))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"clk_50", &(TOP.OTTER_Wrapper__DOT__clk_50), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_SSEG", &(TOP.OTTER_Wrapper__DOT__r_SSEG), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_lcd_ready", &(TOP.OTTER_Wrapper__DOT__r_lcd_ready), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_lcdinstr", &(TOP.OTTER_Wrapper__DOT__r_lcdinstr), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,9,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_random", &(TOP.OTTER_Wrapper__DOT__r_random), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_vga_rd", &(TOP.OTTER_Wrapper__DOT__r_vga_rd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_vga_wa", &(TOP.OTTER_Wrapper__DOT__r_vga_wa), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,12,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_vga_wd", &(TOP.OTTER_Wrapper__DOT__r_vga_wd), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"r_vga_we", &(TOP.OTTER_Wrapper__DOT__r_vga_we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"s_INTR", &(TOP.OTTER_Wrapper__DOT__s_INTR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper.varInsert(__Vfinal,"s_reset", &(TOP.OTTER_Wrapper__DOT__s_reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"INTR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__INTR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"IOBUS_ADDR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IOBUS_ADDR), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"IOBUS_IN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IOBUS_IN), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"IOBUS_OUT", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IOBUS_OUT), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"IOBUS_WR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IOBUS_WR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"MEPC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEPC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"MSTATUS", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MSTATUS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"MTVEC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MTVEC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"PCWrite", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PCWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"RST", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RST), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"alu_fun", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__alu_fun), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"alu_res_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__alu_res_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"alu_srcA", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__alu_srcA), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"alu_srcB", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__alu_srcB), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"bcond_to_cu_eq", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_eq), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"bcond_to_cu_lt", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_lt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"bcond_to_cu_ltu", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__bcond_to_cu_ltu), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"branch_baddr", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__branch_baddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"btype_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__btype_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"csr_RD", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__csr_RD), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"csr_WE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__csr_WE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"instr_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__instr_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"int_taken", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__int_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"itype_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__itype_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"jal_baddr", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__jal_baddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"jalr_baddr", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__jalr_baddr), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"jtype_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__jtype_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"memRDEN1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__memRDEN1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"memRDEN2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__memRDEN2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"memWE2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__memWE2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"mem_data", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__mem_data), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"mret_exec", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__mret_exec), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"npc_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__npc_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"pcSource", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__pcSource), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"pc_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__pc_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"pcmux_to_pc", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__pcmux_to_pc), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"regWrite", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__regWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"reset", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"rf_wr_sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__rf_wr_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"rfwrmux_to_rf", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__rfwrmux_to_rf), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"rs1_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__rs1_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"rs2_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__rs2_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"srcAmux_to_alu", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__srcAmux_to_alu), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"srcBmux_to_alu", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__srcBmux_to_alu), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"stype_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__stype_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU.varInsert(__Vfinal,"utype_bus", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__utype_bus), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU0.varInsert(__Vfinal,"ALU_FUN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__ALU_FUN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__CPU__ALU0.varInsert(__Vfinal,"RESULT", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__RESULT), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU0.varInsert(__Vfinal,"srcA", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcA), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU0.varInsert(__Vfinal,"srcB", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU0__DOT__srcB), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"A", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"B", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"C", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__C), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"D", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__D), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"O", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__O), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCA_MUX.varInsert(__Vfinal,"sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCA_MUX__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"A", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"B", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"C", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__C), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"D", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__D), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"E", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__E), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"F", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__F), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"O", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__O), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__ALU_SRCB_MUX.varInsert(__Vfinal,"sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__ALU_SRCB_MUX__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"BRANCH", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__BRANCH), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"B_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__B_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"I_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__I_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"JAL", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JAL), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"JALR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__JALR), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"J_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__J_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"PC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BADDR_GEN0.varInsert(__Vfinal,"RS1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BADDR_GEN0__DOT__RS1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.varInsert(__Vfinal,"BR_EQ", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_EQ), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.varInsert(__Vfinal,"BR_LT", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LT), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.varInsert(__Vfinal,"BR_LTU", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__BR_LTU), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.varInsert(__Vfinal,"RS1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__BCOND_GEN0.varInsert(__Vfinal,"RS2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__BCOND_GEN0__DOT__RS2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"ADDR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__ADDR), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,11,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"INT_TAKEN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__INT_TAKEN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"MEPC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MEPC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"MSTATUS", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MSTATUS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"MTVEC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__MTVEC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"PC", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__PC), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"RD", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RD), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"RST", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__RST), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"WD", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WD), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"WR_EN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__WR_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"clk", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CSR0.varInsert(__Vfinal,"mret_exec", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CSR0__DOT__mret_exec), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"alu_fun", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_fun), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"alu_srcA", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcA), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"alu_srcB", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__alu_srcB), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"br_eq", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_eq), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"br_lt", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_lt), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"br_ltu", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__br_ltu), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"funct3", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"funct7", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__funct7), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"int_taken", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__int_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"opcode", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"pcSource", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__pcSource), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__CU_DCDR0.varInsert(__Vfinal,"rf_wr_sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_DCDR0__DOT__rf_wr_sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"INTR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__INTR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"NS", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__NS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"PCWrite", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PCWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"PS", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__PS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"RST", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__RST), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"clk", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"csr_WE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__csr_WE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"funct3", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__funct3), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"int_taken", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__int_taken), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"memRDEN1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"memRDEN2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memRDEN2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"memWE2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__memWE2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"mret_exec", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__mret_exec), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"opcode", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__opcode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,6,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"regWrite", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__regWrite), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__CU_FSM0.varInsert(__Vfinal,"reset", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__CU_FSM0__DOT__reset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"B_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__B_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"INSTRUCT", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__INSTRUCT), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"I_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__I_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"J_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__J_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"S_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__S_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__IMMED_GEN0.varInsert(__Vfinal,"U_TYPE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__IMMED_GEN0__DOT__U_TYPE), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"IO_IN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_IN), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"IO_WR", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__IO_WR), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_ADDR1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR1), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,13,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_ADDR2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_ADDR2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_CLK", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_DIN2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DIN2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_DOUT1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_DOUT2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_DOUT2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_RDEN1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_RDEN2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_RDEN2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_SIGN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIGN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_SIZE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_SIZE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"MEM_WE2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__MEM_WE2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"byteOffset", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__byteOffset), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"ioBuffer", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__ioBuffer), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"memReadSized", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadSized), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"memReadWord", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memReadWord), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"memory", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__memory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,16383);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"weAddrValid", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__weAddrValid), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__MEM0.varInsert(__Vfinal,"wordAddr2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__MEM0__DOT__wordAddr2), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,13,0);
        __Vscope_OTTER_Wrapper__CPU__PC0.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__PC0.varInsert(__Vfinal,"PC_COUNT", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_COUNT), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC0.varInsert(__Vfinal,"PC_DIN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_DIN), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC0.varInsert(__Vfinal,"PC_RST", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_RST), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__PC0.varInsert(__Vfinal,"PC_WRITE", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC0__DOT__PC_WRITE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"A", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"B", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"C", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__C), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"D", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__D), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"E", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__E), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"F", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__F), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"O", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__O), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__PC_MUX.varInsert(__Vfinal,"sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__PC_MUX__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_ADR1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR1), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_ADR2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_ADR2), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_EN", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_EN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_RS1", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_RS2", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_RS2), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_WA", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WA), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"RF_WD", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__RF_WD), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF0.varInsert(__Vfinal,"ram", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF0__DOT__ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"A", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__A), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"B", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__B), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"C", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__C), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"D", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__D), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"O", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__O), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_OTTER_Wrapper__CPU__RF_WR_MUX.varInsert(__Vfinal,"sel", &(TOP.OTTER_Wrapper__DOT__CPU__DOT__RF_WR_MUX__DOT__sel), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"BTN", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__BTN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"DB_BTN", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__DB_BTN), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"NS", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__NS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"PS", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__PS), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"c_HIGH_GOING_LOW_CLOCKS", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__c_HIGH_GOING_LOW_CLOCKS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"c_LOW_GOING_HIGH_CLOCKS", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__c_LOW_GOING_HIGH_CLOCKS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"c_ONE_SHOT_CLOCKS", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__c_ONE_SHOT_CLOCKS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"s_count_inc", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_inc), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"s_count_rst", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__s_count_rst), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__DEBOUCE.varInsert(__Vfinal,"s_db_count", &(TOP.OTTER_Wrapper__DOT__DEBOUCE__DOT__s_db_count), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"ANODES", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__ANODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"BCD_Val", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCD_Val), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"CATHODES", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CATHODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"DATA_IN", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__DATA_IN), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"Hex_Val", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__Hex_Val), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper__SSG_DISP.varInsert(__Vfinal,"MODE", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__MODE), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"HEX", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HEX), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"HUNDREDS", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__HUNDREDS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"ONES", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__ONES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"TENS", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__TENS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"THOUSANDS", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__THOUSANDS), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__BCDMod.varInsert(__Vfinal,"i", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__BCDMod__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"ANODES", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__ANODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,3,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"CATHODES", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CATHODES), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"CLK", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__CLK), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"HEX", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__HEX), false, VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,15,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"clk_div_counter", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__clk_div_counter), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,19,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"r_disp_digit", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__r_disp_digit), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
        __Vscope_OTTER_Wrapper__SSG_DISP__CathMod.varInsert(__Vfinal,"s_clk_500", &(TOP.OTTER_Wrapper__DOT__SSG_DISP__DOT__CathMod__DOT__s_clk_500), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"ANODES", &(TOP.ANODES), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,3,0);
        __Vscope_TOP.varInsert(__Vfinal,"BTNC", &(TOP.BTNC), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"BTNL", &(TOP.BTNL), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"CATHODES", &(TOP.CATHODES), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,7,0);
        __Vscope_TOP.varInsert(__Vfinal,"CLK", &(TOP.CLK), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"LEDS", &(TOP.LEDS), false, VLVT_UINT16,VLVD_OUT|VLVF_PUB_RW,1 ,15,0);
        __Vscope_TOP.varInsert(__Vfinal,"SWITCHES", &(TOP.SWITCHES), false, VLVT_UINT16,VLVD_IN|VLVF_PUB_RW,1 ,15,0);
    }
}
