--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : baseSchema.vhf
-- /___/   /\     Timestamp : 03/18/2024 21:14:13
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family xc9500xl -flat -suppress -vhdl /home/xololt/repos/abc/baseSchema.vhf -w /home/xololt/repos/abc/baseSchema.sch
--Design Name: baseSchema
--Device: xc9500xl
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity baseSchema is
   port ( );
end baseSchema;

architecture BEHAVIORAL of baseSchema is
   signal XLXI_1_Blank_openSignal     : std_logic_vector (15 downto 0);
   signal XLXI_1_Clk_50MHz_openSignal : std_logic;
   signal XLXI_1_Line_openSignal      : std_logic_vector (63 downto 0);
   signal XLXI_1_Reset_openSignal     : std_logic;
   signal XLXI_2_Clk_openSignal       : std_logic;
   signal XLXI_2_ROT_A_openSignal     : std_logic;
   signal XLXI_2_ROT_B_openSignal     : std_logic;
   signal XLXI_3_Abort_openSignal     : std_logic;
   signal XLXI_3_Clk_Sys_openSignal   : std_logic;
   signal XLXI_3_Clk_50MHz_openSignal : std_logic;
   signal XLXI_3_DO_Pop_openSignal    : std_logic;
   signal XLXI_3_FExt_openSignal      : std_logic_vector (1 downto 0);
   signal XLXI_3_FName_openSignal     : std_logic_vector (7 downto 0);
   signal XLXI_3_Reset_openSignal     : std_logic;
   signal XLXI_3_SDC_MISO_openSignal  : std_logic;
   signal XLXI_3_Start_openSignal     : std_logic;
   component LCD1x64
      port ( Clk_50MHz : in    std_logic; 
             Reset     : in    std_logic; 
             Line      : in    std_logic_vector (63 downto 0); 
             Blank     : in    std_logic_vector (15 downto 0); 
             LCD_D     : inout std_logic_vector (3 downto 0); 
             LCD_E     : out   std_logic; 
             LCD_RW    : out   std_logic; 
             LCD_RS    : out   std_logic; 
             SF_CE     : out   std_logic);
   end component;
   
   component RotaryEnc
      port ( ROT_A : in    std_logic; 
             ROT_B : in    std_logic; 
             RotL  : out   std_logic; 
             RotR  : out   std_logic; 
             Clk   : in    std_logic);
   end component;
   
   component SDC_FileReader
      port ( SDC_MISO  : in    std_logic; 
             Start     : in    std_logic; 
             FName     : in    std_logic_vector (7 downto 0); 
             Reset     : in    std_logic; 
             Clk_50MHz : in    std_logic; 
             DO_Pop    : in    std_logic; 
             Abort     : in    std_logic; 
             SDC_MOSI  : out   std_logic; 
             SDC_SCK   : out   std_logic; 
             SDC_SS    : out   std_logic; 
             Error     : out   std_logic_vector (1 downto 0); 
             DO        : out   std_logic_vector (7 downto 0); 
             DO_Rdy    : out   std_logic; 
             Busy      : out   std_logic; 
             FExt      : in    std_logic_vector (1 downto 0); 
             Clk_Sys   : in    std_logic);
   end component;
   
begin
   XLXI_1 : LCD1x64
      port map (Blank(15 downto 0)=>XLXI_1_Blank_openSignal(15 downto 0),
                Clk_50MHz=>XLXI_1_Clk_50MHz_openSignal,
                Line(63 downto 0)=>XLXI_1_Line_openSignal(63 downto 0),
                Reset=>XLXI_1_Reset_openSignal,
                LCD_E=>open,
                LCD_RS=>open,
                LCD_RW=>open,
                SF_CE=>open,
                LCD_D=>open);
   
   XLXI_2 : RotaryEnc
      port map (Clk=>XLXI_2_Clk_openSignal,
                ROT_A=>XLXI_2_ROT_A_openSignal,
                ROT_B=>XLXI_2_ROT_B_openSignal,
                RotL=>open,
                RotR=>open);
   
   XLXI_3 : SDC_FileReader
      port map (Abort=>XLXI_3_Abort_openSignal,
                Clk_Sys=>XLXI_3_Clk_Sys_openSignal,
                Clk_50MHz=>XLXI_3_Clk_50MHz_openSignal,
                DO_Pop=>XLXI_3_DO_Pop_openSignal,
                FExt(1 downto 0)=>XLXI_3_FExt_openSignal(1 downto 0),
                FName(7 downto 0)=>XLXI_3_FName_openSignal(7 downto 0),
                Reset=>XLXI_3_Reset_openSignal,
                SDC_MISO=>XLXI_3_SDC_MISO_openSignal,
                Start=>XLXI_3_Start_openSignal,
                Busy=>open,
                DO=>open,
                DO_Rdy=>open,
                Error=>open,
                SDC_MOSI=>open,
                SDC_SCK=>open,
                SDC_SS=>open);
   
end BEHAVIORAL;


