<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500xl" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
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
        <block symbolname="LCD1x64" name="XLXI_1">
            <blockpin name="Clk_50MHz" />
            <blockpin name="Reset" />
            <blockpin name="Line(63:0)" />
            <blockpin name="Blank(15:0)" />
            <blockpin name="LCD_D(3:0)" />
            <blockpin name="LCD_E" />
            <blockpin name="LCD_RW" />
            <blockpin name="LCD_RS" />
            <blockpin name="SF_CE" />
        </block>
        <block symbolname="RotaryEnc" name="XLXI_2">
            <blockpin name="ROT_A" />
            <blockpin name="ROT_B" />
            <blockpin name="RotL" />
            <blockpin name="RotR" />
            <blockpin name="Clk" />
        </block>
        <block symbolname="SDC_FileReader" name="XLXI_3">
            <blockpin name="SDC_MISO" />
            <blockpin name="Start" />
            <blockpin name="FName(7:0)" />
            <blockpin name="Reset" />
            <blockpin name="Clk_50MHz" />
            <blockpin name="DO_Pop" />
            <blockpin name="Abort" />
            <blockpin name="SDC_MOSI" />
            <blockpin name="SDC_SCK" />
            <blockpin name="SDC_SS" />
            <blockpin name="Error(1:0)" />
            <blockpin name="DO(7:0)" />
            <blockpin name="DO_Rdy" />
            <blockpin name="Busy" />
            <blockpin name="FExt(1:0)" />
            <blockpin name="Clk_Sys" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2032" y="1984" name="XLXI_1" orien="R0">
        </instance>
        <instance x="624" y="912" name="XLXI_2" orien="R0">
        </instance>
        <instance x="1952" y="704" name="XLXI_3" orien="R0">
        </instance>
    </sheet>
</drawing>