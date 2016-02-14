// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "pyrconstuct_top_Loop_4_proc.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic pyrconstuct_top_Loop_4_proc::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic pyrconstuct_top_Loop_4_proc::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> pyrconstuct_top_Loop_4_proc::ap_ST_st1_fsm_0 = "1";
const sc_lv<3> pyrconstuct_top_Loop_4_proc::ap_ST_pp0_stg0_fsm_1 = "10";
const sc_lv<3> pyrconstuct_top_Loop_4_proc::ap_ST_st4_fsm_2 = "100";
const sc_lv<32> pyrconstuct_top_Loop_4_proc::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> pyrconstuct_top_Loop_4_proc::ap_const_lv1_1 = "1";
const sc_lv<32> pyrconstuct_top_Loop_4_proc::ap_const_lv32_1 = "1";
const sc_lv<1> pyrconstuct_top_Loop_4_proc::ap_const_lv1_0 = "0";
const sc_lv<10> pyrconstuct_top_Loop_4_proc::ap_const_lv10_0 = "0000000000";
const sc_lv<10> pyrconstuct_top_Loop_4_proc::ap_const_lv10_200 = "1000000000";
const sc_lv<10> pyrconstuct_top_Loop_4_proc::ap_const_lv10_1 = "1";
const sc_lv<32> pyrconstuct_top_Loop_4_proc::ap_const_lv32_9 = "1001";
const sc_lv<7> pyrconstuct_top_Loop_4_proc::ap_const_lv7_0 = "0000000";
const sc_lv<32> pyrconstuct_top_Loop_4_proc::ap_const_lv32_2 = "10";

