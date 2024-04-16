--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:14:13 03/18/2024
-- Design Name:   
-- Module Name:   /home/xololt/repos/abc/registerTest.vhd
-- Project Name:  OdtwarzaczWAV
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: naszregister
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY registerTest IS
END registerTest;
 
ARCHITECTURE behavior OF registerTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT naszregister
    PORT(
         DO : IN  std_logic_vector(7 downto 0);
         DO_Rdy : IN  std_logic;
			Busy : IN std_logic;
			DAC_Busy : in std_logic;
			Start : IN std_logic;
         Reset : IN  std_logic;
         Clk_50MHz : IN  std_logic;
			Pop : OUT std_logic;
			MonoStereo : out std_logic;
			EightSixteen : out std_logic;
			SRate_Tick : out std_logic;
			Cmd : out std_logic_vector (3 downto 0);
			Addr : out std_logic_vector (3 downto 0);
			Data : out std_logic_vector (11 downto 0);
         Line : OUT  std_logic_vector(63 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal DO : std_logic_vector(7 downto 0) := (others => '0');
   signal DO_Rdy : std_logic := '0';
	signal Busy : std_logic := '0';
	signal DAC_Busy : std_logic := '0';
   signal Start : std_logic := '1';
   signal Reset : std_logic := '0';
   signal Clk_50MHz : std_logic := '0';

 	--Outputs
	signal Pop : std_logic := '0';
	signal MonoStereo : std_logic := '0';
	signal EightSixteen : std_logic := '0';
	signal SRate_Tick : std_logic := '0';
	signal Cmd : std_logic_vector (3 downto 0);
	signal Addr : std_logic_vector (3 downto 0);
	signal Data : std_logic_vector (11 downto 0);	
   signal Line : std_logic_vector(63 downto 0);

   -- Clock period definitions
   constant Clk_50MHz_period : time := 20 ns; -- 10 ns
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: naszregister PORT MAP (
          DO => DO,
          DO_Rdy => DO_Rdy,
			 Busy => Busy,
			 DAC_Busy => DAC_Busy,
			 Pop => Pop,
          Start => Start,
          Reset => Reset,
          Clk_50MHz => Clk_50MHz,
			 MonoStereo => MonoStereo,
			 EightSixteen => EightSixteen,
			 SRate_Tick => SRate_Tick,
			 Cmd => Cmd,
			 Addr => Addr,
			 Data => Data,
          Line => Line
        );

   -- Clock process definitions
   Clk_50MHz_process :process
   begin
		Clk_50MHz <= '0';
		wait for Clk_50MHz_period/2;
		Clk_50MHz <= '1';
		wait for Clk_50MHz_period/2;
   end process;
 

	-- Operation of the SDCFileReader (signals with FR_ prefix)
   stim_proc: process

      type t_FileOfCharacter is file of character;
      file fTheFile : t_FileOfCharacter is in "./bengier.wav";--"./pcm0808m.wav";-- "./bengier.wav"; -- "C:\XilinxPrj\UCISW2-main\bengier.wav";-- "D:/1.wav";
      variable byte : character;

   begin
      wait until rising_edge( Clk_50MHz ) and Start = '1';
      
      Busy <= '1';
      
      while not endfile( fTheFile ) loop
        wait for Clk_50MHz_period * 3.1;    -- represents SDCard read delay
        read( fTheFile, byte );
        DO <= std_logic_vector( to_unsigned( character'pos( byte ) , 8 ) );
        DO_Rdy <= '1';
        wait until rising_edge( Clk_50MHz ) and Pop = '1';
        DO_Rdy <= '0';
      end loop;

      Busy <= '0';
      wait; -- forever <3
   end process;

END;
