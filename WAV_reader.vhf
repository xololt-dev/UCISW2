--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : WAV_reader.vhf
-- /___/   /\     Timestamp : 04/04/2024 13:50:04
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/XilinxPrj/UCISW2-main/WAV_reader.vhf -w C:/XilinxPrj/UCISW2-main/WAV_reader.sch
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

entity IFD_MXILINX_WAV_reader is
   generic( INIT : bit :=  '0');
   port ( C : in    std_logic; 
          D : in    std_logic; 
          Q : out   std_logic);
end IFD_MXILINX_WAV_reader;

architecture BEHAVIORAL of IFD_MXILINX_WAV_reader is
   attribute BOX_TYPE         : string ;
   attribute IOB              : string ;
   attribute IOSTANDARD       : string ;
   attribute IBUF_DELAY_VALUE : string ;
   attribute IFD_DELAY_VALUE  : string ;
   signal D_IN   : std_logic;
   signal XLXN_1 : std_logic;
   signal XLXN_2 : std_logic;
   component FDCE
      generic( INIT : bit :=  '0');
      port ( C   : in    std_logic; 
             CE  : in    std_logic; 
             CLR : in    std_logic; 
             D   : in    std_logic; 
             Q   : out   std_logic);
   end component;
   attribute BOX_TYPE of FDCE : component is "BLACK_BOX";
   
   component IBUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute IOSTANDARD of IBUF : component is "DEFAULT";
   attribute IBUF_DELAY_VALUE of IBUF : component is "0";
   attribute IFD_DELAY_VALUE of IBUF : component is "AUTO";
   attribute BOX_TYPE of IBUF : component is "BLACK_BOX";
   
   component VCC
      port ( P : out   std_logic);
   end component;
   attribute BOX_TYPE of VCC : component is "BLACK_BOX";
   
   component GND
      port ( G : out   std_logic);
   end component;
   attribute BOX_TYPE of GND : component is "BLACK_BOX";
   
   attribute IOB of I_36_15 : label is "TRUE";
begin
   I_36_15 : FDCE
   generic map( INIT => INIT)
      port map (C=>C,
                CE=>XLXN_2,
                CLR=>XLXN_1,
                D=>D_IN,
                Q=>Q);
   
   I_36_24 : IBUF
      port map (I=>D,
                O=>D_IN);
   
   I_36_26 : VCC
      port map (P=>XLXN_2);
   
   I_36_29 : GND
      port map (G=>XLXN_1);
   
end BEHAVIORAL;



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity WAV_reader is
   port ( BTN_EAST    : in    std_logic; 
          BTN_SOUTH   : in    std_logic; 
          BTN_WEST    : in    std_logic; 
          Clk_50MHz   : in    std_logic; 
          SDC_MISO    : in    std_logic; 
          SPI_MISO    : in    std_logic; 
          SW_0        : in    std_logic; 
          SW_1        : in    std_logic; 
          SW_2        : in    std_logic; 
          SW_3        : in    std_logic; 
          AD_CONV     : out   std_logic; 
          AMP_CS      : out   std_logic; 
          DAC_CLR     : out   std_logic; 
          DAC_CS      : out   std_logic; 
          FPGA_INIT_B : out   std_logic; 
          LCD_E       : out   std_logic; 
          LCD_RS      : out   std_logic; 
          LCD_RW      : out   std_logic; 
          LED         : out   std_logic_vector (1 downto 0); 
          LED_5       : out   std_logic; 
          LED_6       : out   std_logic; 
          LED_7       : out   std_logic; 
          SDC_MOSI    : out   std_logic; 
          SDC_SCK     : out   std_logic; 
          SDC_SS      : out   std_logic; 
          SF_CE       : out   std_logic; 
          SPI_MOSI    : out   std_logic; 
          SPI_SCK     : out   std_logic; 
          SPI_SS_B    : out   std_logic; 
          LCD_D       : inout std_logic_vector (3 downto 0));
end WAV_reader;

