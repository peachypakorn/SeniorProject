-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity pyrconstuct_top_Loop_1_proc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    imgIn_M_real_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    imgIn_M_real_V_empty_n : IN STD_LOGIC;
    imgIn_M_real_V_read : OUT STD_LOGIC;
    imgInTmp_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    imgInTmp_full_n : IN STD_LOGIC;
    imgInTmp_write : OUT STD_LOGIC;
    imgIn_M_imag_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    imgIn_M_imag_V_empty_n : IN STD_LOGIC;
    imgIn_M_imag_V_read : OUT STD_LOGIC );
end;


architecture behav of pyrconstuct_top_Loop_1_proc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv10_0 : STD_LOGIC_VECTOR (9 downto 0) := "0000000000";
    constant ap_const_lv10_200 : STD_LOGIC_VECTOR (9 downto 0) := "1000000000";
    constant ap_const_lv10_1 : STD_LOGIC_VECTOR (9 downto 0) := "0000000001";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (1 downto 0) := "01";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_21 : BOOLEAN;
    signal i_fu_72_p2 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_47 : BOOLEAN;
    signal exitcond_i_fu_66_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_sig_bdd_60 : BOOLEAN;
    signal i_0_i_reg_55 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_sig_bdd_69 : BOOLEAN;
    signal ap_NS_fsm : STD_LOGIC_VECTOR (1 downto 0);


begin




    -- the current state (ap_CS_fsm) of the state machine. --
    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_st1_fsm_0;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    -- ap_done_reg assign process. --
    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_const_logic_1 = ap_continue)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not(ap_sig_bdd_60) and not((exitcond_i_fu_66_p2 = ap_const_lv1_0)))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- i_0_i_reg_55 assign process. --
    i_0_i_reg_55_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_i_fu_66_p2 = ap_const_lv1_0) and not(ap_sig_bdd_60))) then 
                i_0_i_reg_55 <= i_fu_72_p2;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_69))) then 
                i_0_i_reg_55 <= ap_const_lv10_0;
            end if; 
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_CS_fsm, exitcond_i_fu_66_p2, ap_sig_bdd_60, ap_sig_bdd_69)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not(ap_sig_bdd_69)) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if ((not(ap_sig_bdd_60) and not((exitcond_i_fu_66_p2 = ap_const_lv1_0)))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                elsif (((exitcond_i_fu_66_p2 = ap_const_lv1_0) and not(ap_sig_bdd_60))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                end if;
            when others =>  
                ap_NS_fsm <= "XX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_done_reg, ap_sig_cseq_ST_st2_fsm_1, exitcond_i_fu_66_p2, ap_sig_bdd_60)
    begin
        if (((ap_const_logic_1 = ap_done_reg) or ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not(ap_sig_bdd_60) and not((exitcond_i_fu_66_p2 = ap_const_lv1_0))))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_idle assign process. --
    ap_idle_assign_proc : process(ap_start, ap_sig_cseq_ST_st1_fsm_0)
    begin
        if ((not((ap_const_logic_1 = ap_start)) and (ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_ready assign process. --
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_i_fu_66_p2, ap_sig_bdd_60)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not(ap_sig_bdd_60) and not((exitcond_i_fu_66_p2 = ap_const_lv1_0)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_21 assign process. --
    ap_sig_bdd_21_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_21 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_47 assign process. --
    ap_sig_bdd_47_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_47 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_60 assign process. --
    ap_sig_bdd_60_assign_proc : process(imgIn_M_real_V_empty_n, imgInTmp_full_n, imgIn_M_imag_V_empty_n, exitcond_i_fu_66_p2)
    begin
                ap_sig_bdd_60 <= (((imgIn_M_real_V_empty_n = ap_const_logic_0) and (exitcond_i_fu_66_p2 = ap_const_lv1_0)) or ((exitcond_i_fu_66_p2 = ap_const_lv1_0) and (imgIn_M_imag_V_empty_n = ap_const_logic_0)) or ((exitcond_i_fu_66_p2 = ap_const_lv1_0) and (imgInTmp_full_n = ap_const_logic_0)));
    end process;


    -- ap_sig_bdd_69 assign process. --
    ap_sig_bdd_69_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_sig_bdd_69 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_21)
    begin
        if (ap_sig_bdd_21) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_47)
    begin
        if (ap_sig_bdd_47) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_i_fu_66_p2 <= "1" when (i_0_i_reg_55 = ap_const_lv10_200) else "0";
    i_fu_72_p2 <= std_logic_vector(unsigned(i_0_i_reg_55) + unsigned(ap_const_lv10_1));
    imgInTmp_din <= (imgIn_M_imag_V_dout & imgIn_M_real_V_dout);

    -- imgInTmp_write assign process. --
    imgInTmp_write_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_i_fu_66_p2, ap_sig_bdd_60)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_i_fu_66_p2 = ap_const_lv1_0) and not(ap_sig_bdd_60))) then 
            imgInTmp_write <= ap_const_logic_1;
        else 
            imgInTmp_write <= ap_const_logic_0;
        end if; 
    end process;


    -- imgIn_M_imag_V_read assign process. --
    imgIn_M_imag_V_read_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_i_fu_66_p2, ap_sig_bdd_60)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_i_fu_66_p2 = ap_const_lv1_0) and not(ap_sig_bdd_60))) then 
            imgIn_M_imag_V_read <= ap_const_logic_1;
        else 
            imgIn_M_imag_V_read <= ap_const_logic_0;
        end if; 
    end process;


    -- imgIn_M_real_V_read assign process. --
    imgIn_M_real_V_read_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_i_fu_66_p2, ap_sig_bdd_60)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and (exitcond_i_fu_66_p2 = ap_const_lv1_0) and not(ap_sig_bdd_60))) then 
            imgIn_M_real_V_read <= ap_const_logic_1;
        else 
            imgIn_M_real_V_read <= ap_const_logic_0;
        end if; 
    end process;

end behav;