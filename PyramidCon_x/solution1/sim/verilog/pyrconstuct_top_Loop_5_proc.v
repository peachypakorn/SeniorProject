// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.4
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pyrconstuct_top_Loop_5_proc (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        ifftPyrOut_dout,
        ifftPyrOut_empty_n,
        ifftPyrOut_read,
        pyrFilOut_V_din,
        pyrFilOut_V_full_n,
        pyrFilOut_V_write
);

parameter    ap_const_logic_1 = 1'b1;
parameter    ap_const_logic_0 = 1'b0;
parameter    ap_ST_st1_fsm_0 = 3'b1;
parameter    ap_ST_pp0_stg0_fsm_1 = 3'b10;
parameter    ap_ST_st5_fsm_2 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv1_1 = 1'b1;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv1_0 = 1'b0;
parameter    ap_const_lv10_0 = 10'b0000000000;
parameter    ap_const_lv10_200 = 10'b1000000000;
parameter    ap_const_lv10_1 = 10'b1;
parameter    ap_const_lv32_A = 32'b1010;
parameter    ap_const_lv32_17 = 32'b10111;
parameter    ap_const_lv32_9 = 32'b1001;
parameter    ap_const_lv32_22 = 32'b100010;
parameter    ap_const_lv32_2F = 32'b101111;
parameter    ap_const_lv32_21 = 32'b100001;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_true = 1'b1;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
input  [47:0] ifftPyrOut_dout;
input   ifftPyrOut_empty_n;
output   ifftPyrOut_read;
output  [33:0] pyrFilOut_V_din;
input   pyrFilOut_V_full_n;
output   pyrFilOut_V_write;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg ifftPyrOut_read;
reg pyrFilOut_V_write;
reg    ap_done_reg = 1'b0;
(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm = 3'b1;
reg    ap_sig_cseq_ST_st1_fsm_0;
reg    ap_sig_bdd_22;
reg   [9:0] i6_reg_73;
wire   [0:0] exitcond_fu_84_p2;
reg   [0:0] exitcond_reg_173;
reg    ap_sig_cseq_ST_pp0_stg0_fsm_1;
reg    ap_sig_bdd_46;
reg    ap_reg_ppiten_pp0_it0 = 1'b0;
reg    ap_sig_bdd_54;
reg    ap_reg_ppiten_pp0_it1 = 1'b0;
reg   [0:0] ap_reg_ppstg_exitcond_reg_173_pp0_it1;
reg    ap_sig_bdd_62;
reg    ap_reg_ppiten_pp0_it2 = 1'b0;
wire   [9:0] i_fu_90_p2;
reg   [13:0] tmp_9_reg_182;
reg   [0:0] tmp_reg_187;
reg   [13:0] tmp_3_reg_192;
reg   [0:0] tmp_4_reg_197;
reg    ap_sig_bdd_86;
wire   [14:0] tmp_32_cast_fu_135_p1;
wire  signed [14:0] p_Val2_2_cast_fu_132_p1;
wire   [14:0] p_Val2_s_fu_138_p2;
wire   [14:0] tmp_35_cast_fu_151_p1;
wire  signed [14:0] p_Val2_4_cast_fu_148_p1;
wire   [14:0] p_Val2_2_fu_154_p2;
wire  signed [16:0] p_Val2_6_cast_fu_144_p1;
wire   [31:0] tmp_2_fu_160_p3;
reg    ap_sig_cseq_ST_st5_fsm_2;
reg    ap_sig_bdd_168;
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
        end else if ((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2)) begin
            ap_done_reg <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it0
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(exitcond_fu_84_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_0;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_86)) begin
            ap_reg_ppiten_pp0_it0 <= ap_const_logic_1;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it1
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
    end else begin
        if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & (exitcond_fu_84_p2 == ap_const_lv1_0))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_1;
        end else if ((((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_86) | ((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(exitcond_fu_84_p2 == ap_const_lv1_0)))) begin
            ap_reg_ppiten_pp0_it1 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin : ap_ret_ap_reg_ppiten_pp0_it2
    if (ap_rst == 1'b1) begin
        ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
    end else begin
        if (~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2)))) begin
            ap_reg_ppiten_pp0_it2 <= ap_reg_ppiten_pp0_it1;
        end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_86)) begin
            ap_reg_ppiten_pp0_it2 <= ap_const_logic_0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & (exitcond_fu_84_p2 == ap_const_lv1_0))) begin
        i6_reg_73 <= i_fu_90_p2;
    end else if (((ap_const_logic_1 == ap_sig_cseq_ST_st1_fsm_0) & ~ap_sig_bdd_86)) begin
        i6_reg_73 <= ap_const_lv10_0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))))) begin
        ap_reg_ppstg_exitcond_reg_173_pp0_it1 <= exitcond_reg_173;
        exitcond_reg_173 <= exitcond_fu_84_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_reg_173 == ap_const_lv1_0) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))))) begin
        tmp_3_reg_192 <= {{ifftPyrOut_dout[ap_const_lv32_2F : ap_const_lv32_22]}};
        tmp_4_reg_197 <= ifftPyrOut_dout[ap_const_lv32_21];
        tmp_9_reg_182 <= {{ifftPyrOut_dout[ap_const_lv32_17 : ap_const_lv32_A]}};
        tmp_reg_187 <= ifftPyrOut_dout[ap_const_lv32_9];
    end
end

always @ (ap_done_reg or ap_sig_cseq_ST_st5_fsm_2) begin
    if (((ap_const_logic_1 == ap_done_reg) | (ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2))) begin
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