architecture BEHAVIORAL of WAV_reader is
   attribute BOX_TYPE   : string ;
   attribute HU_SET     : string ;
   signal FExt        : std_logic_vector (1 downto 0);
   signal FName       : std_logic_vector (7 downto 0);
   signal XLXN_1      : std_logic_vector (63 downto 0);
   signal XLXN_55     : std_logic_vector (15 downto 0);
   signal XLXN_59     : std_logic;
   signal XLXN_84     : std_logic;
   signal XLXN_85     : std_logic_vector (7 downto 0);
   signal XLXN_87     : std_logic;
   signal XLXN_88     : std_logic_vector (3 downto 0);
   signal XLXN_89     : std_logic_vector (3 downto 0);
   signal XLXN_90     : std_logic_vector (11 downto 0);
   signal XLXN_93     : std_logic;
   signal XLXN_95     : std_logic;
   signal XLXN_104    : std_logic;
   signal XLXN_106    : std_logic;
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
   
   component GND
      port ( G : out   std_logic);
   end component;
   attribute BOX_TYPE of GND : component is "BLACK_BOX";
   
   component BUF
      port ( I : in    std_logic; 
             O : out   std_logic);
   end component;
   attribute BOX_TYPE of BUF : component is "BLACK_BOX";
   
   component IFD_MXILINX_WAV_reader
      generic( INIT : bit :=  '0');
      port ( C : in    std_logic; 
             D : in    std_logic; 
             Q : out   std_logic);
   end component;
   
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
   
   attribute HU_SET of XLXI_20 : label is "XLXI_20_0";
begin
   XLXN_55(15 downto 0) <= x"0000";
   XLXI_1 : LCD1x64
      port map (Blank(15 downto 0)=>XLXN_55(15 downto 0),
                Clk_50MHz=>Clk_50MHz,
                Line(63 downto 0)=>XLXN_1(63 downto 0),
                Reset=>XLXN_59,
                LCD_E=>LCD_E,
                LCD_RS=>LCD_RS,
                LCD_RW=>LCD_RW,
                SF_CE=>SF_CE,
                LCD_D(3 downto 0)=>LCD_D(3 downto 0));
   
   XLXI_3 : SDC_FileReader
      port map (Abort=>BTN_EAST,
                Clk_Sys=>Clk_50MHz,
                Clk_50MHz=>Clk_50MHz,
                DO_Pop=>XLXN_87,
                FExt(1 downto 0)=>FExt(1 downto 0),
                FName(7 downto 0)=>FName(7 downto 0),
                Reset=>XLXN_59,
                SDC_MISO=>SDC_MISO,
                Start=>BTN_WEST,
                Busy=>XLXN_106,
                DO(7 downto 0)=>XLXN_85(7 downto 0),
                DO_Rdy=>XLXN_84,
                Error(1 downto 0)=>LED(1 downto 0),
                SDC_MOSI=>SDC_MOSI,
                SDC_SCK=>SDC_SCK,
                SDC_SS=>SDC_SS);
   
   XLXI_6 : VCC
      port map (P=>FExt(1));
   
   XLXI_7 : VCC
      port map (P=>FName(5));
   
   XLXI_8 : VCC
      port map (P=>FName(4));
   
   XLXI_11 : GND
      port map (G=>FName(6));
   
   XLXI_12 : GND
      port map (G=>FName(7));
   
   XLXI_14 : BUF
      port map (I=>SW_3,
                O=>FName(3));
   
   XLXI_15 : BUF
      port map (I=>SW_2,
                O=>FName(2));
   
   XLXI_16 : BUF
      port map (I=>SW_1,
                O=>FName(1));
   
   XLXI_17 : BUF
      port map (I=>SW_0,
                O=>FName(0));
   
   XLXI_19 : VCC
      port map (P=>FExt(0));
   
   XLXI_20 : IFD_MXILINX_WAV_reader
      port map (C=>Clk_50MHz,
                D=>BTN_SOUTH,
                Q=>XLXN_59);
   
   XLXI_21 : DACWrite
      port map (Addr(3 downto 0)=>XLXN_89(3 downto 0),
                Clk_Sys=>Clk_50MHz,
                Clk_50MHz=>Clk_50MHz,
                Cmd(3 downto 0)=>XLXN_88(3 downto 0),
                DATA(11 downto 0)=>XLXN_90(11 downto 0),
                Reset=>XLXN_59,
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
      port map (Busy=>XLXN_106,
                Clk_50MHz=>Clk_50MHz,
                DAC_Busy=>XLXN_95,
                DO(7 downto 0)=>XLXN_85(7 downto 0),
                DO_Rdy=>XLXN_84,
                Reset=>XLXN_59,
                Start=>BTN_WEST,
                Addr(3 downto 0)=>XLXN_89(3 downto 0),
                Cmd(3 downto 0)=>XLXN_88(3 downto 0),
                Data(11 downto 0)=>XLXN_90(11 downto 0),
                EightSixteen=>LED_5,
                Line(63 downto 0)=>XLXN_1(63 downto 0),
                MonoStereo=>LED_6,
                Pop=>XLXN_87,
                SRate_Tick=>XLXN_93,
                Work=>LED_7);
   
end BEHAVIORAL;


