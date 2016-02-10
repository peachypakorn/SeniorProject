// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

#include "cmpy_complex_top_Loop_1_proc143.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic cmpy_complex_top_Loop_1_proc143::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic cmpy_complex_top_Loop_1_proc143::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<3> cmpy_complex_top_Loop_1_proc143::ap_ST_st1_fsm_0 = "1";
const sc_lv<3> cmpy_complex_top_Loop_1_proc143::ap_ST_pp0_stg0_fsm_1 = "10";
const sc_lv<3> cmpy_complex_top_Loop_1_proc143::ap_ST_st15_fsm_2 = "100";
const sc_lv<32> cmpy_complex_top_Loop_1_proc143::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> cmpy_complex_top_Loop_1_proc143::ap_const_lv1_1 = "1";
const sc_lv<32> cmpy_complex_top_Loop_1_proc143::ap_const_lv32_1 = "1";
const sc_lv<1> cmpy_complex_top_Loop_1_proc143::ap_const_lv1_0 = "0";
const sc_lv<31> cmpy_complex_top_Loop_1_proc143::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<31> cmpy_complex_top_Loop_1_proc143::ap_const_lv31_1 = "1";
const sc_lv<32> cmpy_complex_top_Loop_1_proc143::ap_const_lv32_2 = "10";

