<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="XLXN_1(63:0)" />
        <signal name="XLXN_2(15:0)" />
        <signal name="Clk_50MHz" />
        <signal name="XLXN_4(7:0)" />
        <signal name="XLXN_5" />
        <signal name="XLXN_6" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="PS2_Clk" />
        <signal name="PS2_Data" />
        <signal name="XLXN_11(7:0)" />
        <signal name="BTN_WEST" />
        <signal name="BTN_EAST" />
        <signal name="SDC_MISO" />
        <signal name="SPI_MISO" />
        <signal name="SDC_MOSI" />
        <signal name="SDC_SS" />
        <signal name="SDC_SCK" />
        <signal name="SPI_MOSI" />
        <signal name="SPI_SCK" />
        <signal name="FPGA_INIT_B" />
        <signal name="AD_CONV" />
        <signal name="AMP_CS" />
        <signal name="SPI_SS_B" />
        <signal name="DAC_CLR" />
        <signal name="DAC_CS" />
        <signal name="SF_CE" />
        <signal name="LCD_D(3:0)" />
        <signal name="LCD_RW" />
        <signal name="LCD_RS" />
        <signal name="LCD_E" />
        <signal name="BTN_SOUTH" />
        <port polarity="Input" name="Clk_50MHz" />
        <port polarity="Input" name="PS2_Clk" />
        <port polarity="Input" name="PS2_Data" />
        <port polarity="Input" name="BTN_WEST" />
        <port polarity="Input" name="BTN_EAST" />
        <port polarity="Input" name="SDC_MISO" />
        <port polarity="Input" name="SPI_MISO" />
        <port polarity="Output" name="SDC_MOSI" />
        <port polarity="Output" name="SDC_SS" />
        <port polarity="Output" name="SDC_SCK" />
        <port polarity="Output" name="SPI_MOSI" />
        <port polarity="Output" name="SPI_SCK" />
        <port polarity="Output" name="FPGA_INIT_B" />
        <port polarity="Output" name="AD_CONV" />
        <port polarity="Output" name="AMP_CS" />
        <port polarity="Output" name="SPI_SS_B" />
        <port polarity="Output" name="DAC_CLR" />
        <port polarity="Output" name="DAC_CS" />
        <port polarity="Output" name="SF_CE" />
        <port polarity="BiDirectional" name="LCD_D(3:0)" />
        <port polarity="Output" name="LCD_RW" />
        <port polarity="Output" name="LCD_RS" />
        <port polarity="Output" name="LCD_E" />
        <port polarity="Input" name="BTN_SOUTH" />
        <blockdef name="WAV_reader">
            <timestamp>2024-5-16T12:3:28</timestamp>
            <rect width="320" x="64" y="-832" height="832" />
            <line x2="0" y1="-800" y2="-800" x1="64" />
            <line x2="0" y1="-672" y2="-672" x1="64" />
            <line x2="0" y1="-544" y2="-544" x1="64" />
            <line x2="0" y1="-416" y2="-416" x1="64" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="448" y1="-800" y2="-800" x1="384" />
            <line x2="448" y1="-736" y2="-736" x1="384" />
            <line x2="448" y1="-672" y2="-672" x1="384" />
            <rect width="64" x="384" y="-620" height="24" />
            <line x2="448" y1="-608" y2="-608" x1="384" />
            <line x2="448" y1="-544" y2="-544" x1="384" />
            <line x2="448" y1="-480" y2="-480" x1="384" />
            <line x2="448" y1="-416" y2="-416" x1="384" />
            <line x2="448" y1="-352" y2="-352" x1="384" />
            <line x2="448" y1="-288" y2="-288" x1="384" />
            <line x2="448" y1="-224" y2="-224" x1="384" />
            <line x2="448" y1="-160" y2="-160" x1="384" />
            <line x2="448" y1="-96" y2="-96" x1="384" />
            <rect width="64" x="384" y="-44" height="24" />
            <line x2="448" y1="-32" y2="-32" x1="384" />
        </blockdef>
        <blockdef name="LCD1x64">
            <timestamp>2024-3-21T11:18:4</timestamp>
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
        <blockdef name="constant">
            <timestamp>2006-1-1T10:10:10</timestamp>
            <rect width="112" x="0" y="0" height="64" />
            <line x2="112" y1="32" y2="32" x1="144" />
        </blockdef>
        <blockdef name="PS2_Kbd">
            <timestamp>2008-9-19T9:9:36</timestamp>
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
        </blockdef>
        <blockdef name="fileNameReader">
            <timestamp>2024-5-16T11:19:50</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-236" height="24" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
        </blockdef>
        <block symbolname="WAV_reader" name="XLXI_1">
            <blockpin signalname="SDC_MISO" name="SDC_MISO" />
            <blockpin signalname="BTN_EAST" name="Abort" />
            <blockpin signalname="BTN_SOUTH" name="Reset" />
            <blockpin signalname="SPI_MISO" name="SPI_MISO" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="BTN_WEST" name="Start" />
            <blockpin signalname="XLXN_11(7:0)" name="FName(7:0)" />
            <blockpin signalname="SDC_MOSI" name="SDC_MOSI" />
            <blockpin signalname="SDC_SS" name="SDC_SS" />
            <blockpin signalname="SDC_SCK" name="SDC_SCK" />
            <blockpin signalname="XLXN_1(63:0)" name="OutputLCD(63:0)" />
            <blockpin signalname="SPI_MOSI" name="SPI_MOSI" />
            <blockpin signalname="SPI_SCK" name="SPI_SCK" />
            <blockpin signalname="DAC_CS" name="DAC_CS" />
            <blockpin signalname="DAC_CLR" name="DAC_CLR" />
            <blockpin signalname="SPI_SS_B" name="SPI_SS_B" />
            <blockpin signalname="AMP_CS" name="AMP_CS" />
            <blockpin signalname="AD_CONV" name="AD_CONV" />
            <blockpin signalname="FPGA_INIT_B" name="FPGA_INIT_B" />
            <blockpin name="OutputLED(4:0)" />
        </block>
        <block symbolname="LCD1x64" name="XLXI_2">
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="BTN_SOUTH" name="Reset" />
            <blockpin signalname="XLXN_1(63:0)" name="Line(63:0)" />
            <blockpin signalname="XLXN_2(15:0)" name="Blank(15:0)" />
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
            <blockpin signalname="XLXN_2(15:0)" name="O" />
        </block>
        <block symbolname="PS2_Kbd" name="XLXI_19">
            <blockpin signalname="PS2_Clk" name="PS2_Clk" />
            <blockpin signalname="PS2_Data" name="PS2_Data" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_5" name="E0" />
            <blockpin signalname="XLXN_6" name="F0" />
            <blockpin signalname="XLXN_7" name="DO_Rdy" />
            <blockpin signalname="XLXN_4(7:0)" name="DO(7:0)" />
            <blockpin signalname="Clk_50MHz" name="Clk_Sys" />
        </block>
        <block symbolname="fileNameReader" name="XLXI_20">
            <blockpin signalname="XLXN_5" name="E0" />
            <blockpin signalname="XLXN_6" name="F0" />
            <blockpin signalname="XLXN_7" name="DO_Rdy" />
            <blockpin signalname="XLXN_4(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_11(7:0)" name="FName(7:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1792" y="1344" name="XLXI_1" orien="R0">
        </instance>
        <instance x="2544" y="832" name="XLXI_2" orien="R0">
        </instance>
        <branch name="XLXN_1(63:0)">
            <wire x2="2384" y1="736" y2="736" x1="2240" />
            <wire x2="2384" y1="544" y2="736" x1="2384" />
            <wire x2="2544" y1="544" y2="544" x1="2384" />
        </branch>
        <branch name="XLXN_2(15:0)">
            <wire x2="2544" y1="608" y2="608" x1="2512" />
        </branch>
        <instance x="2368" y="576" name="XLXI_18" orien="R0">
        </instance>
        <branch name="Clk_50MHz">
            <wire x2="304" y1="656" y2="656" x1="240" />
            <wire x2="240" y1="656" y2="720" x1="240" />
            <wire x2="240" y1="720" y2="816" x1="240" />
            <wire x2="592" y1="816" y2="816" x1="240" />
            <wire x2="592" y1="816" y2="1056" x1="592" />
            <wire x2="592" y1="1056" y2="1064" x1="592" />
            <wire x2="592" y1="1064" y2="1488" x1="592" />
            <wire x2="2544" y1="1488" y2="1488" x1="592" />
            <wire x2="1792" y1="1056" y2="1056" x1="592" />
            <wire x2="304" y1="720" y2="720" x1="240" />
            <wire x2="592" y1="1488" y2="1488" x1="368" />
            <wire x2="2544" y1="800" y2="800" x1="2464" />
            <wire x2="2464" y1="800" y2="912" x1="2464" />
            <wire x2="2544" y1="912" y2="912" x1="2464" />
            <wire x2="2544" y1="912" y2="1488" x1="2544" />
        </branch>
        <iomarker fontsize="28" x="368" y="1488" name="Clk_50MHz" orien="R180" />
        <instance x="304" y="752" name="XLXI_19" orien="R0">
        </instance>
        <instance x="976" y="752" name="XLXI_20" orien="R0">
        </instance>
        <branch name="XLXN_4(7:0)">
            <wire x2="832" y1="528" y2="528" x1="688" />
            <wire x2="832" y1="528" y2="720" x1="832" />
            <wire x2="976" y1="720" y2="720" x1="832" />
        </branch>
        <branch name="XLXN_5">
            <wire x2="848" y1="592" y2="592" x1="688" />
            <wire x2="848" y1="528" y2="592" x1="848" />
            <wire x2="976" y1="528" y2="528" x1="848" />
        </branch>
        <branch name="XLXN_6">
            <wire x2="864" y1="656" y2="656" x1="688" />
            <wire x2="864" y1="592" y2="656" x1="864" />
            <wire x2="976" y1="592" y2="592" x1="864" />
        </branch>
        <branch name="XLXN_7">
            <wire x2="752" y1="720" y2="720" x1="688" />
            <wire x2="752" y1="720" y2="800" x1="752" />
            <wire x2="928" y1="800" y2="800" x1="752" />
            <wire x2="928" y1="656" y2="800" x1="928" />
            <wire x2="976" y1="656" y2="656" x1="928" />
        </branch>
        <branch name="PS2_Clk">
            <wire x2="304" y1="528" y2="528" x1="272" />
        </branch>
        <iomarker fontsize="28" x="272" y="528" name="PS2_Clk" orien="R180" />
        <branch name="PS2_Data">
            <wire x2="304" y1="592" y2="592" x1="272" />
        </branch>
        <iomarker fontsize="28" x="272" y="592" name="PS2_Data" orien="R180" />
        <branch name="XLXN_11(7:0)">
            <wire x2="1568" y1="528" y2="528" x1="1360" />
            <wire x2="1568" y1="528" y2="1312" x1="1568" />
            <wire x2="1792" y1="1312" y2="1312" x1="1568" />
        </branch>
        <branch name="BTN_WEST">
            <wire x2="1792" y1="1184" y2="1184" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="1760" y="1184" name="BTN_WEST" orien="R180" />
        <branch name="BTN_EAST">
            <wire x2="1792" y1="672" y2="672" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="1760" y="672" name="BTN_EAST" orien="R180" />
        <branch name="SDC_MISO">
            <wire x2="1792" y1="544" y2="544" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="1760" y="544" name="SDC_MISO" orien="R180" />
        <branch name="SPI_MISO">
            <wire x2="1792" y1="928" y2="928" x1="1760" />
        </branch>
        <iomarker fontsize="28" x="1760" y="928" name="SPI_MISO" orien="R180" />
        <branch name="SDC_MOSI">
            <wire x2="2272" y1="544" y2="544" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="544" name="SDC_MOSI" orien="R0" />
        <branch name="SDC_SS">
            <wire x2="2272" y1="608" y2="608" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="608" name="SDC_SS" orien="R0" />
        <branch name="SDC_SCK">
            <wire x2="2272" y1="672" y2="672" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="672" name="SDC_SCK" orien="R0" />
        <branch name="SPI_MOSI">
            <wire x2="2272" y1="800" y2="800" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="800" name="SPI_MOSI" orien="R0" />
        <branch name="SPI_SCK">
            <wire x2="2272" y1="864" y2="864" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="864" name="SPI_SCK" orien="R0" />
        <branch name="FPGA_INIT_B">
            <wire x2="2272" y1="1248" y2="1248" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="1248" name="FPGA_INIT_B" orien="R0" />
        <branch name="AD_CONV">
            <wire x2="2272" y1="1184" y2="1184" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="1184" name="AD_CONV" orien="R0" />
        <branch name="AMP_CS">
            <wire x2="2272" y1="1120" y2="1120" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="1120" name="AMP_CS" orien="R0" />
        <branch name="SPI_SS_B">
            <wire x2="2272" y1="1056" y2="1056" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="1056" name="SPI_SS_B" orien="R0" />
        <branch name="DAC_CLR">
            <wire x2="2272" y1="992" y2="992" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="992" name="DAC_CLR" orien="R0" />
        <branch name="DAC_CS">
            <wire x2="2272" y1="928" y2="928" x1="2240" />
        </branch>
        <iomarker fontsize="28" x="2272" y="928" name="DAC_CS" orien="R0" />
        <branch name="SF_CE">
            <wire x2="2992" y1="800" y2="800" x1="2960" />
        </branch>
        <iomarker fontsize="28" x="2992" y="800" name="SF_CE" orien="R0" />
        <branch name="LCD_D(3:0)">
            <wire x2="2992" y1="736" y2="736" x1="2960" />
        </branch>
        <iomarker fontsize="28" x="2992" y="736" name="LCD_D(3:0)" orien="R0" />
        <branch name="LCD_RW">
            <wire x2="2992" y1="672" y2="672" x1="2960" />
        </branch>
        <iomarker fontsize="28" x="2992" y="672" name="LCD_RW" orien="R0" />
        <branch name="LCD_RS">
            <wire x2="2992" y1="608" y2="608" x1="2960" />
        </branch>
        <iomarker fontsize="28" x="2992" y="608" name="LCD_RS" orien="R0" />
        <branch name="LCD_E">
            <wire x2="2992" y1="544" y2="544" x1="2960" />
        </branch>
        <iomarker fontsize="28" x="2992" y="544" name="LCD_E" orien="R0" />
        <branch name="BTN_SOUTH">
            <wire x2="1600" y1="800" y2="800" x1="1536" />
            <wire x2="1792" y1="800" y2="800" x1="1600" />
            <wire x2="1600" y1="800" y2="832" x1="1600" />
            <wire x2="1600" y1="832" y2="832" x1="1584" />
            <wire x2="1584" y1="832" y2="1408" x1="1584" />
            <wire x2="2496" y1="1408" y2="1408" x1="1584" />
            <wire x2="2496" y1="736" y2="1408" x1="2496" />
            <wire x2="2544" y1="736" y2="736" x1="2496" />
        </branch>
        <iomarker fontsize="28" x="1536" y="800" name="BTN_SOUTH" orien="R180" />
    </sheet>
</drawing>