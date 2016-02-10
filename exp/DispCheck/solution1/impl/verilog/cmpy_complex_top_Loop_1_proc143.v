// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module cmpy_complex_top_Loop_1_proc143 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        nL,
        refAtans_V_address0,
        refAtans_V_ce0,
        refAtans_V_we0,
        refAtans_V_d0,
        sigRef_TDATA,
        sigRef_TVALID,
        sigRef_TREADY,
        factor_V,
        nL_out_din,
        nL_out_full_n,
        nL_out_write,
        factor_V_out_din,
        factor_V_out_full_n,
        factor_V_out_write
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st15_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv31_0 = 31'b0000000000000000000000000000000;
parameter    ap_const_lv31_1 = 31'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] nL;
output  [10:0] refAtans_V_address0;
output   refAtans_V_ce0;
output   refAtans_V_we0;
output  [19:0] refAtans_V_d0;
input  [23:0] sigRef_TDATA;
input   sigRef_TVALID;
output   sigRef_TREADY;
input  [9:0] factor_V;
output  [31:0] nL_out_din;
input   nL_out_full_n;
output   nL_out_write;
output  [9:0] factor_V_out_din;
input   factor_V_out_full_n;
output   factor_V_out_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg refAtans_V_ce0;
reg refAtans_V_we0;
reg nL_out_write;
reg factor_V_out_write;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [30:0] i_i_i_reg_90;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it1;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_57;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n;
reg   [0:0] tmp_i_i_reg_139;
reg    ap_sig_bdd_68;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
reg    ap_reg_ppiten_pp0_it3 = 1'b0;
reg    ap_reg_ppiten_pp0_it4 = 1'b0;
reg    ap_reg_ppiten_pp0_it5 = 1'b0;
reg    ap_reg_ppiten_pp0_it6 = 1'b0;
reg    ap_reg_ppiten_pp0_it7 = 1'b0;
reg    ap_reg_ppiten_pp0_it8 = 1'b0;
reg    ap_reg_ppiten_pp0_it9 = 1'b0;
reg    ap_reg_ppiten_pp0_it10 = 1'b0;
reg    ap_reg_ppiten_pp0_it11 = 1'b0;
reg    ap_reg_ppiten_pp0_it12 = 1'b0;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it2;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it3;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it4;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it5;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it6;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it7;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it8;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it9;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it10;
reg   [30:0] ap_reg_ppstg_i_i_i_reg_90_pp0_it11;
wire   [31:0] tmp_fu_108_p2;
reg   [31:0] tmp_reg_134;
reg    ap_sig_bdd_115;
wire   [0:0] tmp_i_i_fu_118_p2;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10;
reg   [0:0] ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11;
wire   [30:0] i_fu_123_p2;
reg   [30:0] i_reg_143;
wire   [19:0] grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return;
reg   [19:0] tmp_1980_i_i_reg_148;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_done;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_idle;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID;
reg    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce;
wire   [23:0] grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA;
wire    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY;
reg   [30:0] i_i_i_phi_fu_94_p4;
reg    grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg = 1'b0;
wire   [63:0] tmp_17_i_i_fu_129_p1;
wire   [31:0] i_cast_i_i_fu_114_p1;
reg    ap_sig_cseq_ST_st15_fsm_2;
reg    ap_sig_bdd_225;
reg   [2:0] ap_NS_fsm;


cmpy_complex_top_myatan2_complex_ap_fixed_s grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102(
    .ap_clk( ap_clk ),
    .ap_rst( ap_rst ),
    .ap_start( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start ),
    .ap_done( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_done ),
    .ap_idle( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_idle ),
    .ap_ready( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready ),
    .xin_TVALID( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID ),
    .ap_ce( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce ),
    .xin_TDATA( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA ),
    .xin_TREADY( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY ),
    .xin_TDATA_blk_n( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n ),
    .ap_return( grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return )
);



always @ (posedge ap_clk) begin : ap_ret_ap_CS_fsm
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_st1_fsm_0;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_done_reg
    if (ap_rst == 1'b1) begin
        ap_done_reg <= ap_const_logic_0;
    end else begin
        if ((ap_const_logic_1 == ap_continue)) begin
            ap_done_reg <= ap_const_logic_0;
        end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st15_fsm_2)) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (ap_const_lv1_0 == tmp_i_i_fu_118_p2))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_lv1_0 == tmp_i_i_fu_118_p2))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (ap_const_lv1_0 == tmp_i_i_fu_118_p2)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it10
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it10 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it10 <= ap_reg_ppiten_pp0_it9;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it11
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it11 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it11 <= ap_reg_ppiten_pp0_it10;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it12
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it12 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it12 <= ap_reg_ppiten_pp0_it11;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
            ap_reg_ppiten_pp0_it12 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it3
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it3 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it3 <= ap_reg_ppiten_pp0_it2;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it4
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it4 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it4 <= ap_reg_ppiten_pp0_it3;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it5
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it5 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it5 <= ap_reg_ppiten_pp0_it4;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it6
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it6 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it6 <= ap_reg_ppiten_pp0_it5;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it7
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it7 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it7 <= ap_reg_ppiten_pp0_it6;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it8
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it8 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it8 <= ap_reg_ppiten_pp0_it7;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it9
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it9 <= ap_const_logic_0;
    end else begin
        if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
            ap_reg_ppiten_pp0_it9 <= ap_reg_ppiten_pp0_it8;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg
    if (ap_rst == 1'b1) begin
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_lv1_0 == tmp_i_i_fu_118_p2))) begin
            grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg <= ap_const_logic_1;
        end else if ((ap_const_logic_1 == grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ready)) begin
            grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
        i_i_i_reg_90 <= ap_const_lv31_0;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(tmp_i_i_reg_139 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        i_i_i_reg_90 <= i_reg_143;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        ap_reg_ppstg_i_i_i_reg_90_pp0_it1 <= i_i_i_reg_90;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1 <= tmp_i_i_reg_139;
        tmp_i_i_reg_139 <= tmp_i_i_fu_118_p2;
    end
end

always @ (posedge ap_clk) begin
    if (~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
        ap_reg_ppstg_i_i_i_reg_90_pp0_it10 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it9;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it11 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it10;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it2 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it1;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it3 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it2;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it4 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it3;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it5 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it4;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it6 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it5;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it7 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it6;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it8 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it7;
        ap_reg_ppstg_i_i_i_reg_90_pp0_it9 <= ap_reg_ppstg_i_i_i_reg_90_pp0_it8;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7;
        ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9 <= ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        i_reg_143 <= i_fu_123_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10))) begin
        tmp_1980_i_i_reg_148 <= grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_return;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
        tmp_reg_134[31 : 1] <= tmp_fu_108_p2[31 : 1];
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st15_fsm_2) begin
    if (((ap_const_logic_1 == ap_done_reg) | (ap_const_logic_1 == ap_sig_cseq_ST_st15_fsm_2))) begin
        ap_done = ap_const_logic_1;
    end else begin
        ap_done = ap_const_logic_0;
    end