pyrconstuct_top_Loop_4_proc::pyrconstuct_top_Loop_4_proc(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st4_fsm_2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st4_fsm_2 );

    SC_METHOD(thread_ap_sig_bdd_129);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_22);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_50);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_64);
    sensitive << ( fftPyrOut_M_real_V_empty_n );
    sensitive << ( fftPyrOut_M_imag_V_empty_n );
    sensitive << ( imgInTmp2_full_n );
    sensitive << ( exitcond2_reg_123 );

    SC_METHOD(thread_ap_sig_bdd_77);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_sig_cseq_ST_pp0_stg0_fsm_1);
    sensitive << ( ap_sig_bdd_50 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_22 );

    SC_METHOD(thread_ap_sig_cseq_ST_st4_fsm_2);
    sensitive << ( ap_sig_bdd_129 );

    SC_METHOD(thread_exitcond2_fu_78_p2);
    sensitive << ( i6_reg_67 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_fftPyrOut_M_imag_V_read);
    sensitive << ( exitcond2_reg_123 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_fftPyrOut_M_real_V_read);
    sensitive << ( exitcond2_reg_123 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_i_fu_84_p2);
    sensitive << ( i6_reg_67 );

    SC_METHOD(thread_imgInTmp2_din);
    sensitive << ( exitcond2_reg_123 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_1_fu_100_p4 );
    sensitive << ( tmp_fu_90_p4 );

    SC_METHOD(thread_imgInTmp2_write);
    sensitive << ( exitcond2_reg_123 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_tmp_1_fu_100_p4);
    sensitive << ( fftPyrOut_M_imag_V_dout );

    SC_METHOD(thread_tmp_fu_90_p4);
    sensitive << ( fftPyrOut_M_real_V_dout );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond2_fu_78_p2 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_64 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_sig_bdd_77 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "pyrconstuct_top_Loop_4_proc_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, fftPyrOut_M_real_V_dout, "(port)fftPyrOut_M_real_V_dout");
    sc_trace(mVcdFile, fftPyrOut_M_real_V_empty_n, "(port)fftPyrOut_M_real_V_empty_n");
    sc_trace(mVcdFile, fftPyrOut_M_real_V_read, "(port)fftPyrOut_M_real_V_read");
    sc_trace(mVcdFile, fftPyrOut_M_imag_V_dout, "(port)fftPyrOut_M_imag_V_dout");
    sc_trace(mVcdFile, fftPyrOut_M_imag_V_empty_n, "(port)fftPyrOut_M_imag_V_empty_n");
    sc_trace(mVcdFile, fftPyrOut_M_imag_V_read, "(port)fftPyrOut_M_imag_V_read");
    sc_trace(mVcdFile, imgInTmp2_din, "(port)imgInTmp2_din");
    sc_trace(mVcdFile, imgInTmp2_full_n, "(port)imgInTmp2_full_n");
    sc_trace(mVcdFile, imgInTmp2_write, "(port)imgInTmp2_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_22, "ap_sig_bdd_22");
    sc_trace(mVcdFile, i6_reg_67, "i6_reg_67");
    sc_trace(mVcdFile, exitcond2_fu_78_p2, "exitcond2_fu_78_p2");
    sc_trace(mVcdFile, exitcond2_reg_123, "exitcond2_reg_123");
    sc_trace(mVcdFile, ap_sig_cseq_ST_pp0_stg0_fsm_1, "ap_sig_cseq_ST_pp0_stg0_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_50, "ap_sig_bdd_50");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, ap_sig_bdd_64, "ap_sig_bdd_64");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, i_fu_84_p2, "i_fu_84_p2");
    sc_trace(mVcdFile, ap_sig_bdd_77, "ap_sig_bdd_77");
    sc_trace(mVcdFile, tmp_1_fu_100_p4, "tmp_1_fu_100_p4");
    sc_trace(mVcdFile, tmp_fu_90_p4, "tmp_fu_90_p4");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st4_fsm_2, "ap_sig_cseq_ST_st4_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_129, "ap_sig_bdd_129");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

pyrconstuct_top_Loop_4_proc::~pyrconstuct_top_Loop_4_proc() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void pyrconstuct_top_Loop_4_proc::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_st1_fsm_0;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             !esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_77.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !ap_sig_bdd_77.read()) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                     !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
                     !esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0)))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
         !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
         esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0))) {
        i6_reg_67 = i_fu_84_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                !ap_sig_bdd_77.read())) {
        i6_reg_67 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        exitcond2_reg_123 = exitcond2_fu_78_p2.read();
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st4_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_bdd_129() {
    ap_sig_bdd_129 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_bdd_22() {
    ap_sig_bdd_22 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_bdd_50() {
    ap_sig_bdd_50 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_bdd_64() {
    ap_sig_bdd_64 = ((esl_seteq<1,1,1>(fftPyrOut_M_real_V_empty_n.read(), ap_const_logic_0) && 
  esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(fftPyrOut_M_imag_V_empty_n.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(imgInTmp2_full_n.read(), ap_const_logic_0)));
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_bdd_77() {
    ap_sig_bdd_77 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_50.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_22.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_ap_sig_cseq_ST_st4_fsm_2() {
    if (ap_sig_bdd_129.read()) {
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st4_fsm_2 = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_exitcond2_fu_78_p2() {
    exitcond2_fu_78_p2 = (!i6_reg_67.read().is_01() || !ap_const_lv10_200.is_01())? sc_lv<1>(): sc_lv<1>(i6_reg_67.read() == ap_const_lv10_200);
}

void pyrconstuct_top_Loop_4_proc::thread_fftPyrOut_M_imag_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        fftPyrOut_M_imag_V_read = ap_const_logic_1;
    } else {
        fftPyrOut_M_imag_V_read = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_fftPyrOut_M_real_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        fftPyrOut_M_real_V_read = ap_const_logic_1;
    } else {
        fftPyrOut_M_real_V_read = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_i_fu_84_p2() {
    i_fu_84_p2 = (!i6_reg_67.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i6_reg_67.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void pyrconstuct_top_Loop_4_proc::thread_imgInTmp2_din() {
    imgInTmp2_din = esl_concat<25,7>(esl_concat<16,9>(esl_concat<9,7>(tmp_1_fu_100_p4.read(), ap_const_lv7_0), tmp_fu_90_p4.read()), ap_const_lv7_0);
}

void pyrconstuct_top_Loop_4_proc::thread_imgInTmp2_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         esl_seteq<1,1,1>(exitcond2_reg_123.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        imgInTmp2_write = ap_const_logic_1;
    } else {
        imgInTmp2_write = ap_const_logic_0;
    }
}

void pyrconstuct_top_Loop_4_proc::thread_tmp_1_fu_100_p4() {
    tmp_1_fu_100_p4 = fftPyrOut_M_imag_V_dout.read().range(9, 1);
}

void pyrconstuct_top_Loop_4_proc::thread_tmp_fu_90_p4() {
    tmp_fu_90_p4 = fftPyrOut_M_real_V_dout.read().range(9, 1);
}

void pyrconstuct_top_Loop_4_proc::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_bdd_77.read()) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if (!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_64.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(exitcond2_fu_78_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_st4_fsm_2;
            } else {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_st1_fsm_0;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}
