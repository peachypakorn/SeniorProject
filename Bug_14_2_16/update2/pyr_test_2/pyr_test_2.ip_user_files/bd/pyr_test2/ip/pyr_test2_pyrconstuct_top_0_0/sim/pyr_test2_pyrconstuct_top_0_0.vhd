-- (c) Copyright 1995-2016 Xilinx, Inc. All rights reserved.
-- 
-- This file contains confidential and proprietary information
-- of Xilinx, Inc. and is protected under U.S. and
-- international copyright and other intellectual property
-- laws.
-- 
-- DISCLAIMER
-- This disclaimer is not a license and does not grant any
-- rights to the materials distributed herewith. Except as
-- otherwise provided in a valid license issued to you by
-- Xilinx, and to the maximum extent permitted by applicable
-- law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
-- WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
-- AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
-- BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
-- INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
-- (2) Xilinx shall not be liable (whether in contract or tort,
-- including negligence, or under any other theory of
-- liability) for any loss or damage of any kind or nature
-- related to, arising under or in connection with these
-- materials, including for any direct, or any indirect,
-- special, incidental, or consequential loss or damage
-- (including loss of data, profits, goodwill, or any type of
-- loss or damage suffered as a result of any action brought
-- by a third party) even if such damage or loss was
-- reasonably foreseeable or Xilinx had been advised of the
-- possibility of the same.
-- 
-- CRITICAL APPLICATIONS
-- Xilinx products are not designed or intended to be fail-
-- safe, or for use in any application requiring fail-safe
-- performance, such as life-support or safety devices or
-- systems, Class III medical devices, nuclear facilities,
-- applications related to the deployment of airbags, or any
-- other applications that could lead to death, personal
-- injury, or severe property or environmental damage
-- (individually and collectively, "Critical
-- Applications"). Customer assumes the sole risk and
-- liability of any use of Xilinx products in Critical
-- Applications, subject only to applicable laws and
-- regulations governing limitations on product liability.
-- 
-- THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
-- PART OF THIS FILE AT ALL TIMES.
-- 
-- DO NOT MODIFY THIS FILE.

-- IP VLNV: pitchaya:hls:pyrconstuct_top:1.0
-- IP Revision: 1602121709

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY pyr_test2_pyrconstuct_top_0_0 IS
  PORT (
    ap_clk : IN STD_LOGIC;
    ap_rst_n : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    imgIn_TVALID : IN STD_LOGIC;
    imgIn_TREADY : OUT STD_LOGIC;
    imgIn_TDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
    pyrFilOut_V_M_real_V_TVALID : OUT STD_LOGIC;
    pyrFilOut_V_M_real_V_TREADY : IN STD_LOGIC;
    pyrFilOut_V_M_real_V_TDATA : OUT STD_LOGIC_VECTOR(23 DOWNTO 0);
    pyrFilOut_V_M_imag_V_TVALID : OUT STD_LOGIC;
    pyrFilOut_V_M_imag_V_TREADY : IN STD_LOGIC;
    pyrFilOut_V_M_imag_V_TDATA : OUT STD_LOGIC_VECTOR(23 DOWNTO 0);
    nL : IN STD_LOGIC_VECTOR(31 DOWNTO 0)
  );
END pyr_test2_pyrconstuct_top_0_0;

ARCHITECTURE pyr_test2_pyrconstuct_top_0_0_arch OF pyr_test2_pyrconstuct_top_0_0 IS
  ATTRIBUTE DowngradeIPIdentifiedWarnings : string;
  ATTRIBUTE DowngradeIPIdentifiedWarnings OF pyr_test2_pyrconstuct_top_0_0_arch: ARCHITECTURE IS "yes";

  COMPONENT pyrconstuct_top IS
    PORT (
      ap_clk : IN STD_LOGIC;
      ap_rst_n : IN STD_LOGIC;
      ap_start : IN STD_LOGIC;
      ap_done : OUT STD_LOGIC;
      ap_idle : OUT STD_LOGIC;
      ap_ready : OUT STD_LOGIC;
      imgIn_TVALID : IN STD_LOGIC;
      imgIn_TREADY : OUT STD_LOGIC;
      imgIn_TDATA : IN STD_LOGIC_VECTOR(31 DOWNTO 0);
      pyrFilOut_V_M_real_V_TVALID : OUT STD_LOGIC;
      pyrFilOut_V_M_real_V_TREADY : IN STD_LOGIC;
      pyrFilOut_V_M_real_V_TDATA : OUT STD_LOGIC_VECTOR(23 DOWNTO 0);
      pyrFilOut_V_M_imag_V_TVALID : OUT STD_LOGIC;
      pyrFilOut_V_M_imag_V_TREADY : IN STD_LOGIC;
      pyrFilOut_V_M_imag_V_TDATA : OUT STD_LOGIC_VECTOR(23 DOWNTO 0);
      nL : IN STD_LOGIC_VECTOR(31 DOWNTO 0)
    );
  END COMPONENT pyrconstuct_top;
  ATTRIBUTE X_INTERFACE_INFO : STRING;
  ATTRIBUTE X_INTERFACE_INFO OF ap_clk: SIGNAL IS "xilinx.com:signal:clock:1.0 ap_clk CLK";
  ATTRIBUTE X_INTERFACE_INFO OF ap_rst_n: SIGNAL IS "xilinx.com:signal:reset:1.0 ap_rst_n RST";
  ATTRIBUTE X_INTERFACE_INFO OF ap_start: SIGNAL IS "xilinx.com:interface:acc_handshake:1.0 ap_ctrl start";
  ATTRIBUTE X_INTERFACE_INFO OF ap_done: SIGNAL IS "xilinx.com:interface:acc_handshake:1.0 ap_ctrl done";
  ATTRIBUTE X_INTERFACE_INFO OF ap_idle: SIGNAL IS "xilinx.com:interface:acc_handshake:1.0 ap_ctrl idle";
  ATTRIBUTE X_INTERFACE_INFO OF ap_ready: SIGNAL IS "xilinx.com:interface:acc_handshake:1.0 ap_ctrl ready";
  ATTRIBUTE X_INTERFACE_INFO OF imgIn_TVALID: SIGNAL IS "xilinx.com:interface:axis:1.0 imgIn TVALID";
  ATTRIBUTE X_INTERFACE_INFO OF imgIn_TREADY: SIGNAL IS "xilinx.com:interface:axis:1.0 imgIn TREADY";
  ATTRIBUTE X_INTERFACE_INFO OF imgIn_TDATA: SIGNAL IS "xilinx.com:interface:axis:1.0 imgIn TDATA";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_real_V_TVALID: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_real_V TVALID";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_real_V_TREADY: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_real_V TREADY";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_real_V_TDATA: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_real_V TDATA";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_imag_V_TVALID: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_imag_V TVALID";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_imag_V_TREADY: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_imag_V TREADY";
  ATTRIBUTE X_INTERFACE_INFO OF pyrFilOut_V_M_imag_V_TDATA: SIGNAL IS "xilinx.com:interface:axis:1.0 pyrFilOut_V_M_imag_V TDATA";
  ATTRIBUTE X_INTERFACE_INFO OF nL: SIGNAL IS "xilinx.com:signal:data:1.0 nL DATA";
BEGIN
  U0 : pyrconstuct_top
    PORT MAP (
      ap_clk => ap_clk,
      ap_rst_n => ap_rst_n,
      ap_start => ap_start,
      ap_done => ap_done,
      ap_idle => ap_idle,
      ap_ready => ap_ready,
      imgIn_TVALID => imgIn_TVALID,
      imgIn_TREADY => imgIn_TREADY,
      imgIn_TDATA => imgIn_TDATA,
      pyrFilOut_V_M_real_V_TVALID => pyrFilOut_V_M_real_V_TVALID,
      pyrFilOut_V_M_real_V_TREADY => pyrFilOut_V_M_real_V_TREADY,
      pyrFilOut_V_M_real_V_TDATA => pyrFilOut_V_M_real_V_TDATA,
      pyrFilOut_V_M_imag_V_TVALID => pyrFilOut_V_M_imag_V_TVALID,
      pyrFilOut_V_M_imag_V_TREADY => pyrFilOut_V_M_imag_V_TREADY,
      pyrFilOut_V_M_imag_V_TDATA => pyrFilOut_V_M_imag_V_TDATA,
      nL => nL
    );
END pyr_test2_pyrconstuct_top_0_0_arch;