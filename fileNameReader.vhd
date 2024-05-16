----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:59:46 05/16/2024 
-- Design Name: 
-- Module Name:    fileNameReader - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity fileNameReader is
    Port ( DO : in  STD_LOGIC_VECTOR (7 downto 0);
           E0 : in  STD_LOGIC;
           F0 : in  STD_LOGIC;
           DO_Rdy : in  STD_LOGIC;
           FName : out  STD_LOGIC_VECTOR (7 downto 0));
end fileNameReader;

architecture Behavioral of fileNameReader is
	signal charBuffer : std_logic_vector(7 downto 0) := "00110000";
	
begin
	process1 : process(DO)
	begin
		-- 0 <= N <= 9
		if unsigned(DO) >= X"30" and unsigned(DO) < X"3A" then
			FName <= charBuffer;
		end if;
	end process process1;	

end Behavioral;