end

always @ (ap_start or ap_sig_cseq_ST_st1_fsm_0) begin
    if ((~(ap_const_logic_1 == ap_start) & (ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0))) begin
        ap_idle = ap_const_logic_1;
    end else begin
        ap_idle = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st15_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st15_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_57) begin
    if (ap_sig_bdd_57) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_225) begin
    if (ap_sig_bdd_225) begin
        ap_sig_cseq_ST_st15_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st15_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st1_fsm_0 or ap_sig_bdd_115) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
        factor_V_out_write = ap_const_logic_1;
    end else begin
        factor_V_out_write = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_pp0_stg0_fsm_1 or tmp_i_i_reg_139 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (~(tmp_i_i_reg_139 == ap_const_lv1_0) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it10) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it1) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it2) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it3) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it4) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it5) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it6) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it7) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it8) | ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it9)))) begin
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce = ap_const_logic_1;
    end else begin
        grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_ce = ap_const_logic_0;
    end
end

always @ (i_i_i_reg_90 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or tmp_i_i_reg_139 or ap_reg_ppiten_pp0_it1 or i_reg_143) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~(tmp_i_i_reg_139 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1))) begin
        i_i_i_phi_fu_94_p4 = i_reg_143;
    end else begin
        i_i_i_phi_fu_94_p4 = i_i_i_reg_90;
    end
end

always @ (ap_sig_cseq_ST_st1_fsm_0 or ap_sig_bdd_115) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_115)) begin
        nL_out_write = ap_const_logic_1;
    end else begin
        nL_out_write = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_68 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it12) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it12) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
        refAtans_V_ce0 = ap_const_logic_1;
    end else begin
        refAtans_V_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_68 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it12 or ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11) begin
    if (((ap_const_logic_1 == ap_reg_ppiten_pp0_it12) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_lv1_0 == ap_reg_ppstg_tmp_i_i_reg_139_pp0_it11))) begin
        refAtans_V_we0 = ap_const_logic_1;
    end else begin
        refAtans_V_we0 = ap_const_logic_0;
    end
end
always @ (ap_CS_fsm or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_68 or ap_reg_ppiten_pp0_it1 or ap_reg_ppiten_pp0_it11 or ap_reg_ppiten_pp0_it12 or ap_sig_bdd_115 or tmp_i_i_fu_118_p2) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_115) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if ((~((ap_const_logic_1 == ap_reg_ppiten_pp0_it12) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it11)) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (ap_const_lv1_0 == tmp_i_i_fu_118_p2) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it12) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it11)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~(ap_sig_bdd_68 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & (ap_const_lv1_0 == tmp_i_i_fu_118_p2) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_st15_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end
        end
        ap_ST_st15_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_start or ap_done_reg or nL_out_full_n or factor_V_out_full_n) begin
    ap_sig_bdd_115 = ((nL_out_full_n == ap_const_logic_0) | (factor_V_out_full_n == ap_const_logic_0) | (ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_225 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_57 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n or tmp_i_i_reg_139) begin
    ap_sig_bdd_68 = ((grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA_blk_n == ap_const_logic_0) & ~(tmp_i_i_reg_139 == ap_const_lv1_0));
end

assign factor_V_out_din = factor_V;

assign grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start = grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_ap_start_ap_start_reg;

assign grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TDATA = sigRef_TDATA;

assign grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TVALID = sigRef_TVALID;

assign i_cast_i_i_fu_114_p1 = i_i_i_phi_fu_94_p4;

assign i_fu_123_p2 = (i_i_i_phi_fu_94_p4 + ap_const_lv31_1);

assign nL_out_din = nL;

assign refAtans_V_address0 = tmp_17_i_i_fu_129_p1;

assign refAtans_V_d0 = tmp_1980_i_i_reg_148;

assign sigRef_TREADY = grp_cmpy_complex_top_myatan2_complex_ap_fixed_s_fu_102_xin_TREADY;

assign tmp_17_i_i_fu_129_p1 = ap_reg_ppstg_i_i_i_reg_90_pp0_it11;

assign tmp_fu_108_p2 = nL << ap_const_lv32_1;

assign tmp_i_i_fu_118_p2 = ($signed(i_cast_i_i_fu_114_p1) < $signed(tmp_reg_134)? 1'b1: 1'b0);
always @ (posedge ap_clk) begin
    tmp_reg_134[0] <= 1'b0;
end



endmodule //cmpy_complex_top_Loop_1_proc143
