--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : WAV_reader.vhf
-- /___/   /\     Timestamp : 06/11/2024 12:07:53
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/XilinxPrj/UCISW2-main-newer1106/UCISW2-main-newer/WAV_reader.vhf -w C:/XilinxPrj/UCISW2-main-newer1106/UCISW2-main-newer/WAV_reader.sch
--Design Name: WAV_reader
--Device: spartan3e
--Purpose:
--    This vhdl netlist is translated from an ECS schematic. It can be 
--    synthesized and simulated, but it should not be modified. 
--

library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity WAV_reader is
   port ( Abort       : in    std_logic; 
          Clk_50MHz   : in    std_logic; 
          FName       : in    std_logic_vector (7 downto 0); 
          Reset       : in    std_logic; 
          SDC_MISO    : in    std_logic; 
          SPI_MISO    : in    std_logic; 
          Start       : in    std_logic; 
          AD_CONV     : out   std_logic; 
          AMP_CS      : out   std_logic; 
          Busy        : out   std_logic; 
          DAC_CLR     : out   std_logic; 
          DAC_CS      : out   std_logic; 
          FPGA_INIT_B : out   std_logic; 
          OutputLCD   : out   std_logic_vector (63 downto 0); 
          OutputLED   : out   std_logic_vector (4 downto 0); 
          SDC_MOSI    : out   std_logic; 
          SDC_SCK     : out   std_logic; 
          SDC_SS      : out   std_logic; 
          SPI_MOSI    : out   std_logic; 
          SPI_SCK     : out   std_logic; 
          SPI_SS_B    : out   std_logic);
end WAV_reader;

architecture BEHAVIORAL of WAV_reader is
   attribute BOX_TYPE   : string ;
   signal FExt        : std_logic_vector (1 downto 0);
   signal XLXN_84     : std_logic;
   signal XLXN_85     : std_logic_vector (7 downto 0);
   signal XLXN_87     : std_logic;
   signal XLXN_88     : std_logic_vector (3 downto 0);
   signal XLXN_89     : std_logic_vector (3 downto 0);
   signal XLXN_90     : std_logic_vector (11 downto 0);
   signal XLXN_93     : std_logic;
   signal XLXN_95     : std_logic;
   signal XLXN_104    : std_logic;
   signal Busy_DUMMY  : std_logic;
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
   
   component VCC
      port ( P : out   std_logic);
   end component;
   attribute BOX_TYPE of VCC : component is "BLACK_BOX";
   
   component DACWrite
      port ( Reset       : in    std_logic; 
             Start       : in    std_logic; 
             SPI_MISO    : in    std_logic; 
             Cmd         : in    std_logic_vector (3 downto 0); 
             Addr        : in    std_logic_vector (3 downto 0); 
             DATA        : in    std_logic_vector (11 downto 0); 
             DAC_CLR     : out   std_logic; 
             DAC_CS      : out   std_logic; 
             SPI_MOSI    : out   std_logic; 
             SPI_SCK     : out   std_logic; 
             SPI_SS_B    : out   std_logic; 
             AMP_CS      : out   std_logic; 
             AD_CONV     : out   std_logic; 
             SF_CE0      : out   std_logic; 
             FPGA_INIT_B : out   std_logic; 
             Busy        : out   std_logic; 
             Clk_50MHz   : in    std_logic; 
             Clk_Sys     : in    std_logic);
   end component;
   
   component naszregister
      port ( DO_Rdy       : in    std_logic; 
             Busy         : in    std_logic; 
             DAC_Busy     : in    std_logic; 
             Start        : in    std_logic; 
             Reset        : in    std_logic; 
             Clk_50MHz    : in    std_logic; 
             DO           : in    std_logic_vector (7 downto 0); 
             Pop          : out   std_logic; 
             MonoStereo   : out   std_logic; 
             EightSixteen : out   std_logic; 
             SRate_Tick   : out   std_logic; 
             Cmd          : out   std_logic_vector (3 downto 0); 
             Addr         : out   std_logic_vector (3 downto 0); 
             Data         : out   std_logic_vector (11 downto 0); 
             Line         : out   std_logic_vector (63 downto 0); 
             Work         : out   std_logic);
   end component;
   
begin
   Busy <= Busy_DUMMY;
   XLXI_3 : SDC_FileReader
      port map (Abort=>Abort,
                Clk_Sys=>Clk_50MHz,
                Clk_50MHz=>Clk_50MHz,
                DO_Pop=>XLXN_87,
                FExt(1 downto 0)=>FExt(1 downto 0),
                FName(7 downto 0)=>FName(7 downto 0),
                Reset=>Reset,
                SDC_MISO=>SDC_MISO,
                Start=>Start,
                Busy=>Busy_DUMMY,
                DO(7 downto 0)=>XLXN_85(7 downto 0),
                DO_Rdy=>XLXN_84,
                Error(1 downto 0)=>OutputLED(1 downto 0),
                SDC_MOSI=>SDC_MOSI,
                SDC_SCK=>SDC_SCK,
                SDC_SS=>SDC_SS);
   
   XLXI_6 : VCC
      port map (P=>FExt(1));
   
   XLXI_19 : VCC
      port map (P=>FExt(0));
   
   XLXI_21 : DACWrite
      port map (Addr(3 downto 0)=>XLXN_89(3 downto 0),
                Clk_Sys=>Clk_50MHz,
                Clk_50MHz=>Clk_50MHz,
                Cmd(3 downto 0)=>XLXN_88(3 downto 0),
                DATA(11 downto 0)=>XLXN_90(11 downto 0),
                Reset=>Reset,
                SPI_MISO=>SPI_MISO,
                Start=>XLXN_93,
                AD_CONV=>AD_CONV,
                AMP_CS=>AMP_CS,
                Busy=>XLXN_95,
                DAC_CLR=>DAC_CLR,
                DAC_CS=>DAC_CS,
                FPGA_INIT_B=>FPGA_INIT_B,
                SF_CE0=>XLXN_104,
                SPI_MOSI=>SPI_MOSI,
                SPI_SCK=>SPI_SCK,
                SPI_SS_B=>SPI_SS_B);
   
   XLXI_24 : naszregister
      port map (Busy=>Busy_DUMMY,
                Clk_50MHz=>Clk_50MHz,
                DAC_Busy=>XLXN_95,
                DO(7 downto 0)=>XLXN_85(7 downto 0),
                DO_Rdy=>XLXN_84,
                Reset=>Reset,
                Start=>Start,
                Addr(3 downto 0)=>XLXN_89(3 downto 0),
                Cmd(3 downto 0)=>XLXN_88(3 downto 0),
                Data(11 downto 0)=>XLXN_90(11 downto 0),
                EightSixteen=>OutputLED(3),
                Line(63 downto 0)=>OutputLCD(63 downto 0),
                MonoStereo=>OutputLED(2),
                Pop=>XLXN_87,
                SRate_Tick=>XLXN_93,
                Work=>OutputLED(4));
   
end BEHAVIORAL;


