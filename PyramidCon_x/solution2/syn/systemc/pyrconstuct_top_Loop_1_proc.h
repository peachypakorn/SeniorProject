// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _pyrconstuct_top_Loop_1_proc_HH_
#define _pyrconstuct_top_Loop_1_proc_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pyrconstuct_top_Loop_1_proc : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > imgIn_TDATA;
    sc_in< sc_logic > imgIn_TVALID;
    sc_out< sc_logic > imgIn_TREADY;
    sc_out< sc_lv<32> > imgInTmp_din;
    sc_in< sc_logic > imgInTmp_full_n;
    sc_out< sc_logic > imgInTmp_write;


    // Module declarations
    pyrconstuct_top_Loop_1_proc(sc_module_name name);
    SC_HAS_PROCESS(pyrconstuct_top_Loop_1_proc);

    ~pyrconstuct_top_Loop_1_proc();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_21;
    sc_signal< sc_lv<10> > i_1_fu_63_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st2_fsm_1;
    sc_signal< bool > ap_sig_bdd_42;
    sc_signal< sc_lv<1> > exitcond1_fu_57_p2;
    sc_signal< bool > ap_sig_bdd_52;
    sc_signal< sc_lv<10> > i_reg_46;
    sc_signal< bool > ap_sig_bdd_61;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_st1_fsm_0;
    static const sc_lv<2> ap_ST_st2_fsm_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_21();
    void thread_ap_sig_bdd_42();
    void thread_ap_sig_bdd_52();
    void thread_ap_sig_bdd_61();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st2_fsm_1();
    void thread_exitcond1_fu_57_p2();
    void thread_i_1_fu_63_p2();
    void thread_imgInTmp_din();
    void thread_imgInTmp_write();
    void thread_imgIn_TREADY();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif