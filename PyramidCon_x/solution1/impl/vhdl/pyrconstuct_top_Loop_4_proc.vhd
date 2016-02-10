-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2015.4
-- Copyright (C) 2015 Xilinx Inc. All rights reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity pyrconstuct_top_Loop_4_proc is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    fftPyrOut_M_real_V_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    fftPyrOut_M_real_V_ce0 : OUT STD_LOGIC;
    fftPyrOut_M_real_V_q0 : IN STD_LOGIC_VECTOR (23 downto 0);
    fftPyrOut_M_imag_V_address0 : OUT STD_LOGIC_VECTOR (10 downto 0);
    fftPyrOut_M_imag_V_ce0 : OUT STD_LOGIC;
    fftPyrOut_M_imag_V_q0 : IN STD_LOGIC_VECTOR (23 downto 0);
    pyrFilOut_V_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    pyrFilOut_V_full_n : IN STD_LOGIC;
    pyrFilOut_V_write : OUT STD_LOGIC );
end;


architecture behav of pyrconstuct_top_Loop_4_proc is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_st1_fsm_0 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_st2_fsm_1 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_st3_fsm_2 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv11_0 : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv11_5F0 : STD_LOGIC_VECTOR (10 downto 0) := "10111110000";
    constant ap_const_lv11_1 : STD_LOGIC_VECTOR (10 downto 0) := "00000000001";
    constant ap_const_lv6_0 : STD_LOGIC_VECTOR (5 downto 0) := "000000";

    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_sig_cseq_ST_st1_fsm_0 : STD_LOGIC;
    signal ap_sig_bdd_22 : BOOLEAN;
    signal i_fu_82_p2 : STD_LOGIC_VECTOR (10 downto 0);
    signal i_reg_118 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_sig_cseq_ST_st2_fsm_1 : STD_LOGIC;
    signal ap_sig_bdd_52 : BOOLEAN;
    signal exitcond_fu_76_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i2_reg_65 : STD_LOGIC_VECTOR (10 downto 0);
    signal ap_sig_bdd_68 : BOOLEAN;
    signal ap_sig_cseq_ST_st3_fsm_2 : STD_LOGIC;
    signal ap_sig_bdd_76 : BOOLEAN;
    signal tmp_7_fu_88_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_98_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal tmp_fu_94_p1 : STD_LOGIC_VECTOR (9 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);


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
                elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond_fu_76_p2 = ap_const_lv1_0)))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    -- i2_reg_65 assign process. --
    i2_reg_65_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((pyrFilOut_V_full_n = ap_const_logic_0)))) then 
                i2_reg_65 <= i_reg_118;
            elsif (((ap_const_logic_1 = ap_sig_cseq_ST_st1_fsm_0) and not(ap_sig_bdd_68))) then 
                i2_reg_65 <= ap_const_lv11_0;
            end if; 
        end if;
    end process;

    -- assign process. --
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then
                i_reg_118 <= i_fu_82_p2;
            end if;
        end if;
    end process;

    -- the next state (ap_NS_fsm) of the state machine. --
    ap_NS_fsm_assign_proc : process (ap_CS_fsm, pyrFilOut_V_full_n, exitcond_fu_76_p2, ap_sig_bdd_68)
    begin
        case ap_CS_fsm is
            when ap_ST_st1_fsm_0 => 
                if (not(ap_sig_bdd_68)) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                end if;
            when ap_ST_st2_fsm_1 => 
                if (not((exitcond_fu_76_p2 = ap_const_lv1_0))) then
                    ap_NS_fsm <= ap_ST_st1_fsm_0;
                else
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                end if;
            when ap_ST_st3_fsm_2 => 
                if (not((pyrFilOut_V_full_n = ap_const_logic_0))) then
                    ap_NS_fsm <= ap_ST_st2_fsm_1;
                else
                    ap_NS_fsm <= ap_ST_st3_fsm_2;
                end if;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;

    -- ap_done assign process. --
    ap_done_assign_proc : process(ap_done_reg, ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_76_p2)
    begin
        if (((ap_const_logic_1 = ap_done_reg) or ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond_fu_76_p2 = ap_const_lv1_0))))) then 
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
    ap_ready_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1, exitcond_fu_76_p2)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1) and not((exitcond_fu_76_p2 = ap_const_lv1_0)))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_bdd_22 assign process. --
    ap_sig_bdd_22_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_22 <= (ap_CS_fsm(0 downto 0) = ap_const_lv1_1);
    end process;


    -- ap_sig_bdd_52 assign process. --
    ap_sig_bdd_52_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_52 <= (ap_const_lv1_1 = ap_CS_fsm(1 downto 1));
    end process;


    -- ap_sig_bdd_68 assign process. --
    ap_sig_bdd_68_assign_proc : process(ap_start, ap_done_reg)
    begin
                ap_sig_bdd_68 <= ((ap_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    -- ap_sig_bdd_76 assign process. --
    ap_sig_bdd_76_assign_proc : process(ap_CS_fsm)
    begin
                ap_sig_bdd_76 <= (ap_const_lv1_1 = ap_CS_fsm(2 downto 2));
    end process;


    -- ap_sig_cseq_ST_st1_fsm_0 assign process. --
    ap_sig_cseq_ST_st1_fsm_0_assign_proc : process(ap_sig_bdd_22)
    begin
        if (ap_sig_bdd_22) then 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st1_fsm_0 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st2_fsm_1 assign process. --
    ap_sig_cseq_ST_st2_fsm_1_assign_proc : process(ap_sig_bdd_52)
    begin
        if (ap_sig_bdd_52) then 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st2_fsm_1 <= ap_const_logic_0;
        end if; 
    end process;


    -- ap_sig_cseq_ST_st3_fsm_2 assign process. --
    ap_sig_cseq_ST_st3_fsm_2_assign_proc : process(ap_sig_bdd_76)
    begin
        if (ap_sig_bdd_76) then 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_1;
        else 
            ap_sig_cseq_ST_st3_fsm_2 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_76_p2 <= "1" when (i2_reg_65 = ap_const_lv11_5F0) else "0";
    fftPyrOut_M_imag_V_address0 <= tmp_7_fu_88_p1(11 - 1 downto 0);

    -- fftPyrOut_M_imag_V_ce0 assign process. --
    fftPyrOut_M_imag_V_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            fftPyrOut_M_imag_V_ce0 <= ap_const_logic_1;
        else 
            fftPyrOut_M_imag_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    fftPyrOut_M_real_V_address0 <= tmp_7_fu_88_p1(11 - 1 downto 0);

    -- fftPyrOut_M_real_V_ce0 assign process. --
    fftPyrOut_M_real_V_ce0_assign_proc : process(ap_sig_cseq_ST_st2_fsm_1)
    begin
        if ((ap_const_logic_1 = ap_sig_cseq_ST_st2_fsm_1)) then 
            fftPyrOut_M_real_V_ce0 <= ap_const_logic_1;
        else 
            fftPyrOut_M_real_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    i_fu_82_p2 <= std_logic_vector(unsigned(i2_reg_65) + unsigned(ap_const_lv11_1));
    pyrFilOut_V_din <= (((tmp_2_fu_98_p1 & ap_const_lv6_0) & tmp_fu_94_p1) & ap_const_lv6_0);

    -- pyrFilOut_V_write assign process. --
    pyrFilOut_V_write_assign_proc : process(pyrFilOut_V_full_n, ap_sig_cseq_ST_st3_fsm_2)
    begin
        if (((ap_const_logic_1 = ap_sig_cseq_ST_st3_fsm_2) and not((pyrFilOut_V_full_n = ap_const_logic_0)))) then 
            pyrFilOut_V_write <= ap_const_logic_1;
        else 
            pyrFilOut_V_write <= ap_const_logic_0;
        end if; 
    end process;

    tmp_2_fu_98_p1 <= fftPyrOut_M_imag_V_q0(10 - 1 downto 0);
    tmp_7_fu_88_p1 <= std_logic_vector(resize(unsigned(i2_reg_65),64));
    tmp_fu_94_p1 <= fftPyrOut_M_real_V_q0(10 - 1 downto 0);
end behav;