cmpy_complex_top_Loop_1_proc143::cmpy_complex_top_Loop_1_proc143(sc_module_name name) : sc_module(name), mVcdFile(0) {
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102 = new cmpy_complex_top_myatan2_complex_ap_fixed_s("grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102");
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_clk(ap_clk);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_rst(ap_rst);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_start(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_done(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_done);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_idle(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_idle);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_ready(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->xin_TVALID(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_ce(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->xin_TDATA(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->xin_TREADY(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->xin_TDATA_blk_n(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n);
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102->ap_return(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_sig_cseq_ST_st15_fsm_2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_sig_cseq_ST_st15_fsm_2 );

    SC_METHOD(thread_ap_sig_bdd_115);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( nL_out_full_n );
    sensitive << ( factor_V_out_full_n );

    SC_METHOD(thread_ap_sig_bdd_22);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_225);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_57);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_sig_bdd_68);
    sensitive << ( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n );
    sensitive << ( tmp_i_i_reg_139 );

    SC_METHOD(thread_ap_sig_cseq_ST_pp0_stg0_fsm_1);
    sensitive << ( ap_sig_bdd_57 );

    SC_METHOD(thread_ap_sig_cseq_ST_st15_fsm_2);
    sensitive << ( ap_sig_bdd_225 );

    SC_METHOD(thread_ap_sig_cseq_ST_st1_fsm_0);
    sensitive << ( ap_sig_bdd_22 );

    SC_METHOD(thread_factor_V_out_din);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( factor_V );
    sensitive << ( ap_sig_bdd_115 );

    SC_METHOD(thread_factor_V_out_write);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_115 );

    SC_METHOD(thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( tmp_i_i_reg_139 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10 );

    SC_METHOD(thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start);
    sensitive << ( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg );

    SC_METHOD(thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA);
    sensitive << ( sigRef_TDATA );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( tmp_i_i_reg_139 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );

    SC_METHOD(thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID);
    sensitive << ( sigRef_TVALID );

    SC_METHOD(thread_i_cast_i_i_fu_114_p1);
    sensitive << ( i_i_i_phi_fu_94_p4 );

    SC_METHOD(thread_i_fu_123_p2);
    sensitive << ( i_i_i_phi_fu_94_p4 );

    SC_METHOD(thread_i_i_i_phi_fu_94_p4);
    sensitive << ( i_i_i_reg_90 );
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( tmp_i_i_reg_139 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( i_reg_143 );

    SC_METHOD(thread_nL_out_din);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( nL );
    sensitive << ( ap_sig_bdd_115 );

    SC_METHOD(thread_nL_out_write);
    sensitive << ( ap_sig_cseq_ST_st1_fsm_0 );
    sensitive << ( ap_sig_bdd_115 );

    SC_METHOD(thread_refAtans_V_address0);
    sensitive << ( ap_reg_ppiten_pp0_it12 );
    sensitive << ( tmp_17_i_i_fu_129_p1 );

    SC_METHOD(thread_refAtans_V_ce0);
    sensitive << ( ap_sig_bdd_68 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it12 );

    SC_METHOD(thread_refAtans_V_d0);
    sensitive << ( ap_reg_ppiten_pp0_it12 );
    sensitive << ( tmp_1980_i_i_reg_148 );

    SC_METHOD(thread_refAtans_V_we0);
    sensitive << ( ap_sig_bdd_68 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it12 );
    sensitive << ( ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11 );

    SC_METHOD(thread_sigRef_TREADY);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY );

    SC_METHOD(thread_tmp_17_i_i_fu_129_p1);
    sensitive << ( ap_reg_ppstg_i_i_i_reg_90_pp0_it11 );

    SC_METHOD(thread_tmp_fu_108_p2);
    sensitive << ( nL );

    SC_METHOD(thread_tmp_i_i_fu_118_p2);
    sensitive << ( ap_sig_cseq_ST_pp0_stg0_fsm_1 );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_68 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( tmp_reg_134 );
    sensitive << ( i_cast_i_i_fu_114_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_reg_ppiten_pp0_it0 );
    sensitive << ( ap_sig_bdd_68 );
    sensitive << ( ap_reg_ppiten_pp0_it1 );
    sensitive << ( ap_reg_ppiten_pp0_it11 );
    sensitive << ( ap_reg_ppiten_pp0_it12 );
    sensitive << ( ap_sig_bdd_115 );
    sensitive << ( tmp_i_i_fu_118_p2 );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "001";
    ap_reg_ppiten_pp0_it0 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it1 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it2 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it3 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it4 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it5 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it6 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it7 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it8 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it9 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it10 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it11 = SC_LOGIC_0;
    ap_reg_ppiten_pp0_it12 = SC_LOGIC_0;
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "cmpy_complex_top_Loop_1_proc143_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, nL, "(port)nL");
    sc_trace(mVcdFile, refAtans_V_address0, "(port)refAtans_V_address0");
    sc_trace(mVcdFile, refAtans_V_ce0, "(port)refAtans_V_ce0");
    sc_trace(mVcdFile, refAtans_V_we0, "(port)refAtans_V_we0");
    sc_trace(mVcdFile, refAtans_V_d0, "(port)refAtans_V_d0");
    sc_trace(mVcdFile, sigRef_TDATA, "(port)sigRef_TDATA");
    sc_trace(mVcdFile, sigRef_TVALID, "(port)sigRef_TVALID");
    sc_trace(mVcdFile, sigRef_TREADY, "(port)sigRef_TREADY");
    sc_trace(mVcdFile, factor_V, "(port)factor_V");
    sc_trace(mVcdFile, nL_out_din, "(port)nL_out_din");
    sc_trace(mVcdFile, nL_out_full_n, "(port)nL_out_full_n");
    sc_trace(mVcdFile, nL_out_write, "(port)nL_out_write");
    sc_trace(mVcdFile, factor_V_out_din, "(port)factor_V_out_din");
    sc_trace(mVcdFile, factor_V_out_full_n, "(port)factor_V_out_full_n");
    sc_trace(mVcdFile, factor_V_out_write, "(port)factor_V_out_write");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st1_fsm_0, "ap_sig_cseq_ST_st1_fsm_0");
    sc_trace(mVcdFile, ap_sig_bdd_22, "ap_sig_bdd_22");
    sc_trace(mVcdFile, i_i_i_reg_90, "i_i_i_reg_90");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it1, "ap_reg_ppstg_i_i_i_reg_90_pp0_it1");
    sc_trace(mVcdFile, ap_sig_cseq_ST_pp0_stg0_fsm_1, "ap_sig_cseq_ST_pp0_stg0_fsm_1");
    sc_trace(mVcdFile, ap_sig_bdd_57, "ap_sig_bdd_57");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it0, "ap_reg_ppiten_pp0_it0");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n");
    sc_trace(mVcdFile, tmp_i_i_reg_139, "tmp_i_i_reg_139");
    sc_trace(mVcdFile, ap_sig_bdd_68, "ap_sig_bdd_68");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it1, "ap_reg_ppiten_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it2, "ap_reg_ppiten_pp0_it2");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it3, "ap_reg_ppiten_pp0_it3");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it4, "ap_reg_ppiten_pp0_it4");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it5, "ap_reg_ppiten_pp0_it5");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it6, "ap_reg_ppiten_pp0_it6");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it7, "ap_reg_ppiten_pp0_it7");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it8, "ap_reg_ppiten_pp0_it8");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it9, "ap_reg_ppiten_pp0_it9");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it10, "ap_reg_ppiten_pp0_it10");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it11, "ap_reg_ppiten_pp0_it11");
    sc_trace(mVcdFile, ap_reg_ppiten_pp0_it12, "ap_reg_ppiten_pp0_it12");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it2, "ap_reg_ppstg_i_i_i_reg_90_pp0_it2");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it3, "ap_reg_ppstg_i_i_i_reg_90_pp0_it3");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it4, "ap_reg_ppstg_i_i_i_reg_90_pp0_it4");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it5, "ap_reg_ppstg_i_i_i_reg_90_pp0_it5");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it6, "ap_reg_ppstg_i_i_i_reg_90_pp0_it6");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it7, "ap_reg_ppstg_i_i_i_reg_90_pp0_it7");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it8, "ap_reg_ppstg_i_i_i_reg_90_pp0_it8");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it9, "ap_reg_ppstg_i_i_i_reg_90_pp0_it9");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it10, "ap_reg_ppstg_i_i_i_reg_90_pp0_it10");
    sc_trace(mVcdFile, ap_reg_ppstg_i_i_i_reg_90_pp0_it11, "ap_reg_ppstg_i_i_i_reg_90_pp0_it11");
    sc_trace(mVcdFile, tmp_fu_108_p2, "tmp_fu_108_p2");
    sc_trace(mVcdFile, tmp_reg_134, "tmp_reg_134");
    sc_trace(mVcdFile, ap_sig_bdd_115, "ap_sig_bdd_115");
    sc_trace(mVcdFile, tmp_i_i_fu_118_p2, "tmp_i_i_fu_118_p2");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10");
    sc_trace(mVcdFile, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11, "ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11");
    sc_trace(mVcdFile, i_fu_123_p2, "i_fu_123_p2");
    sc_trace(mVcdFile, i_reg_143, "i_reg_143");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return");
    sc_trace(mVcdFile, tmp_1980_i_i_reg_148, "tmp_1980_i_i_reg_148");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_done, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_done");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_idle, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_idle");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY");
    sc_trace(mVcdFile, i_i_i_phi_fu_94_p4, "i_i_i_phi_fu_94_p4");
    sc_trace(mVcdFile, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg, "grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg");
    sc_trace(mVcdFile, tmp_17_i_i_fu_129_p1, "tmp_17_i_i_fu_129_p1");
    sc_trace(mVcdFile, i_cast_i_i_fu_114_p1, "i_cast_i_i_fu_114_p1");
    sc_trace(mVcdFile, ap_sig_cseq_ST_st15_fsm_2, "ap_sig_cseq_ST_st15_fsm_2");
    sc_trace(mVcdFile, ap_sig_bdd_225, "ap_sig_bdd_225");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

