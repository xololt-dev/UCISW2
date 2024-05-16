<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="spartan3e" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="SDC_MOSI" />
        <signal name="SDC_SS" />
        <signal name="SDC_MISO" />
        <signal name="SDC_SCK" />
        <signal name="FExt(1:0)" />
        <signal name="FExt(1)" />
        <signal name="FExt(0)" />
        <signal name="Abort" />
        <signal name="Reset" />
        <signal name="XLXN_59" />
        <signal name="OutputLCD(63:0)" />
        <signal name="XLXN_84" />
        <signal name="XLXN_85(7:0)" />
        <signal name="XLXN_87" />
        <signal name="XLXN_88(3:0)" />
        <signal name="XLXN_89(3:0)" />
        <signal name="XLXN_90(11:0)" />
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
        <signal name="XLXN_104" />
        <signal name="FPGA_INIT_B" />
        <signal name="XLXN_106" />
        <signal name="Clk_50MHz" />
        <signal name="Start" />
        <signal name="FName(7:0)" />
        <signal name="OutputLED(2)" />
        <signal name="OutputLED(3)" />
        <signal name="OutputLED(4)" />
        <signal name="OutputLED(4:0)" />
        <signal name="OutputLED(1:0)" />
        <port polarity="Output" name="SDC_MOSI" />
        <port polarity="Output" name="SDC_SS" />
        <port polarity="Input" name="SDC_MISO" />
        <port polarity="Output" name="SDC_SCK" />
        <port polarity="Input" name="Abort" />
        <port polarity="Input" name="Reset" />
        <port polarity="Output" name="OutputLCD(63:0)" />
        <port polarity="Input" name="SPI_MISO" />
        <port polarity="Output" name="SPI_MOSI" />
        <port polarity="Output" name="SPI_SCK" />
        <port polarity="Output" name="DAC_CS" />
        <port polarity="Output" name="DAC_CLR" />
        <port polarity="Output" name="SPI_SS_B" />
        <port polarity="Output" name="AMP_CS" />
        <port polarity="Output" name="AD_CONV" />
        <port polarity="Output" name="FPGA_INIT_B" />
        <port polarity="Input" name="Clk_50MHz" />
        <port polarity="Input" name="Start" />
        <port polarity="Input" name="FName(7:0)" />
        <port polarity="Output" name="OutputLED(4:0)" />
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
        <blockdef name="vcc">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-64" x1="64" />
            <line x2="64" y1="0" y2="-32" x1="64" />
            <line x2="32" y1="-64" y2="-64" x1="96" />
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
            <blockpin signalname="Start" name="Start" />
            <blockpin signalname="FName(7:0)" name="FName(7:0)" />
            <blockpin signalname="Reset" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_87" name="DO_Pop" />
            <blockpin signalname="Abort" name="Abort" />
            <blockpin signalname="SDC_MOSI" name="SDC_MOSI" />
            <blockpin signalname="SDC_SCK" name="SDC_SCK" />
            <blockpin signalname="SDC_SS" name="SDC_SS" />
            <blockpin signalname="OutputLED(1:0)" name="Error(1:0)" />
            <blockpin signalname="XLXN_85(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_84" name="DO_Rdy" />
            <blockpin signalname="XLXN_106" name="Busy" />
            <blockpin signalname="FExt(1:0)" name="FExt(1:0)" />
            <blockpin signalname="Clk_50MHz" name="Clk_Sys" />
        </block>
        <block symbolname="vcc" name="XLXI_6">
            <blockpin signalname="FExt(1)" name="P" />
        </block>
        <block symbolname="vcc" name="XLXI_19">
            <blockpin signalname="FExt(0)" name="P" />
        </block>
        <block symbolname="DACWrite" name="XLXI_21">
            <blockpin signalname="Reset" name="Reset" />
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
            <blockpin signalname="Start" name="Start" />
            <blockpin signalname="Reset" name="Reset" />
            <blockpin signalname="Clk_50MHz" name="Clk_50MHz" />
            <blockpin signalname="XLXN_85(7:0)" name="DO(7:0)" />
            <blockpin signalname="XLXN_87" name="Pop" />
            <blockpin signalname="OutputLED(2)" name="MonoStereo" />
            <blockpin signalname="OutputLED(3)" name="EightSixteen" />
            <blockpin signalname="XLXN_93" name="SRate_Tick" />
            <blockpin signalname="XLXN_88(3:0)" name="Cmd(3:0)" />
            <blockpin signalname="XLXN_89(3:0)" name="Addr(3:0)" />
            <blockpin signalname="XLXN_90(11:0)" name="Data(11:0)" />
            <blockpin signalname="OutputLCD(63:0)" name="Line(63:0)" />
            <blockpin signalname="OutputLED(4)" name="Work" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5440" height="3520">
        <instance x="1504" y="992" name="XLXI_3" orien="R0">
        </instance>
        <branch name="SDC_MOSI">
            <wire x2="1968" y1="768" y2="768" x1="1920" />
            <wire x2="1968" y1="512" y2="768" x1="1968" />
        </branch>
        <branch name="SDC_SS">
            <wire x2="2128" y1="896" y2="896" x1="1920" />
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
        <branch name="Abort">
            <wire x2="1056" y1="752" y2="752" x1="560" />
            <wire x2="1056" y1="752" y2="960" x1="1056" />
            <wire x2="1504" y1="960" y2="960" x1="1056" />
        </branch>
        <iomarker fontsize="28" x="560" y="752" name="Abort" orien="R180" />
        <instance x="512" y="1152" name="XLXI_19" orien="R270" />
        <branch name="Reset">
            <wire x2="288" y1="1376" y2="1376" x1="256" />
            <wire x2="672" y1="1376" y2="1376" x1="288" />
            <wire x2="1088" y1="1376" y2="1376" x1="672" />
            <wire x2="2416" y1="1376" y2="1376" x1="1088" />
            <wire x2="1088" y1="1024" y2="1376" x1="1088" />
            <wire x2="1504" y1="1024" y2="1024" x1="1088" />
            <wire x2="2736" y1="400" y2="400" x1="2416" />
            <wire x2="2416" y1="400" y2="1184" x1="2416" />
            <wire x2="2416" y1="1184" y2="1376" x1="2416" />
            <wire x2="3568" y1="1184" y2="1184" x1="2416" />
            <wire x2="3680" y1="784" y2="784" x1="3568" />
            <wire x2="3568" y1="784" y2="1184" x1="3568" />
        </branch>
        <iomarker fontsize="28" x="256" y="1376" name="Reset" orien="R180" />
        <branch name="OutputLCD(63:0)">
            <wire x2="3440" y1="528" y2="528" x1="3120" />
            <wire x2="3440" y1="528" y2="1088" x1="3440" />
            <wire x2="3696" y1="1088" y2="1088" x1="3440" />
        </branch>
        <instance x="3680" y="752" name="XLXI_21" orien="R0">
        </instance>
        <instance x="2736" y="560" name="XLXI_24" orien="R0">
        </instance>
        <branch name="XLXN_84">
            <wire x2="1984" y1="960" y2="960" x1="1920" />
            <wire x2="2224" y1="912" y2="912" x1="1984" />
            <wire x2="1984" y1="912" y2="960" x1="1984" />
            <wire x2="2736" y1="208" y2="208" x1="2224" />
            <wire x2="2224" y1="208" y2="912" x1="2224" />
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
        <branch name="Clk_50MHz">
            <wire x2="928" y1="1280" y2="1280" x1="784" />
            <wire x2="1392" y1="1280" y2="1280" x1="928" />
            <wire x2="2160" y1="1280" y2="1280" x1="1392" />
            <wire x2="3632" y1="1280" y2="1280" x1="2160" />
            <wire x2="1504" y1="1088" y2="1088" x1="1392" />
            <wire x2="1392" y1="1088" y2="1152" x1="1392" />
            <wire x2="1392" y1="1152" y2="1280" x1="1392" />
            <wire x2="1504" y1="1152" y2="1152" x1="1392" />
            <wire x2="2496" y1="960" y2="960" x1="2160" />
            <wire x2="2160" y1="960" y2="1280" x1="2160" />
            <wire x2="2496" y1="464" y2="960" x1="2496" />
            <wire x2="2736" y1="464" y2="464" x1="2496" />
            <wire x2="3632" y1="848" y2="912" x1="3632" />
            <wire x2="3680" y1="912" y2="912" x1="3632" />
            <wire x2="3632" y1="912" y2="1280" x1="3632" />
            <wire x2="3680" y1="848" y2="848" x1="3632" />
        </branch>
        <branch name="Start">
            <wire x2="832" y1="704" y2="704" x1="544" />
            <wire x2="1504" y1="704" y2="704" x1="832" />
            <wire x2="832" y1="592" y2="704" x1="832" />
            <wire x2="2080" y1="592" y2="592" x1="832" />
            <wire x2="2080" y1="336" y2="592" x1="2080" />
            <wire x2="2736" y1="336" y2="336" x1="2080" />
        </branch>
        <branch name="FName(7:0)">
            <wire x2="1504" y1="768" y2="768" x1="1472" />
        </branch>
        <iomarker fontsize="28" x="1472" y="768" name="FName(7:0)" orien="R180" />
        <iomarker fontsize="28" x="3696" y="1088" name="OutputLCD(63:0)" orien="R0" />
        <iomarker fontsize="28" x="3696" y="1152" name="OutputLED(4:0)" orien="R0" />
        <iomarker fontsize="28" x="544" y="704" name="Start" orien="R180" />
        <bustap x2="3168" y1="592" y2="592" x1="3264" />
        <bustap x2="3168" y1="656" y2="656" x1="3264" />
        <bustap x2="3168" y1="1040" y2="1040" x1="3264" />
        <branch name="OutputLED(2)">
            <wire x2="3168" y1="592" y2="592" x1="3120" />
        </branch>
        <branch name="OutputLED(3)">
            <wire x2="3168" y1="656" y2="656" x1="3120" />
        </branch>
        <branch name="OutputLED(4)">
            <wire x2="3168" y1="1040" y2="1040" x1="3120" />
        </branch>
        <branch name="OutputLED(4:0)">
            <wire x2="3280" y1="592" y2="592" x1="3264" />
            <wire x2="3280" y1="592" y2="656" x1="3280" />
            <wire x2="3280" y1="656" y2="1040" x1="3280" />
            <wire x2="3280" y1="1040" y2="1136" x1="3280" />
            <wire x2="3280" y1="1136" y2="1152" x1="3280" />
            <wire x2="3696" y1="1152" y2="1152" x1="3280" />
            <wire x2="3280" y1="656" y2="656" x1="3264" />
            <wire x2="3280" y1="1040" y2="1040" x1="3264" />
        </branch>
        <bustap x2="3184" y1="1136" y2="1136" x1="3280" />
        <branch name="OutputLED(1:0)">
            <wire x2="3168" y1="1152" y2="1152" x1="1920" />
            <wire x2="3184" y1="1136" y2="1136" x1="3168" />
            <wire x2="3168" y1="1136" y2="1152" x1="3168" />
        </branch>
    </sheet>
</drawing>