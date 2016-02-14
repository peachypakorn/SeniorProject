// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#ifndef _pyrconstuct_top_Loop_5_proc_HH_
#define _pyrconstuct_top_Loop_5_proc_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct pyrconstuct_top_Loop_5_proc : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<48> > ifftPyrOut_dout;
    sc_in< sc_logic > ifftPyrOut_empty_n;
    sc_out< sc_logic > ifftPyrOut_read;
    sc_out< sc_lv<24> > pyrFilOut_V_M_real_V_TDATA;
    sc_out< sc_logic > pyrFilOut_V_M_real_V_TVALID;
    sc_in< sc_logic > pyrFilOut_V_M_real_V_TREADY;
    sc_out< sc_lv<24> > pyrFilOut_V_M_imag_V_TDATA;
    sc_out< sc_logic > pyrFilOut_V_M_imag_V_TVALID;
    sc_in< sc_logic > pyrFilOut_V_M_imag_V_TREADY;


    // Module declarations
    pyrconstuct_top_Loop_5_proc(sc_module_name name);
    SC_HAS_PROCESS(pyrconstuct_top_Loop_5_proc);

    ~pyrconstuct_top_Loop_5_proc();

    sc_trace_file* mVcdFile;

    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_sig_cseq_ST_st1_fsm_0;
    sc_signal< bool > ap_sig_bdd_22;
    sc_signal< sc_lv<10> > i7_reg_76;
    sc_signal< sc_lv<1> > exitcond_fu_87_p2;
    sc_signal< sc_lv<1> > exitcond_reg_173;
    sc_signal< sc_logic > ap_sig_cseq_ST_pp0_stg0_fsm_1;
    sc_signal< bool > ap_sig_bdd_48;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it0;
    sc_signal< bool > ap_sig_bdd_56;
    sc_signal< sc_logic > ap_sig_ioackin_pyrFilOut_V_M_real_V_TREADY;
    sc_signal< sc_logic > ap_reg_ppiten_pp0_it1;
    sc_signal< sc_lv<10> > i_fu_93_p2;
    sc_signal< bool > ap_sig_bdd_73;
    sc_signal< sc_logic > ap_reg_ioackin_pyrFilOut_V_M_real_V_TREADY;
    sc_signal< sc_logic > ap_reg_ioackin_pyrFilOut_V_M_imag_V_TREADY;
    sc_signal< sc_lv<14> > tmp_9_fu_99_p4;
    sc_signal< sc_lv<1> > tmp_fu_113_p3;
    sc_signal< sc_lv<15> > tmp_31_cast_fu_121_p1;
    sc_signal< sc_lv<15> > p_Val2_2_cast_fu_109_p1;
    sc_signal< sc_lv<14> > tmp_1_fu_131_p4;
    sc_signal< sc_lv<1> > tmp_2_fu_145_p3;
    sc_signal< sc_lv<15> > tmp_34_cast_fu_153_p1;
    sc_signal< sc_lv<15> > p_Val2_4_cast_fu_141_p1;
    sc_signal< sc_lv<15> > p_Val2_s_fu_125_p2;
    sc_signal< sc_lv<15> > p_Val2_2_fu_157_p2;
    sc_signal< sc_logic > ap_sig_cseq_ST_st4_fsm_2;
    sc_signal< bool > ap_sig_bdd_169;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< bool > ap_sig_bdd_190;
    sc_signal< bool > ap_sig_bdd_189;
    sc_signal< bool > ap_sig_bdd_193;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_st1_fsm_0;
    static const sc_lv<3> ap_ST_pp0_stg0_fsm_1;
    static const sc_lv<3> ap_ST_st4_fsm_2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<10> ap_const_lv10_200;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_sig_bdd_169();
    void thread_ap_sig_bdd_189();
    void thread_ap_sig_bdd_190();
    void thread_ap_sig_bdd_193();
    void thread_ap_sig_bdd_22();
    void thread_ap_sig_bdd_48();
    void thread_ap_sig_bdd_56();
    void thread_ap_sig_bdd_73();
    void thread_ap_sig_cseq_ST_pp0_stg0_fsm_1();
    void thread_ap_sig_cseq_ST_st1_fsm_0();
    void thread_ap_sig_cseq_ST_st4_fsm_2();
    void thread_ap_sig_ioackin_pyrFilOut_V_M_real_V_TREADY();
    void thread_exitcond_fu_87_p2();
    void thread_i_fu_93_p2();
    void thread_ifftPyrOut_read();
    void thread_p_Val2_2_cast_fu_109_p1();
    void thread_p_Val2_2_fu_157_p2();
    void thread_p_Val2_4_cast_fu_141_p1();
    void thread_p_Val2_s_fu_125_p2();
    void thread_pyrFilOut_V_M_imag_V_TDATA();
    void thread_pyrFilOut_V_M_imag_V_TVALID();
    void thread_pyrFilOut_V_M_real_V_TDATA();
    void thread_pyrFilOut_V_M_real_V_TVALID();
    void thread_tmp_1_fu_131_p4();
    void thread_tmp_2_fu_145_p3();
    void thread_tmp_31_cast_fu_121_p1();
    void thread_tmp_34_cast_fu_153_p1();
    void thread_tmp_9_fu_99_p4();
    void thread_tmp_fu_113_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif