// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pyrconstuct_top_Loop_4_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        fftPyrOut_M_real_V_address0,
        fftPyrOut_M_real_V_ce0,
        fftPyrOut_M_real_V_q0,
        fftPyrOut_M_imag_V_address0,
        fftPyrOut_M_imag_V_ce0,
        fftPyrOut_M_imag_V_q0,
        pyrFilOut_V_din,
        pyrFilOut_V_full_n,
        pyrFilOut_V_write
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_st2_fsm_1 = 3'b10;
parameter    ap_ST_st3_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv11_0 = 11'b00000000000;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv11_5F0 = 11'b10111110000;
parameter    ap_const_lv11_1 = 11'b1;
parameter    ap_const_lv6_0 = 6'b000000;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output  [10:0] fftPyrOut_M_real_V_address0;
output   fftPyrOut_M_real_V_ce0;
input  [23:0] fftPyrOut_M_real_V_q0;
output  [10:0] fftPyrOut_M_imag_V_address0;
output   fftPyrOut_M_imag_V_ce0;
input  [23:0] fftPyrOut_M_imag_V_q0;
output  [31:0] pyrFilOut_V_din;
input   pyrFilOut_V_full_n;
output   pyrFilOut_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg fftPyrOut_M_real_V_ce0;
reg fftPyrOut_M_imag_V_ce0;
reg pyrFilOut_V_write;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
wire   [10:0] i_fu_82_p2;
reg   [10:0] i_reg_118;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_bdd_52;
wire   [0:0] exitcond_fu_76_p2;
reg   [10:0] i2_reg_65;
reg    ap_sig_bdd_68;
reg    ap_sig_cseq_ST_st3_fsm_2;
reg    ap_sig_bdd_76;
wire   [63:0] tmp_7_fu_88_p1;
wire   [9:0] tmp_2_fu_98_p1;
wire   [9:0] tmp_fu_94_p1;
reg   [2:0] ap_NS_fsm;




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
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond_fu_76_p2 == ap_const_lv1_0))) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st3_fsm_2) & ~(pyrFilOut_V_full_n == ap_const_logic_0))) begin
        i2_reg_65 <= i_reg_118;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_68)) begin
        i2_reg_65 <= ap_const_lv11_0;
    end
end

always @ (posedge ap_clk) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        i_reg_118 <= i_fu_82_p2;
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st2_fsm_1 or exitcond_fu_76_p2) begin
    if (((ap_const_logic_1 == ap_done_reg) | ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond_fu_76_p2 == ap_const_lv1_0)))) begin
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

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond_fu_76_p2) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~(exitcond_fu_76_p2 == ap_const_lv1_0))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_52) begin
    if (ap_sig_bdd_52) begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_76) begin
    if (ap_sig_bdd_76) begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st3_fsm_2 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        fftPyrOut_M_imag_V_ce0 = ap_const_logic_1;
    end else begin
        fftPyrOut_M_imag_V_ce0 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1)) begin
        fftPyrOut_M_real_V_ce0 = ap_const_logic_1;
    end else begin
        fftPyrOut_M_real_V_ce0 = ap_const_logic_0;
    end
end

always @ (pyrFilOut_V_full_n or ap_sig_cseq_ST_st3_fsm_2) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st3_fsm_2) & ~(pyrFilOut_V_full_n == ap_const_logic_0))) begin
        pyrFilOut_V_write = ap_const_logic_1;
    end else begin
        pyrFilOut_V_write = ap_const_logic_0;
    end
end
always @ (ap_CS_fsm or pyrFilOut_V_full_n or exitcond_fu_76_p2 or ap_sig_bdd_68) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_68) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : 
        begin
            if (~(exitcond_fu_76_p2 == ap_const_lv1_0)) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end
        end
        ap_ST_st3_fsm_2 : 
        begin
            if (~(pyrFilOut_V_full_n == ap_const_logic_0)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st3_fsm_2;
            end
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_52 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_68 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_76 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end

assign exitcond_fu_76_p2 = (i2_reg_65 == ap_const_lv11_5F0? 1'b1: 1'b0);

assign fftPyrOut_M_imag_V_address0 = tmp_7_fu_88_p1;

assign fftPyrOut_M_real_V_address0 = tmp_7_fu_88_p1;

assign i_fu_82_p2 = (i2_reg_65 + ap_const_lv11_1);

assign pyrFilOut_V_din = {{{{tmp_2_fu_98_p1}, {ap_const_lv6_0}}, {tmp_fu_94_p1}}, {ap_const_lv6_0}};

assign tmp_2_fu_98_p1 = fftPyrOut_M_imag_V_q0[9:0];

assign tmp_7_fu_88_p1 = i2_reg_65;

assign tmp_fu_94_p1 = fftPyrOut_M_real_V_q0[9:0];


endmodule //pyrconstuct_top_Loop_4_proc
