// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pyrconstuct_top_Loop_1_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        imgIn_TDATA,
        imgIn_TVALID,
        imgIn_TREADY,
        imgInTmp_din,
        imgInTmp_full_n,
        imgInTmp_write
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 2'b1;
parameter    ap_ST_st2_fsm_1 = 2'b10;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv10_0 = 10'b0000000000;
parameter    ap_const_lv10_200 = 10'b1000000000;
parameter    ap_const_lv10_1 = 10'b1;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [31:0] imgIn_TDATA;
input   imgIn_TVALID;
output   imgIn_TREADY;
output  [31:0] imgInTmp_din;
input   imgInTmp_full_n;
output   imgInTmp_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg imgIn_TREADY;
reg imgInTmp_write;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [1:0] ap_CS_fsm = 2'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_21;
wire   [9:0] i_1_fu_63_p2;
reg    ap_sig_cseq_ST_st2_fsm_1;
reg    ap_sig_bdd_42;
wire   [0:0] exitcond1_fu_57_p2;
reg    ap_sig_bdd_52;
reg   [9:0] i_reg_46;
reg    ap_sig_bdd_61;
reg   [1:0] ap_NS_fsm;




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
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~ap_sig_bdd_52 & ~(exitcond1_fu_57_p2 == ap_const_lv1_0))) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond1_fu_57_p2 == ap_const_lv1_0) & ~ap_sig_bdd_52)) begin
        i_reg_46 <= i_1_fu_63_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_61)) begin
        i_reg_46 <= ap_const_lv10_0;
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st2_fsm_1 or exitcond1_fu_57_p2 or ap_sig_bdd_52) begin
    if (((ap_const_logic_1 == ap_done_reg) | ((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~ap_sig_bdd_52 & ~(exitcond1_fu_57_p2 == ap_const_lv1_0)))) begin
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

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond1_fu_57_p2 or ap_sig_bdd_52) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & ~ap_sig_bdd_52 & ~(exitcond1_fu_57_p2 == ap_const_lv1_0))) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_21) begin
    if (ap_sig_bdd_21) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_42) begin
    if (ap_sig_bdd_42) begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st2_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond1_fu_57_p2 or ap_sig_bdd_52) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond1_fu_57_p2 == ap_const_lv1_0) & ~ap_sig_bdd_52)) begin
        imgInTmp_write = ap_const_logic_1;
    end else begin
        imgInTmp_write = ap_const_logic_0;
    end
end

always @ (ap_sig_cseq_ST_st2_fsm_1 or exitcond1_fu_57_p2 or ap_sig_bdd_52) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_st2_fsm_1) & (exitcond1_fu_57_p2 == ap_const_lv1_0) & ~ap_sig_bdd_52)) begin
        imgIn_TREADY = ap_const_logic_1;
    end else begin
        imgIn_TREADY = ap_const_logic_0;
    end
end
always @ (ap_CS_fsm or exitcond1_fu_57_p2 or ap_sig_bdd_52 or ap_sig_bdd_61) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_61) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_st2_fsm_1 : 
        begin
            if ((~ap_sig_bdd_52 & ~(exitcond1_fu_57_p2 == ap_const_lv1_0))) begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end else if (((exitcond1_fu_57_p2 == ap_const_lv1_0) & ~ap_sig_bdd_52)) begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st2_fsm_1;
            end
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_CS_fsm) begin
    ap_sig_bdd_21 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_42 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (imgIn_TVALID or imgInTmp_full_n or exitcond1_fu_57_p2) begin
    ap_sig_bdd_52 = (((imgIn_TVALID == ap_const_logic_0) & (exitcond1_fu_57_p2 == ap_const_lv1_0)) | ((exitcond1_fu_57_p2 == ap_const_lv1_0) & (imgInTmp_full_n == ap_const_logic_0)));
end


always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_61 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end

assign exitcond1_fu_57_p2 = (i_reg_46 == ap_const_lv10_200? 1'b1: 1'b0);

assign i_1_fu_63_p2 = (i_reg_46 + ap_const_lv10_1);

assign imgInTmp_din = imgIn_TDATA;


endmodule //pyrconstuct_top_Loop_1_proc

