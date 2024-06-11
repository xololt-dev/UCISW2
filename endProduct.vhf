--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____ 
--  /   /\/   / 
-- /___/  \  /    Vendor: Xilinx 
-- \   \   \/     Version : 14.7
--  \   \         Application : sch2hdl
--  /   /         Filename : endProduct.vhf
-- /___/   /\     Timestamp : 06/11/2024 12:07:53
-- \   \  /  \ 
--  \___\/\___\ 
--
--Command: sch2hdl -intstyle ise -family spartan3e -flat -suppress -vhdl C:/XilinxPrj/UCISW2-main-newer1106/UCISW2-main-newer/endProduct.vhf -w C:/XilinxPrj/UCISW2-main-newer1106/UCISW2-main-newer/endProduct.sch
--Design Name: endProduct
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

entity IFD_MXILINX_endProduct is
   generic( INIT : bit :=  '0');
   port ( C : in    std_logic; 
          D : in    std_logic; 
          Q : out   std_logic);
end IFD_MXILINX_endProduct;

architecture BEHAVIORAL of IFD_MXILINX_endProduct is
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

entity WAV_reader_MUSER_endProduct is
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
end WAV_reader_MUSER_endProduct;

architecture BEHAVIORAL of WAV_reader_MUSER_endProduct is
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



library ieee;
use ieee.std_logic_1164.ALL;
use ieee.numeric_std.ALL;
library UNISIM;
use UNISIM.Vcomponents.ALL;

entity endProduct is
   port ( BTN_EAST    : in    std_logic; 
          BTN_SOUTH   : in    std_logic; 
          Clk_50MHz   : in    std_logic; 
          PS2_Clk     : in    std_logic; 
          PS2_Data    : in    std_logic; 
          SDC_MISO    : in    std_logic; 
          SPI_MISO    : in    std_logic; 
          AD_CONV     : out   std_logic; 
          AMP_CS      : out   std_logic; 
          DAC_CLR     : out   std_logic; 
          DAC_CS      : out   std_logic; 
          DO          : out   std_logic_vector (4 downto 0); 
          FPGA_INIT_B : out   std_logic; 
          LCD_E       : out   std_logic; 
          LCD_RS      : out   std_logic; 
          LCD_RW      : out   std_logic; 
          SDC_MOSI    : out   std_logic; 
          SDC_SCK     : out   std_logic; 
          SDC_SS      : out   std_logic; 
          SF_CE       : out   std_logic; 
          SPI_MOSI    : out   std_logic; 
          SPI_SCK     : out   std_logic; 
          SPI_SS_B    : out   std_logic; 
          LCD_D       : inout std_logic_vector (3 downto 0));
end endProduct;

architecture BEHAVIORAL of endProduct is
   attribute HU_SET     : string ;
   signal BTN_WEST    : std_logic;
   signal XLXN_1      : std_logic_vector (63 downto 0);
   signal XLXN_2      : std_logic_vector (15 downto 0);
   signal XLXN_5      : std_logic;
   signal XLXN_6      : std_logic;
   signal XLXN_7      : std_logic;
   signal XLXN_38     : std_logic_vector (7 downto 0);
   signal XLXN_48     : std_logic_vector (7 downto 0);
   signal XLXN_50     : std_logic;
   signal XLXN_52     : std_logic;
   component WAV_reader_MUSER_endProduct
      port ( SDC_MISO    : in    std_logic; 
             Abort       : in    std_logic; 
             Reset       : in    std_logic; 
             SPI_MISO    : in    std_logic; 
             Clk_50MHz   : in    std_logic; 
             Start       : in    std_logic; 
             FName       : in    std_logic_vector (7 downto 0); 
             SDC_MOSI    : out   std_logic; 
             SDC_SS      : out   std_logic; 
             SDC_SCK     : out   std_logic; 
             OutputLCD   : out   std_logic_vector (63 downto 0); 
             SPI_MOSI    : out   std_logic; 
             SPI_SCK     : out   std_logic; 
             DAC_CS      : out   std_logic; 
             DAC_CLR     : out   std_logic; 
             SPI_SS_B    : out   std_logic; 
             AMP_CS      : out   std_logic; 
             AD_CONV     : out   std_logic; 
             FPGA_INIT_B : out   std_logic; 
             Busy        : out   std_logic; 
             OutputLED   : out   std_logic_vector (4 downto 0));
   end component;
   
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
   
   component PS2_Kbd
      port ( PS2_Clk   : in    std_logic; 
             PS2_Data  : in    std_logic; 
             Clk_50MHz : in    std_logic; 
             E0        : out   std_logic; 
             F0        : out   std_logic; 
             DO_Rdy    : out   std_logic; 
             DO        : out   std_logic_vector (7 downto 0); 
             Clk_Sys   : in    std_logic);
   end component;
   
   component fileNameReader
      port ( E0        : in    std_logic; 
             F0        : in    std_logic; 
             DO_Rdy    : in    std_logic; 
             Reset     : in    std_logic; 
             Clk       : in    std_logic; 
             DO        : in    std_logic_vector (7 downto 0); 
             Name_Rdy  : out   std_logic; 
             FName     : out   std_logic_vector (7 downto 0); 
             Read_Busy : in    std_logic);
   end component;
   
   component IFD_MXILINX_endProduct
      generic( INIT : bit :=  '0');
      port ( C : in    std_logic; 
             D : in    std_logic; 
             Q : out   std_logic);
   end component;
   
   attribute HU_SET of XLXI_34 : label is "XLXI_34_1";