cmpy_complex_top_Loop_1_proc143::~cmpy_complex_top_Loop_1_proc143() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102;
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_clk_no_reset_() {
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
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st15_fsm_2.read())) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read()))) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_115.read())) {
            ap_reg_ppiten_pp0_it0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read()))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                     !ap_sig_bdd_115.read()) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                     !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
                     esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read())))) {
            ap_reg_ppiten_pp0_it1 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it10 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it10 = ap_reg_ppiten_pp0_it9.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it11 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it11 = ap_reg_ppiten_pp0_it10.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it12 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it12 = ap_reg_ppiten_pp0_it11.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
                    !ap_sig_bdd_115.read())) {
            ap_reg_ppiten_pp0_it12 = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it2 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it2 = ap_reg_ppiten_pp0_it1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it3 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it3 = ap_reg_ppiten_pp0_it2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it4 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it4 = ap_reg_ppiten_pp0_it3.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it5 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it5 = ap_reg_ppiten_pp0_it4.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it6 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it6 = ap_reg_ppiten_pp0_it5.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it7 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it7 = ap_reg_ppiten_pp0_it6.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it8 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it8 = ap_reg_ppiten_pp0_it7.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_reg_ppiten_pp0_it9 = ap_const_logic_0;
    } else {
        if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
            ap_reg_ppiten_pp0_it9 = ap_reg_ppiten_pp0_it8.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
             !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
             !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read()))) {
            grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready.read())) {
            grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_115.read())) {
        i_i_i_reg_90 = ap_const_lv31_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
                !esl_seteq<1,1,1>(tmp_i_i_reg_139.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        i_i_i_reg_90 = i_reg_143.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        ap_reg_ppstg_i_i_i_reg_90_pp0_it1 = i_i_i_reg_90.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1 = tmp_i_i_reg_139.read();
        tmp_i_i_reg_139 = tmp_i_i_fu_118_p2.read();
    }
    if (!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        ap_reg_ppstg_i_i_i_reg_90_pp0_it10 = ap_reg_ppstg_i_i_i_reg_90_pp0_it9.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it11 = ap_reg_ppstg_i_i_i_reg_90_pp0_it10.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it2 = ap_reg_ppstg_i_i_i_reg_90_pp0_it1.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it3 = ap_reg_ppstg_i_i_i_reg_90_pp0_it2.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it4 = ap_reg_ppstg_i_i_i_reg_90_pp0_it3.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it5 = ap_reg_ppstg_i_i_i_reg_90_pp0_it4.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it6 = ap_reg_ppstg_i_i_i_reg_90_pp0_it5.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it7 = ap_reg_ppstg_i_i_i_reg_90_pp0_it6.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it8 = ap_reg_ppstg_i_i_i_reg_90_pp0_it7.read();
        ap_reg_ppstg_i_i_i_reg_90_pp0_it9 = ap_reg_ppstg_i_i_i_reg_90_pp0_it8.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7.read();
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9 = ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        i_reg_143 = i_fu_123_p2.read();
    }
    if ((!(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10.read()))) {
        tmp_1980_i_i_reg_148 = grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && !ap_sig_bdd_115.read())) {
        tmp_reg_134 = tmp_fu_108_p2.read();
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_done_reg.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st15_fsm_2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st15_fsm_2.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_bdd_115() {
    ap_sig_bdd_115 = (esl_seteq<1,1,1>(nL_out_full_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(factor_V_out_full_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_bdd_22() {
    ap_sig_bdd_22 = esl_seteq<1,1,1>(ap_CS_fsm.read().range(0, 0), ap_const_lv1_1);
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_bdd_225() {
    ap_sig_bdd_225 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(2, 2));
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_bdd_57() {
    ap_sig_bdd_57 = esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm.read().range(1, 1));
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_bdd_68() {
    ap_sig_bdd_68 = (esl_seteq<1,1,1>(grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n.read(), ap_const_logic_0) && !esl_seteq<1,1,1>(tmp_i_i_reg_139.read(), ap_const_lv1_0));
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_cseq_ST_pp0_stg0_fsm_1() {
    if (ap_sig_bdd_57.read()) {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_cseq_ST_st15_fsm_2() {
    if (ap_sig_bdd_225.read()) {
        ap_sig_cseq_ST_st15_fsm_2 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st15_fsm_2 = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_sig_cseq_ST_st1_fsm_0() {
    if (ap_sig_bdd_22.read()) {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    } else {
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_factor_V_out_din() {
    factor_V_out_din = factor_V.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_factor_V_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_115.read())) {
        factor_V_out_write = ap_const_logic_1;
    } else {
        factor_V_out_write = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         (!esl_seteq<1,1,1>(tmp_i_i_reg_139.read(), ap_const_lv1_0) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8.read()) || 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9.read())))) {
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce = ap_const_logic_1;
    } else {
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start() {
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start = grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA() {
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA = sigRef_TDATA.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID() {
    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID = sigRef_TVALID.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_i_cast_i_i_fu_114_p1() {
    i_cast_i_i_fu_114_p1 = esl_zext<32,31>(i_i_i_phi_fu_94_p4.read());
}

void cmpy_complex_top_Loop_1_proc143::thread_i_fu_123_p2() {
    i_fu_123_p2 = (!i_i_i_phi_fu_94_p4.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_biguint<31>(i_i_i_phi_fu_94_p4.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void cmpy_complex_top_Loop_1_proc143::thread_i_i_i_phi_fu_94_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_pp0_stg0_fsm_1.read()) && 
         !esl_seteq<1,1,1>(tmp_i_i_reg_139.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()))) {
        i_i_i_phi_fu_94_p4 = i_reg_143.read();
    } else {
        i_i_i_phi_fu_94_p4 = i_i_i_reg_90.read();
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_nL_out_din() {
    nL_out_din = nL.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_nL_out_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_sig_cseq_ST_st1_fsm_0.read()) && 
         !ap_sig_bdd_115.read())) {
        nL_out_write = ap_const_logic_1;
    } else {
        nL_out_write = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_refAtans_V_address0() {
    refAtans_V_address0 =  (sc_lv<11>) (tmp_17_i_i_fu_129_p1.read());
}

void cmpy_complex_top_Loop_1_proc143::thread_refAtans_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
         !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
        refAtans_V_ce0 = ap_const_logic_1;
    } else {
        refAtans_V_ce0 = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_refAtans_V_d0() {
    refAtans_V_d0 = tmp_1980_i_i_reg_148.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_refAtans_V_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
          !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11.read())))) {
        refAtans_V_we0 = ap_const_logic_1;
    } else {
        refAtans_V_we0 = ap_const_logic_0;
    }
}

void cmpy_complex_top_Loop_1_proc143::thread_sigRef_TREADY() {
    sigRef_TREADY = grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY.read();
}

void cmpy_complex_top_Loop_1_proc143::thread_tmp_17_i_i_fu_129_p1() {
    tmp_17_i_i_fu_129_p1 = esl_zext<64,31>(ap_reg_ppstg_i_i_i_reg_90_pp0_it11.read());
}

void cmpy_complex_top_Loop_1_proc143::thread_tmp_fu_108_p2() {
    tmp_fu_108_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): nL.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void cmpy_complex_top_Loop_1_proc143::thread_tmp_i_i_fu_118_p2() {
    tmp_i_i_fu_118_p2 = (!i_cast_i_i_fu_114_p1.read().is_01() || !tmp_reg_134.read().is_01())? sc_lv<1>(): (sc_bigint<32>(i_cast_i_i_fu_114_p1.read()) < sc_bigint<32>(tmp_reg_134.read()));
}

void cmpy_complex_top_Loop_1_proc143::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!ap_sig_bdd_115.read()) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else {
                ap_NS_fsm = ap_ST_st1_fsm_0;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read())) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read()) && !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it12.read()) && 
  !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it11.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()) && 
  !(ap_sig_bdd_68.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())) && 
  esl_seteq<1,1,1>(ap_const_lv1_0, tmp_i_i_fu_118_p2.read()) && 
  !esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read())))) {
                ap_NS_fsm = ap_ST_st15_fsm_2;
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
