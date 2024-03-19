<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500xl" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1(63:0)" />
        <signal name="XLXN_2(7:0)" />
        <signal name="LED_7" />
        <signal name="XLXN_4" />
        <signal name="Clk_50MHz" />
        <signal name="BTN_SOUTH" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_12" />
        <signal name="XLXN_13" />
        <signal name="XLXN_14" />
        <signal name="XLXN_15" />
        <signal name="LED(1:0)" />
        <signal name="SDC_MOSI" />
        <signal name="SDC_SS" />
        <signal name="XLXN_21" />
        <signal name="XLXN_22" />
        <signal name="SDC_MISO" />
        <signal name="SDC_SCK" />
        <signal name="XLXN_27" />
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
        <signal name="ROT_A" />
        <signal name="ROT_B" />
        <signal name="XLXN_49" />
        <signal name="LCD_E" />
        <signal name="LCD_RS" />
        <signal name="LCD_RW" />
        <signal name="SF_CE" />
        <signal name="LCD_D(3:0)" />
        <signal name="XLXN_55(15:0)" />
        <port polarity="Output" name="LED_7" />
        <port polarity="Input" name="Clk_50MHz" />
        <port polarity="Input" name="BTN_SOUTH" />
        <port polarity="Output" name="LED(1:0)" />
        <port polarity="Output" name="SDC_MOSI" />
        <port polarity="Output" name="SDC_SS" />
        <port polarity="Input" name="SDC_MISO" />
        <port polarity="Output" name="SDC_SCK" />
        <port polarity="Input" name="SW_3" />
        <port polarity="Input" name="SW_2" />
        <port polarity="Input" name="SW_1" />
        <port polarity="Input" name="SW_0" />
        <port polarity="Input" name="ROT_A" />
        <port polarity="Input" name="ROT_B" />
        <port polarity="Output" name="LCD_E" />
        <port polarity="Output" name="LCD_RS" />
        <port polarity="Output" name="LCD_RW" />
        <port polarity="Output" name="SF_CE" />
        <port polarity="BiDirectional" name="LCD_D(3:0)" />
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
        <blockdef name="RotaryEnc">
            <timestamp>2008-8-28T17:16:17</timestamp>
            <rect width="256" x="64" y="-256" height="192" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
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
        <blockdef name="naszregister">
            <timestamp>2024-3-19T16:13:6</timestamp>
            <rect width="256" x="64" y="-384" height="384" />
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
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-128" y2="-96" x1="64" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="64" y1="-64" y2="-96" x1="64" />
        </blockdef>
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="32" y1="-64" y2="-64" x1="96" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="64" />
        </blockdef>
        <blockdef name="buf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
            <line x2="64" y1="-64" y2="0" x1="64" />
            <line x2="64" y1="-32" y2="-64" x1="128" />
            <line x2="128" y1="0" y2="-32" x1="64" />
        </blockdef>
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <block symbolname="LCD1x64" name="XLXI_1">
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="BTN_SOUTH" name="Reset" />
            <blockpin signalname="XLXN_1(63:0)" name="Line(63:0)" />
            <blockpin signalname="XLXN_55(15:0)" name="Blank(15:0)" />
            <blockpin signalname="LCD_D(3:0)" name="LCD_D(3:0)" />
            <blockpin signalname="LCD_E" name="LCD_E" />
            <blockpin signalname="LCD_RW" name="LCD_RW" />
            <blockpin signalname="LCD_RS" name="LCD_RS" />
            <blockpin signalname="SF_CE" name="SF_CE" />
        </block>
        <block symbolname="RotaryEnc" name="XLXI_2">
            <blockpin signalname="ROT_A" name="ROT_A" />
            <blockpin signalname="ROT_B" name="ROT_B" />
            <blockpin signalname="XLXN_15" name="RotL" />
            <blockpin signalname="XLXN_13" name="RotR" />
            <blockpin signalname="Clk_50MHz" name="Clk" />
        </block>
        <block symbolname="SDC_FileReader" name="XLXI_3">
            <blockpin signalname="SDC_MISO" name="SDC_MISO" />
            <blockpin signalname="XLXN_15" name="Start" />
            <blockpin signalname="FName(7:0)" name="FName(7:0)" />
            <blockpin signalname="BTN_SOUTH" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_9" name="DO_Pop" />
            <blockpin signalname="XLXN_13" name="Abort" />
            <blockpin signalname="SDC_MOSI" name="SDC_MOSI" />
            <blockpin signalname="SDC_SCK" name="SDC_SCK" />
            <blockpin signalname="SDC_SS" name="SDC_SS" />
            <blockpin signalname="LED(1:0)" name="Error(1:0)" />
            <blockpin signalname="XLXN_2(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_4" name="DO_Rdy" />
            <blockpin signalname="LED_7" name="Busy" />
            <blockpin signalname="FExt(1:0)" name="FExt(1:0)" />
            <blockpin signalname="Clk_50MHz" name="Clk_Sys" />
        </block>
        <block symbolname="naszregister" name="XLXI_4">
            <blockpin signalname="XLXN_4" name="DO_Rdy" />
            <blockpin signalname="LED_7" name="Busy" />
            <blockpin signalname="XLXN_15" name="Start" />
            <blockpin signalname="BTN_SOUTH" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_2(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_9" name="Pop" />
            <blockpin signalname="XLXN_1(63:0)" name="Line(63:0)" />
        </block>
        <block symbolname="gnd" name="XLXI_5">
            <blockpin signalname="FExt(0)" name="G" />
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
        <block symbolname="constant" name="XLXI_18">
            <attr value="FFFF" name="CValue">
                <trait delete="all:1 sym:0" />
                <trait editname="all:1 sch:0" />
                <trait valuetype="BitVector 32 Hexadecimal" />
            </attr>
            <blockpin signalname="XLXN_55(15:0)" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="624" y="912" name="XLXI_2" orien="R0">
        </instance>
        <instance x="2304" y="1056" name="XLXI_4" orien="R0">
        </instance>
        <instance x="2944" y="1312" name="XLXI_1" orien="R0">
        </instance>
        <branch name="XLXN_1(63:0)">
            <wire x2="2944" y1="1024" y2="1024" x1="2688" />
        </branch>
        <instance x="1504" y="992" name="XLXI_3" orien="R0">
        </instance>
        <branch name="XLXN_2(7:0)">
            <wire x2="2304" y1="1024" y2="1024" x1="1920" />
        </branch>
        <branch name="LED_7">
            <wire x2="2112" y1="1088" y2="1088" x1="1920" />
            <wire x2="2208" y1="1088" y2="1088" x1="2112" />
            <wire x2="2112" y1="768" y2="1088" x1="2112" />
            <wire x2="2304" y1="768" y2="768" x1="2112" />
        </branch>
        <branch name="XLXN_4">
            <wire x2="2096" y1="960" y2="960" x1="1920" />
            <wire x2="2096" y1="704" y2="960" x1="2096" />
            <wire x2="2304" y1="704" y2="704" x1="2096" />
        </branch>
        <branch name="Clk_50MHz">
            <wire x2="624" y1="816" y2="816" x1="544" />
            <wire x2="544" y1="816" y2="912" x1="544" />
            <wire x2="928" y1="912" y2="912" x1="544" />
            <wire x2="928" y1="912" y2="1280" x1="928" />
            <wire x2="1392" y1="1280" y2="1280" x1="928" />
            <wire x2="1440" y1="1280" y2="1280" x1="1392" />
            <wire x2="1920" y1="1280" y2="1280" x1="1440" />
            <wire x2="2160" y1="1280" y2="1280" x1="1920" />
            <wire x2="2944" y1="1280" y2="1280" x1="2160" />
            <wire x2="928" y1="1280" y2="1280" x1="784" />
            <wire x2="1504" y1="1088" y2="1088" x1="1392" />
            <wire x2="1392" y1="1088" y2="1152" x1="1392" />
            <wire x2="1392" y1="1152" y2="1280" x1="1392" />
            <wire x2="1504" y1="1152" y2="1152" x1="1392" />
            <wire x2="2160" y1="960" y2="1280" x1="2160" />
            <wire x2="2304" y1="960" y2="960" x1="2160" />
        </branch>
        <branch name="BTN_SOUTH">
            <wire x2="1296" y1="1216" y2="1216" x1="400" />
            <wire x2="2176" y1="1216" y2="1216" x1="1296" />
            <wire x2="2944" y1="1216" y2="1216" x1="2176" />
            <wire x2="1504" y1="1024" y2="1024" x1="1296" />
            <wire x2="1296" y1="1024" y2="1216" x1="1296" />
            <wire x2="2304" y1="896" y2="896" x1="2176" />
            <wire x2="2176" y1="896" y2="1216" x1="2176" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="2720" y1="560" y2="560" x1="1456" />
            <wire x2="2720" y1="560" y2="704" x1="2720" />
            <wire x2="1456" y1="560" y2="800" x1="1456" />
            <wire x2="1456" y1="800" y2="896" x1="1456" />
            <wire x2="1504" y1="896" y2="896" x1="1456" />
            <wire x2="2720" y1="704" y2="704" x1="2688" />
        </branch>
        <branch name="XLXN_13">
            <wire x2="1152" y1="752" y2="752" x1="1008" />
            <wire x2="1280" y1="752" y2="752" x1="1152" />
            <wire x2="1280" y1="752" y2="832" x1="1280" />
            <wire x2="1280" y1="832" y2="960" x1="1280" />
            <wire x2="1504" y1="960" y2="960" x1="1280" />
        </branch>
        <branch name="XLXN_15">
            <wire x2="1248" y1="688" y2="688" x1="1008" />
            <wire x2="1248" y1="688" y2="704" x1="1248" />
            <wire x2="1504" y1="704" y2="704" x1="1248" />
            <wire x2="1248" y1="640" y2="688" x1="1248" />
            <wire x2="2080" y1="640" y2="640" x1="1248" />
            <wire x2="2080" y1="640" y2="832" x1="2080" />
            <wire x2="2304" y1="832" y2="832" x1="2080" />
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
        <iomarker fontsize="28" x="2208" y="1088" name="LED_7" orien="R0" />
        <branch name="FExt(1:0)">
            <wire x2="640" y1="976" y2="1024" x1="640" />
            <wire x2="640" y1="1024" y2="1088" x1="640" />
            <wire x2="640" y1="1088" y2="1120" x1="640" />
            <wire x2="1344" y1="1120" y2="1120" x1="640" />
            <wire x2="1344" y1="832" y2="1120" x1="1344" />
            <wire x2="1504" y1="832" y2="832" x1="1344" />
        </branch>
        <iomarker fontsize="28" x="400" y="1216" name="BTN_SOUTH" orien="R180" />
        <iomarker fontsize="28" x="784" y="1280" name="Clk_50MHz" orien="R180" />
        <bustap x2="544" y1="1088" y2="1088" x1="640" />
        <bustap x2="544" y1="1024" y2="1024" x1="640" />
        <instance x="384" y="1024" name="XLXI_5" orien="R90" />
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
        <branch name="ROT_A">
            <wire x2="624" y1="688" y2="688" x1="560" />
        </branch>
        <branch name="ROT_B">
            <wire x2="624" y1="752" y2="752" x1="560" />
        </branch>
        <iomarker fontsize="28" x="560" y="688" name="ROT_A" orien="R180" />
        <iomarker fontsize="28" x="560" y="752" name="ROT_B" orien="R180" />
        <branch name="LCD_E">
            <wire x2="3392" y1="1024" y2="1024" x1="3360" />
        </branch>
        <iomarker fontsize="28" x="3392" y="1024" name="LCD_E" orien="R0" />
        <branch name="LCD_RS">
            <wire x2="3392" y1="1088" y2="1088" x1="3360" />
        </branch>
        <iomarker fontsize="28" x="3392" y="1088" name="LCD_RS" orien="R0" />
        <branch name="LCD_RW">
            <wire x2="3392" y1="1152" y2="1152" x1="3360" />
        </branch>
        <iomarker fontsize="28" x="3392" y="1152" name="LCD_RW" orien="R0" />
        <branch name="SF_CE">
            <wire x2="3392" y1="1280" y2="1280" x1="3360" />
        </branch>
        <iomarker fontsize="28" x="3392" y="1280" name="SF_CE" orien="R0" />
        <branch name="LCD_D(3:0)">
            <wire x2="3392" y1="1216" y2="1216" x1="3360" />
        </branch>
        <iomarker fontsize="28" x="3392" y="1216" name="LCD_D(3:0)" orien="R0" />
        <instance x="2752" y="1056" name="XLXI_18" orien="R0">
        </instance>
        <branch name="XLXN_55(15:0)">
            <wire x2="2944" y1="1088" y2="1088" x1="2896" />
        </branch>
    </sheet>
</drawing>