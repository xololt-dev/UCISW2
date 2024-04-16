<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="Clk_50MHz" />
        <signal name="LED(1:0)" />
        <signal name="SDC_MOSI" />
        <signal name="SDC_SS" />
        <signal name="SDC_MISO" />
        <signal name="SDC_SCK" />
        <signal name="FExt(1:0)" />
        <signal name="FExt(1)" />
        <signal name="FExt(0)" />
        <signal name="FName(7:0)" />
        <signal name="FName(7)" />
        <signal name="FName(6)" />
        <signal name="FName(5)" />
        <signal name="FName(4)" />
        <signal name="FName(3)" />
        <signal name="FName(2)" />
        <signal name="FName(1)" />
        <signal name="FName(0)" />
        <signal name="SW_3" />
        <signal name="SW_2" />
        <signal name="SW_1" />
        <signal name="SW_0" />
        <signal name="BTN_WEST" />
        <signal name="BTN_EAST" />
        <signal name="BTN_SOUTH" />
        <signal name="XLXN_59" />
        <signal name="XLXN_67" />
        <signal name="XLXN_75" />
        <signal name="XLXN_1(63:0)" />
        <signal name="LCD_E" />
        <signal name="LCD_RS" />
        <signal name="LCD_RW" />
        <signal name="SF_CE" />
        <signal name="LCD_D(3:0)" />
        <signal name="XLXN_55(15:0)" />
        <signal name="XLXN_83" />
        <signal name="XLXN_84" />
        <signal name="XLXN_85(7:0)" />
        <signal name="XLXN_86" />
        <signal name="XLXN_87" />
        <signal name="XLXN_88(3:0)" />
        <signal name="XLXN_89(3:0)" />
        <signal name="XLXN_90(11:0)" />
        <signal name="LED_6" />
        <signal name="LED_5" />
        <signal name="XLXN_93" />
        <signal name="XLXN_95" />
        <signal name="SPI_MISO" />
        <signal name="SPI_MOSI" />
        <signal name="SPI_SCK" />
        <signal name="DAC_CS" />
        <signal name="DAC_CLR" />
        <signal name="SPI_SS_B" />
        <signal name="AMP_CS" />
        <signal name="AD_CONV" />
        <signal name="XLXN_104">
        </signal>
        <signal name="FPGA_INIT_B" />
        <signal name="XLXN_106" />
        <signal name="LED_7" />
        <port polarity="Input" name="Clk_50MHz" />
        <port polarity="Output" name="LED(1:0)" />
        <port polarity="Output" name="SDC_MOSI" />
        <port polarity="Output" name="SDC_SS" />
        <port polarity="Input" name="SDC_MISO" />
        <port polarity="Output" name="SDC_SCK" />
        <port polarity="Input" name="SW_3" />
        <port polarity="Input" name="SW_2" />
        <port polarity="Input" name="SW_1" />
        <port polarity="Input" name="SW_0" />
        <port polarity="Input" name="BTN_WEST" />
        <port polarity="Input" name="BTN_EAST" />
        <port polarity="Input" name="BTN_SOUTH" />
        <port polarity="Output" name="LCD_E" />
        <port polarity="Output" name="LCD_RS" />
        <port polarity="Output" name="LCD_RW" />
        <port polarity="Output" name="SF_CE" />
        <port polarity="BiDirectional" name="LCD_D(3:0)" />
        <port polarity="Output" name="LED_6" />
        <port polarity="Output" name="LED_5" />
        <port polarity="Input" name="SPI_MISO" />
        <port polarity="Output" name="SPI_MOSI" />
        <port polarity="Output" name="SPI_SCK" />
        <port polarity="Output" name="DAC_CS" />
        <port polarity="Output" name="DAC_CLR" />
        <port polarity="Output" name="SPI_SS_B" />
        <port polarity="Output" name="AMP_CS" />
        <port polarity="Output" name="AD_CONV" />
        <port polarity="Output" name="FPGA_INIT_B" />
        <port polarity="Output" name="LED_7" />
        <blockdef name="LCD1x64">
            <timestamp>2008-9-19T11:10:6</timestamp>
            <line x2="416" y1="-288" y2="-288" x1="352" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="416" y1="-224" y2="-224" x1="352" />
            <line x2="416" y1="-160" y2="-160" x1="352" />
            <rect width="64" x="352" y="-108" height="24" />
            <line x2="416" y1="-96" y2="-96" x1="352" />
            <line x2="416" y1="-32" y2="-32" x1="352" />
            <rect width="288" x="64" y="-320" height="320" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="SDC_FileReader">
            <timestamp>2021-11-9T18:15:58</timestamp>
            <line x2="0" y1="160" y2="160" x1="64" />
            <line x2="416" y1="96" y2="96" x1="352" />
            <line x2="416" y1="-224" y2="-224" x1="352" />
            <line x2="416" y1="-96" y2="-96" x1="352" />
            <line x2="416" y1="-160" y2="-160" x1="352" />
            <rect width="64" x="352" y="20" height="24" />
            <line x2="416" y1="32" y2="32" x1="352" />
            <rect width="64" x="352" y="148" height="24" />
            <line x2="416" y1="160" y2="160" x1="352" />
            <line x2="416" y1="-32" y2="-32" x1="352" />
            <line x2="352" y1="-288" y2="-288" x1="416" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="288" x="64" y="-320" height="512" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
        </blockdef>
        <blockdef name="buf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="0" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="64" y1="-64" y2="0" x1="64" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <blockdef name="ifd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <rect width="256" x="64" y="-320" height="256" />
            <line x2="64" y1="-128" y2="-140" x1="84" />
            <line x2="84" y1="-116" y2="-128" x1="64" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="320" y1="-256" y2="-256" x1="384" />
        </blockdef>
        <blockdef name="DACWrite">
            <timestamp>2024-4-4T9:22:43</timestamp>
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <rect width="64" x="0" y="-492" height="24" />
            <line x2="0" y1="-480" y2="-480" x1="64" />
            <rect width="64" x="0" y="-428" height="24" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <rect width="64" x="0" y="-364" height="24" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="448" y1="-224" y2="-224" x1="384" />
            <line x2="448" y1="-160" y2="-160" x1="384" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
            <line x2="448" y1="-32" y2="-32" x1="384" />
            <line x2="448" y1="32" y2="32" x1="384" />
            <line x2="448" y1="96" y2="96" x1="384" />
            <line x2="448" y1="-544" y2="-544" x1="384" />
            <line x2="448" y1="-416" y2="-416" x1="384" />
            <line x2="384" y1="-480" y2="-480" x1="448" />
            <line x2="448" y1="-352" y2="-352" x1="384" />
            <line x2="448" y1="-288" y2="-288" x1="384" />
            <line x2="0" y1="32" y2="32" x1="64" />
            <rect width="320" x="64" y="-576" height="760" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="160" y2="160" x1="64" />
        </blockdef>
        <blockdef name="naszregister">
            <timestamp>2024-4-4T11:48:57</timestamp>
            <line x2="384" y1="480" y2="480" x1="320" />
            <line x2="0" y1="416" y2="416" x1="64" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <line x2="384" y1="96" y2="96" x1="320" />
            <line x2="384" y1="160" y2="160" x1="320" />
            <rect width="64" x="320" y="212" height="24" />
            <line x2="384" y1="224" y2="224" x1="320" />
            <rect width="64" x="320" y="276" height="24" />
            <line x2="384" y1="288" y2="288" x1="320" />
            <rect width="64" x="320" y="340" height="24" />
            <line x2="384" y1="352" y2="352" x1="320" />
            <line x2="0" y1="-352" y2="-352" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-352" y2="-352" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="256" x="64" y="-384" height="896" />
        </blockdef>
        <block symbolname="SDC_FileReader" name="XLXI_3">
            <blockpin signalname="SDC_MISO" name="SDC_MISO" />
            <blockpin signalname="BTN_WEST" name="Start" />
            <blockpin signalname="FName(7:0)" name="FName(7:0)" />
            <blockpin signalname="XLXN_59" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_87" name="DO_Pop" />
            <blockpin signalname="BTN_EAST" name="Abort" />
            <blockpin signalname="SDC_MOSI" name="SDC_MOSI" />
            <blockpin signalname="SDC_SCK" name="SDC_SCK" />
            <blockpin signalname="SDC_SS" name="SDC_SS" />
            <blockpin signalname="LED(1:0)" name="Error(1:0)" />
            <blockpin signalname="XLXN_85(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_84" name="DO_Rdy" />
            <blockpin signalname="XLXN_106" name="Busy" />
            <blockpin signalname="FExt(1:0)" name="FExt(1:0)" />
            <blockpin signalname="Clk_50MHz" name="Clk_Sys" />
        </block>
        <block symbolname="vcc" name="XLXI_6">
            <blockpin signalname="FExt(1)" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_7">
            <blockpin signalname="FName(5)" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_8">
            <blockpin signalname="FName(4)" name="P" />
        </block>
        <block symbolname="gnd" name="XLXI_11">
            <blockpin signalname="FName(6)" name="G" />
        </block>
        <block symbolname="gnd" name="XLXI_12">
            <blockpin signalname="FName(7)" name="G" />
        </block>
        <block symbolname="buf" name="XLXI_14">
            <blockpin signalname="SW_3" name="I" />
            <blockpin signalname="FName(3)" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_15">
            <blockpin signalname="SW_2" name="I" />
            <blockpin signalname="FName(2)" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_16">
            <blockpin signalname="SW_1" name="I" />
            <blockpin signalname="FName(1)" name="O" />
        </block>
        <block symbolname="buf" name="XLXI_17">
            <blockpin signalname="SW_0" name="I" />
            <blockpin signalname="FName(0)" name="O" />
        </block>
        <block symbolname="vcc" name="XLXI_19">
            <blockpin signalname="FExt(0)" name="P" />
        </block>
        <block symbolname="ifd" name="XLXI_20">
            <blockpin signalname="Clk_50MHz" name="C" />
            <blockpin signalname="BTN_SOUTH" name="D" />
            <blockpin signalname="XLXN_59" name="Q" />
        </block>
        <block symbolname="DACWrite" name="XLXI_21">
            <blockpin signalname="XLXN_59" name="Reset" />
            <blockpin signalname="XLXN_93" name="Start" />
            <blockpin signalname="SPI_MISO" name="SPI_MISO" />
            <blockpin signalname="XLXN_88(3:0)" name="Cmd(3:0)" />
            <blockpin signalname="XLXN_89(3:0)" name="Addr(3:0)" />
            <blockpin signalname="XLXN_90(11:0)" name="DATA(11:0)" />
            <blockpin signalname="DAC_CLR" name="DAC_CLR" />
            <blockpin signalname="DAC_CS" name="DAC_CS" />
            <blockpin signalname="SPI_MOSI" name="SPI_MOSI" />
            <blockpin signalname="SPI_SCK" name="SPI_SCK" />
            <blockpin signalname="SPI_SS_B" name="SPI_SS_B" />
            <blockpin signalname="AMP_CS" name="AMP_CS" />
            <blockpin signalname="AD_CONV" name="AD_CONV" />
            <blockpin signalname="XLXN_104" name="SF_CE0" />
            <blockpin signalname="FPGA_INIT_B" name="FPGA_INIT_B" />
            <blockpin signalname="XLXN_95" name="Busy" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="Clk_50MHz" name="Clk_Sys" />
        </block>
        <block symbolname="naszregister" name="XLXI_24">
            <blockpin signalname="XLXN_84" name="DO_Rdy" />
            <blockpin signalname="XLXN_106" name="Busy" />
            <blockpin signalname="XLXN_95" name="DAC_Busy" />
            <blockpin signalname="BTN_WEST" name="Start" />
            <blockpin signalname="XLXN_59" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_85(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_87" name="Pop" />
            <blockpin signalname="LED_6" name="MonoStereo" />
            <blockpin signalname="LED_5" name="EightSixteen" />
            <blockpin signalname="XLXN_93" name="SRate_Tick" />
            <blockpin signalname="XLXN_88(3:0)" name="Cmd(3:0)" />
            <blockpin signalname="XLXN_89(3:0)" name="Addr(3:0)" />
            <blockpin signalname="XLXN_90(11:0)" name="Data(11:0)" />
            <blockpin signalname="XLXN_1(63:0)" name="Line(63:0)" />
            <blockpin signalname="LED_7" name="Work" />
        </block>
        <block symbolname="LCD1x64" name="XLXI_1">
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_59" name="Reset" />
            <blockpin signalname="XLXN_1(63:0)" name="Line(63:0)" />
            <blockpin signalname="XLXN_55(15:0)" name="Blank(15:0)" />
            <blockpin signalname="LCD_D(3:0)" name="LCD_D(3:0)" />
            <blockpin signalname="LCD_E" name="LCD_E" />
            <blockpin signalname="LCD_RW" name="LCD_RW" />
            <blockpin signalname="LCD_RS" name="LCD_RS" />
            <blockpin signalname="SF_CE" name="SF_CE" />
        </block>
        <block symbolname="constant" name="XLXI_18">
            <attr value="0000" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_55(15:0)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5440" height="3520">
        <instance x="1504" y="992" name="XLXI_3" orien="R0">
        </instance>
        <branch name="Clk_50MHz">
            <wire x2="288" y1="1504" y2="1504" x1="224" />
            <wire x2="224" y1="1504" y2="1648" x1="224" />
            <wire x2="752" y1="1648" y2="1648" x1="224" />
            <wire x2="624" y1="816" y2="816" x1="544" />
            <wire x2="544" y1="816" y2="912" x1="544" />
            <wire x2="928" y1="912" y2="912" x1="544" />
            <wire x2="928" y1="912" y2="1280" x1="928" />
            <wire x2="1392" y1="1280" y2="1280" x1="928" />
            <wire x2="1440" y1="1280" y2="1280" x1="1392" />
            <wire x2="1920" y1="1280" y2="1280" x1="1440" />
            <wire x2="2160" y1="1280" y2="1280" x1="1920" />
            <wire x2="2160" y1="1280" y2="1344" x1="2160" />
            <wire x2="3696" y1="1344" y2="1344" x1="2160" />
            <wire x2="928" y1="1280" y2="1408" x1="928" />
            <wire x2="752" y1="1408" y2="1648" x1="752" />
            <wire x2="928" y1="1408" y2="1408" x1="752" />
            <wire x2="928" y1="1280" y2="1280" x1="784" />
            <wire x2="1504" y1="1088" y2="1088" x1="1392" />
            <wire x2="1392" y1="1088" y2="1152" x1="1392" />
            <wire x2="1392" y1="1152" y2="1280" x1="1392" />
            <wire x2="1504" y1="1152" y2="1152" x1="1392" />
            <wire x2="2304" y1="960" y2="960" x1="2160" />
            <wire x2="2496" y1="960" y2="960" x1="2304" />
            <wire x2="2160" y1="960" y2="1264" x1="2160" />
            <wire x2="2160" y1="1264" y2="1280" x1="2160" />
            <wire x2="3664" y1="1264" y2="1264" x1="2160" />
            <wire x2="2496" y1="464" y2="960" x1="2496" />
            <wire x2="2736" y1="464" y2="464" x1="2496" />
            <wire x2="3664" y1="848" y2="848" x1="3648" />
            <wire x2="3664" y1="848" y2="1264" x1="3664" />
            <wire x2="3680" y1="848" y2="848" x1="3664" />
            <wire x2="3648" y1="848" y2="912" x1="3648" />
            <wire x2="3680" y1="912" y2="912" x1="3648" />
        </branch>
        <branch name="LED(1:0)">
            <wire x2="1968" y1="1152" y2="1152" x1="1920" />
        </branch>
        <iomarker fontsize="28" x="1968" y="1152" name="LED(1:0)" orien="R0" />
        <branch name="SDC_MOSI">
            <wire x2="1936" y1="768" y2="768" x1="1920" />
            <wire x2="1968" y1="768" y2="768" x1="1936" />
            <wire x2="1968" y1="512" y2="768" x1="1968" />
        </branch>
        <branch name="SDC_SS">
            <wire x2="1936" y1="896" y2="896" x1="1920" />
            <wire x2="2128" y1="896" y2="896" x1="1936" />
            <wire x2="2128" y1="512" y2="896" x1="2128" />
        </branch>
        <iomarker fontsize="28" x="1968" y="512" name="SDC_MOSI" orien="R270" />
        <branch name="SDC_MISO">
            <wire x2="1888" y1="512" y2="576" x1="1888" />
            <wire x2="1984" y1="576" y2="576" x1="1888" />
            <wire x2="1984" y1="576" y2="704" x1="1984" />
            <wire x2="1984" y1="704" y2="704" x1="1920" />
        </branch>
        <iomarker fontsize="28" x="1888" y="512" name="SDC_MISO" orien="R270" />
        <branch name="SDC_SCK">
            <wire x2="2032" y1="832" y2="832" x1="1920" />
            <wire x2="2032" y1="512" y2="832" x1="2032" />
        </branch>
        <iomarker fontsize="28" x="2128" y="512" name="SDC_SS" orien="R270" />
        <iomarker fontsize="28" x="2032" y="512" name="SDC_SCK" orien="R270" />
        <branch name="FExt(1:0)">
            <wire x2="640" y1="976" y2="1024" x1="640" />
            <wire x2="640" y1="1024" y2="1088" x1="640" />
            <wire x2="640" y1="1088" y2="1120" x1="640" />
            <wire x2="1344" y1="1120" y2="1120" x1="640" />
            <wire x2="1344" y1="832" y2="1120" x1="1344" />
            <wire x2="1504" y1="832" y2="832" x1="1344" />
        </branch>
        <iomarker fontsize="28" x="784" y="1280" name="Clk_50MHz" orien="R180" />
        <bustap x2="544" y1="1088" y2="1088" x1="640" />
        <bustap x2="544" y1="1024" y2="1024" x1="640" />
        <instance x="512" y="1088" name="XLXI_6" orien="R270" />
        <branch name="FExt(1)">
            <wire x2="544" y1="1024" y2="1024" x1="512" />
        </branch>
        <branch name="FExt(0)">
            <wire x2="544" y1="1088" y2="1088" x1="512" />
        </branch>
        <branch name="FName(7:0)">
            <wire x2="1504" y1="768" y2="768" x1="1120" />
            <wire x2="1120" y1="768" y2="1504" x1="1120" />
            <wire x2="1120" y1="1504" y2="1568" x1="1120" />
            <wire x2="1120" y1="1568" y2="1600" x1="1120" />
            <wire x2="1120" y1="1600" y2="1632" x1="1120" />
            <wire x2="1120" y1="1632" y2="1696" x1="1120" />
            <wire x2="1120" y1="1696" y2="1760" x1="1120" />
            <wire x2="1120" y1="1760" y2="1824" x1="1120" />
            <wire x2="1120" y1="1824" y2="1888" x1="1120" />
            <wire x2="1120" y1="1888" y2="1952" x1="1120" />
            <wire x2="1120" y1="1952" y2="1984" x1="1120" />
        </branch>
        <bustap x2="1024" y1="1504" y2="1504" x1="1120" />
        <bustap x2="1024" y1="1568" y2="1568" x1="1120" />
        <bustap x2="1024" y1="1632" y2="1632" x1="1120" />
        <bustap x2="1024" y1="1696" y2="1696" x1="1120" />
        <bustap x2="1024" y1="1760" y2="1760" x1="1120" />
        <bustap x2="1024" y1="1824" y2="1824" x1="1120" />
        <bustap x2="1024" y1="1888" y2="1888" x1="1120" />
        <bustap x2="1024" y1="1952" y2="1952" x1="1120" />
        <branch name="FName(7)">
            <wire x2="1024" y1="1504" y2="1504" x1="944" />
        </branch>
        <branch name="FName(5)">
            <wire x2="1024" y1="1632" y2="1632" x1="944" />
        </branch>
        <branch name="FName(4)">
            <wire x2="1024" y1="1696" y2="1696" x1="944" />
        </branch>
        <branch name="FName(3)">
            <wire x2="1024" y1="1760" y2="1760" x1="944" />
        </branch>
        <branch name="FName(2)">
            <wire x2="1024" y1="1824" y2="1824" x1="944" />
        </branch>
        <branch name="FName(1)">
            <wire x2="1024" y1="1888" y2="1888" x1="944" />
        </branch>
        <branch name="FName(0)">
            <wire x2="1024" y1="1952" y2="1952" x1="944" />
        </branch>
        <instance x="944" y="1696" name="XLXI_7" orien="R270" />
        <instance x="944" y="1760" name="XLXI_8" orien="R270" />
        <branch name="FName(6)">
            <wire x2="960" y1="1568" y2="1568" x1="944" />
            <wire x2="1024" y1="1568" y2="1568" x1="960" />
        </branch>
        <instance x="816" y="1504" name="XLXI_11" orien="R90" />
        <instance x="816" y="1440" name="XLXI_12" orien="R90" />
        <instance x="720" y="1792" name="XLXI_14" orien="R0" />
        <instance x="720" y="1856" name="XLXI_15" orien="R0" />
        <instance x="720" y="1920" name="XLXI_16" orien="R0" />
        <instance x="720" y="1984" name="XLXI_17" orien="R0" />
        <branch name="SW_3">
            <wire x2="720" y1="1760" y2="1760" x1="688" />
        </branch>
        <iomarker fontsize="28" x="688" y="1760" name="SW_3" orien="R180" />
        <branch name="SW_2">
            <wire x2="720" y1="1824" y2="1824" x1="688" />
        </branch>
        <iomarker fontsize="28" x="688" y="1824" name="SW_2" orien="R180" />
        <branch name="SW_1">
            <wire x2="720" y1="1888" y2="1888" x1="688" />
        </branch>
        <iomarker fontsize="28" x="688" y="1888" name="SW_1" orien="R180" />
        <branch name="SW_0">
            <wire x2="720" y1="1952" y2="1952" x1="688" />
        </branch>
        <iomarker fontsize="28" x="688" y="1952" name="SW_0" orien="R180" />
        <branch name="BTN_WEST">
            <wire x2="624" y1="688" y2="688" x1="560" />
            <wire x2="1008" y1="688" y2="688" x1="624" />
            <wire x2="1248" y1="688" y2="688" x1="1008" />
            <wire x2="1248" y1="688" y2="704" x1="1248" />
            <wire x2="1504" y1="704" y2="704" x1="1248" />
            <wire x2="1248" y1="656" y2="688" x1="1248" />
            <wire x2="2080" y1="656" y2="656" x1="1248" />
            <wire x2="2080" y1="656" y2="832" x1="2080" />
            <wire x2="2304" y1="832" y2="832" x1="2080" />
            <wire x2="2512" y1="832" y2="832" x1="2304" />
            <wire x2="2512" y1="336" y2="832" x1="2512" />
            <wire x2="2736" y1="336" y2="336" x1="2512" />
        </branch>
        <branch name="BTN_EAST">
            <wire x2="624" y1="752" y2="752" x1="560" />
            <wire x2="1056" y1="752" y2="752" x1="624" />
            <wire x2="1056" y1="752" y2="960" x1="1056" />
            <wire x2="1504" y1="960" y2="960" x1="1056" />
        </branch>
        <iomarker fontsize="28" x="560" y="688" name="BTN_WEST" orien="R180" />
        <iomarker fontsize="28" x="560" y="752" name="BTN_EAST" orien="R180" />
        <instance x="512" y="1152" name="XLXI_19" orien="R270" />
        <instance x="288" y="1632" name="XLXI_20" orien="R0" />
        <branch name="BTN_SOUTH">
            <wire x2="288" y1="1376" y2="1376" x1="256" />
        </branch>
        <iomarker fontsize="28" x="256" y="1376" name="BTN_SOUTH" orien="R180" />
        <branch name="XLXN_59">
            <wire x2="1088" y1="1376" y2="1376" x1="672" />
            <wire x2="2144" y1="1376" y2="1376" x1="1088" />
            <wire x2="1088" y1="1024" y2="1376" x1="1088" />
            <wire x2="1504" y1="1024" y2="1024" x1="1088" />
            <wire x2="1952" y1="992" y2="1360" x1="1952" />
            <wire x2="2144" y1="1360" y2="1360" x1="1952" />
            <wire x2="2144" y1="1360" y2="1376" x1="2144" />
            <wire x2="2912" y1="1360" y2="1360" x1="2144" />
            <wire x2="3568" y1="992" y2="992" x1="1952" />
            <wire x2="2304" y1="896" y2="896" x1="2144" />
            <wire x2="2480" y1="896" y2="896" x1="2304" />
            <wire x2="2144" y1="896" y2="1360" x1="2144" />
            <wire x2="2480" y1="400" y2="896" x1="2480" />
            <wire x2="2736" y1="400" y2="400" x1="2480" />
            <wire x2="2912" y1="1280" y2="1360" x1="2912" />
            <wire x2="3696" y1="1280" y2="1280" x1="2912" />
            <wire x2="3568" y1="784" y2="992" x1="3568" />
            <wire x2="3680" y1="784" y2="784" x1="3568" />
        </branch>
        <instance x="3696" y="1376" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_1(63:0)">
            <wire x2="3440" y1="528" y2="528" x1="3120" />
            <wire x2="3440" y1="528" y2="1088" x1="3440" />
            <wire x2="3696" y1="1088" y2="1088" x1="3440" />
        </branch>
        <branch name="LCD_E">
            <wire x2="4144" y1="1088" y2="1088" x1="4112" />
        </branch>
        <branch name="LCD_RS">
            <wire x2="4144" y1="1152" y2="1152" x1="4112" />
        </branch>
        <branch name="LCD_RW">
            <wire x2="4144" y1="1216" y2="1216" x1="4112" />
        </branch>
        <branch name="SF_CE">
            <wire x2="4144" y1="1344" y2="1344" x1="4112" />
        </branch>
        <branch name="LCD_D(3:0)">
            <wire x2="4144" y1="1280" y2="1280" x1="4112" />
        </branch>
        <instance x="3504" y="1120" name="XLXI_18" orien="R0">
        </instance>
        <branch name="XLXN_55(15:0)">
            <wire x2="3696" y1="1152" y2="1152" x1="3648" />
        </branch>
        <iomarker fontsize="28" x="4144" y="1088" name="LCD_E" orien="R0" />
        <iomarker fontsize="28" x="4144" y="1152" name="LCD_RS" orien="R0" />
        <iomarker fontsize="28" x="4144" y="1216" name="LCD_RW" orien="R0" />
        <iomarker fontsize="28" x="4144" y="1344" name="SF_CE" orien="R0" />
        <iomarker fontsize="28" x="4144" y="1280" name="LCD_D(3:0)" orien="R0" />
        <instance x="3680" y="752" name="XLXI_21" orien="R0">
        </instance>
        <instance x="2736" y="560" name="XLXI_24" orien="R0">
        </instance>
        <branch name="XLXN_84">
            <wire x2="1984" y1="960" y2="960" x1="1920" />
            <wire x2="1984" y1="912" y2="960" x1="1984" />
            <wire x2="2224" y1="912" y2="912" x1="1984" />
            <wire x2="2224" y1="208" y2="912" x1="2224" />
            <wire x2="2736" y1="208" y2="208" x1="2224" />
        </branch>
        <branch name="XLXN_85(7:0)">
            <wire x2="2320" y1="1024" y2="1024" x1="1920" />
            <wire x2="2320" y1="528" y2="1024" x1="2320" />
            <wire x2="2736" y1="528" y2="528" x1="2320" />
        </branch>
        <branch name="XLXN_87">
            <wire x2="1504" y1="896" y2="896" x1="1424" />
            <wire x2="1424" y1="896" y2="1248" x1="1424" />
            <wire x2="3200" y1="1248" y2="1248" x1="1424" />
            <wire x2="3200" y1="208" y2="208" x1="3120" />
            <wire x2="3200" y1="208" y2="1248" x1="3200" />
        </branch>
        <branch name="XLXN_88(3:0)">
            <wire x2="3456" y1="784" y2="784" x1="3120" />
            <wire x2="3456" y1="272" y2="784" x1="3456" />
            <wire x2="3680" y1="272" y2="272" x1="3456" />
        </branch>
        <branch name="XLXN_89(3:0)">
            <wire x2="3472" y1="848" y2="848" x1="3120" />
            <wire x2="3472" y1="336" y2="848" x1="3472" />
            <wire x2="3680" y1="336" y2="336" x1="3472" />
        </branch>
        <branch name="XLXN_90(11:0)">
            <wire x2="3488" y1="912" y2="912" x1="3120" />
            <wire x2="3488" y1="400" y2="912" x1="3488" />
            <wire x2="3680" y1="400" y2="400" x1="3488" />
        </branch>
        <branch name="LED_6">
            <wire x2="3152" y1="592" y2="592" x1="3120" />
        </branch>
        <iomarker fontsize="28" x="3152" y="592" name="LED_6" orien="R0" />
        <branch name="LED_5">
            <wire x2="3152" y1="656" y2="656" x1="3120" />
        </branch>
        <iomarker fontsize="28" x="3152" y="656" name="LED_5" orien="R0" />
        <branch name="XLXN_93">
            <wire x2="3392" y1="720" y2="720" x1="3120" />
            <wire x2="3392" y1="208" y2="720" x1="3392" />
            <wire x2="3680" y1="208" y2="208" x1="3392" />
        </branch>
        <branch name="XLXN_95">
            <wire x2="2736" y1="976" y2="976" x1="2656" />
            <wire x2="2656" y1="976" y2="1440" x1="2656" />
            <wire x2="4400" y1="1440" y2="1440" x1="2656" />
            <wire x2="4400" y1="848" y2="848" x1="4128" />
            <wire x2="4400" y1="848" y2="1440" x1="4400" />
        </branch>
        <branch name="SPI_MISO">
            <wire x2="4160" y1="272" y2="272" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="272" name="SPI_MISO" orien="R0" />
        <branch name="SPI_MOSI">
            <wire x2="4160" y1="208" y2="208" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="208" name="SPI_MOSI" orien="R0" />
        <branch name="SPI_SCK">
            <wire x2="4160" y1="336" y2="336" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="336" name="SPI_SCK" orien="R0" />
        <branch name="DAC_CS">
            <wire x2="4160" y1="400" y2="400" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="400" name="DAC_CS" orien="R0" />
        <branch name="DAC_CLR">
            <wire x2="4160" y1="464" y2="464" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="464" name="DAC_CLR" orien="R0" />
        <branch name="SPI_SS_B">
            <wire x2="4160" y1="528" y2="528" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="528" name="SPI_SS_B" orien="R0" />
        <branch name="AMP_CS">
            <wire x2="4160" y1="592" y2="592" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="592" name="AMP_CS" orien="R0" />
        <branch name="AD_CONV">
            <wire x2="4160" y1="656" y2="656" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="656" name="AD_CONV" orien="R0" />
        <branch name="XLXN_104">
            <wire x2="4160" y1="720" y2="720" x1="4128" />
        </branch>
        <branch name="FPGA_INIT_B">
            <wire x2="4160" y1="784" y2="784" x1="4128" />
        </branch>
        <iomarker fontsize="28" x="4160" y="784" name="FPGA_INIT_B" orien="R0" />
        <branch name="XLXN_106">
            <wire x2="2288" y1="1088" y2="1088" x1="1920" />
            <wire x2="2288" y1="272" y2="1088" x1="2288" />
            <wire x2="2736" y1="272" y2="272" x1="2288" />
        </branch>
        <branch name="LED_7">
            <wire x2="3152" y1="1040" y2="1040" x1="3120" />
        </branch>
        <iomarker fontsize="28" x="3152" y="1040" name="LED_7" orien="R0" />
    </sheet>
</drawing>