begin
   XLXN_2(15 downto 0) <= x"0000";
   XLXI_1 : WAV_reader_MUSER_endProduct
      port map (Abort=>BTN_EAST,
                Clk_50MHz=>Clk_50MHz,
                FName(7 downto 0)=>XLXN_38(7 downto 0),
                Reset=>XLXN_50,
                SDC_MISO=>SDC_MISO,
                SPI_MISO=>SPI_MISO,
                Start=>BTN_WEST,
                AD_CONV=>AD_CONV,
                AMP_CS=>AMP_CS,
                Busy=>XLXN_52,
                DAC_CLR=>DAC_CLR,
                DAC_CS=>DAC_CS,
                FPGA_INIT_B=>FPGA_INIT_B,
                OutputLCD(63 downto 0)=>XLXN_1(63 downto 0),
                OutputLED(4 downto 0)=>DO(4 downto 0),
                SDC_MOSI=>SDC_MOSI,
                SDC_SCK=>SDC_SCK,
                SDC_SS=>SDC_SS,
                SPI_MOSI=>SPI_MOSI,
                SPI_SCK=>SPI_SCK,
                SPI_SS_B=>SPI_SS_B);
   
   XLXI_2 : LCD1x64
      port map (Blank(15 downto 0)=>XLXN_2(15 downto 0),
                Clk_50MHz=>Clk_50MHz,
                Line(63 downto 0)=>XLXN_1(63 downto 0),
                Reset=>XLXN_50,
                LCD_E=>LCD_E,
                LCD_RS=>LCD_RS,
                LCD_RW=>LCD_RW,
                SF_CE=>SF_CE,
                LCD_D(3 downto 0)=>LCD_D(3 downto 0));
   
   XLXI_19 : PS2_Kbd
      port map (Clk_Sys=>Clk_50MHz,
                Clk_50MHz=>Clk_50MHz,
                PS2_Clk=>PS2_Clk,
                PS2_Data=>PS2_Data,
                DO(7 downto 0)=>XLXN_48(7 downto 0),
                DO_Rdy=>XLXN_7,
                E0=>XLXN_5,
                F0=>XLXN_6);
   
   XLXI_24 : fileNameReader
      port map (Clk=>Clk_50MHz,
                DO(7 downto 0)=>XLXN_48(7 downto 0),
                DO_Rdy=>XLXN_7,
                E0=>XLXN_5,
                F0=>XLXN_6,
                Read_Busy=>XLXN_52,
                Reset=>XLXN_50,
                FName(7 downto 0)=>XLXN_38(7 downto 0),
                Name_Rdy=>BTN_WEST);
   
   XLXI_34 : IFD_MXILINX_endProduct
      port map (C=>Clk_50MHz,
                D=>BTN_SOUTH,
                Q=>XLXN_50);
   
end BEHAVIORAL;