always @ (ap_sig_cseq_ST_st5_fsm_2) begin
    if ((ap_const_logic_1 == ap_sig_cseq_ST_st5_fsm_2)) begin
        ap_ready = ap_const_logic_1;
    end else begin
        ap_ready = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_46) begin
    if (ap_sig_bdd_46) begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_pp0_stg0_fsm_1 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_22) begin
    if (ap_sig_bdd_22) begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st1_fsm_0 = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_168) begin
    if (ap_sig_bdd_168) begin
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_1;
    end else begin
        ap_sig_cseq_ST_st5_fsm_2 = ap_const_logic_0;
    end
end

always @ (exitcond_reg_173 or ap_sig_cseq_ST_pp0_stg0_fsm_1 or ap_sig_bdd_54 or ap_reg_ppiten_pp0_it1 or ap_sig_bdd_62 or ap_reg_ppiten_pp0_it2) begin
    if (((ap_const_logic_1 == ap_sig_cseq_ST_pp0_stg0_fsm_1) & (exitcond_reg_173 == ap_const_lv1_0) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))))) begin
        ifftPyrOut_read = ap_const_logic_1;
    end else begin
        ifftPyrOut_read = ap_const_logic_0;
    end
end

always @ (ap_sig_bdd_54 or ap_reg_ppiten_pp0_it1 or ap_reg_ppstg_exitcond_reg_173_pp0_it1 or ap_sig_bdd_62 or ap_reg_ppiten_pp0_it2) begin
    if (((ap_const_lv1_0 == ap_reg_ppstg_exitcond_reg_173_pp0_it1) & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))))) begin
        pyrFilOut_V_write = ap_const_logic_1;
    end else begin
        pyrFilOut_V_write = ap_const_logic_0;
    end
end
always @ (ap_CS_fsm or exitcond_fu_84_p2 or ap_reg_ppiten_pp0_it0 or ap_sig_bdd_54 or ap_reg_ppiten_pp0_it1 or ap_sig_bdd_62 or ap_reg_ppiten_pp0_it2 or ap_sig_bdd_86) begin
    case (ap_CS_fsm)
        ap_ST_st1_fsm_0 : 
        begin
            if (~ap_sig_bdd_86) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else begin
                ap_NS_fsm = ap_ST_st1_fsm_0;
            end
        end
        ap_ST_pp0_stg0_fsm_1 : 
        begin
            if ((~((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) & ~((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(exitcond_fu_84_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end else if ((((ap_const_logic_1 == ap_reg_ppiten_pp0_it2) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | ((ap_const_logic_1 == ap_reg_ppiten_pp0_it0) & ~((ap_sig_bdd_54 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it1)) | (ap_sig_bdd_62 & (ap_const_logic_1 == ap_reg_ppiten_pp0_it2))) & ~(exitcond_fu_84_p2 == ap_const_lv1_0) & ~(ap_const_logic_1 == ap_reg_ppiten_pp0_it1)))) begin
                ap_NS_fsm = ap_ST_st5_fsm_2;
            end else begin
                ap_NS_fsm = ap_ST_pp0_stg0_fsm_1;
            end
        end
        ap_ST_st5_fsm_2 : 
        begin
            ap_NS_fsm = ap_ST_st1_fsm_0;
        end
        default : 
        begin
            ap_NS_fsm = 'bx;
        end
    endcase
end



always @ (ap_CS_fsm) begin
    ap_sig_bdd_168 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_2]);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_22 = (ap_CS_fsm[ap_const_lv32_0] == ap_const_lv1_1);
end


always @ (ap_CS_fsm) begin
    ap_sig_bdd_46 = (ap_const_lv1_1 == ap_CS_fsm[ap_const_lv32_1]);
end


always @ (ifftPyrOut_empty_n or exitcond_reg_173) begin
    ap_sig_bdd_54 = ((ifftPyrOut_empty_n == ap_const_logic_0) & (exitcond_reg_173 == ap_const_lv1_0));
end


always @ (pyrFilOut_V_full_n or ap_reg_ppstg_exitcond_reg_173_pp0_it1) begin
    ap_sig_bdd_62 = ((pyrFilOut_V_full_n == ap_const_logic_0) & (ap_const_lv1_0 == ap_reg_ppstg_exitcond_reg_173_pp0_it1));
end


always @ (ap_start or ap_done_reg) begin
    ap_sig_bdd_86 = ((ap_start == ap_const_logic_0) | (ap_done_reg == ap_const_logic_1));
end

assign exitcond_fu_84_p2 = (i6_reg_73 == ap_const_lv10_200? 1'b1: 1'b0);

assign i_fu_90_p2 = (i6_reg_73 + ap_const_lv10_1);

assign p_Val2_2_cast_fu_132_p1 = $signed(tmp_9_reg_182);

assign p_Val2_2_fu_154_p2 = ($signed(tmp_35_cast_fu_151_p1) + $signed(p_Val2_4_cast_fu_148_p1));

assign p_Val2_4_cast_fu_148_p1 = $signed(tmp_3_reg_192);

assign p_Val2_6_cast_fu_144_p1 = $signed(p_Val2_s_fu_138_p2);

assign p_Val2_s_fu_138_p2 = ($signed(tmp_32_cast_fu_135_p1) + $signed(p_Val2_2_cast_fu_132_p1));

assign pyrFilOut_V_din = $signed(tmp_2_fu_160_p3);

assign tmp_2_fu_160_p3 = {{p_Val2_2_fu_154_p2}, {p_Val2_6_cast_fu_144_p1}};

assign tmp_32_cast_fu_135_p1 = tmp_reg_187;

assign tmp_35_cast_fu_151_p1 = tmp_4_reg_197;


endmodule //pyrconstuct_top_Loop_5_proc
