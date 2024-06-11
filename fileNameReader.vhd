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
			  Read_Busy : in STD_LOGIC;
			  Reset : in STD_LOGIC;
			  Clk : in STD_LOGIC;
           FName : out  STD_LOGIC_VECTOR (7 downto 0);
			  Name_Rdy : out STD_LOGIC := '0');
end fileNameReader;

architecture Behavioral of fileNameReader is
	signal charBuffer : std_logic_vector(7 downto 0) := "00110000";
	
begin
	process1 : process(Clk, DO, DO_Rdy)
	begin
		if rising_edge(Clk) then
			-- 0 <= N <= 9
			if Reset = '1' then
				charBuffer <= "00110000";
				Name_Rdy <= '0';
			else 
				if Read_Busy = '1' then
					Name_Rdy <= '1';
				else
					-- DO >= X"30" and DO < X"3A" and
					if DO_Rdy = '1' then
					-- "0011"
						case DO is
							when X"45" =>
								charBuffer <= X"30";
							when X"16" =>
								charBuffer <= X"31";
							when X"1E" =>
								charBuffer <= X"32";
							when X"26" =>
								charBuffer <= X"33";
							when X"25" =>
								charBuffer <= X"34";
							when X"2E" =>
								charBuffer <= X"35";
							when X"36" =>
								charBuffer <= X"36";
							when X"3D" =>
								charBuffer <= X"37";
							when X"3E" =>
								charBuffer <= X"38";
							when X"46" =>
								charBuffer <= X"39";
							when others =>
								charBuffer <= "00110000";
						end case;
						--charBuffer <= "0011" & DO(3 downto 0);
						Name_Rdy <= '1';
					else
						Name_Rdy <= '0';
					end if;
				end if;
			end if;
		end if;
	end process process1;

	FName <= charBuffer;

end Behavioral;

