----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:15:16 03/07/2024 
-- Design Name: 
-- Module Name:    register - Behavioral 
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

entity naszregister is
    Port ( DO : in  STD_LOGIC_VECTOR (7 downto 0);
           DO_Rdy : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           Clk_50MHz : in  STD_LOGIC;
           Line : out  STD_LOGIC_VECTOR (63 downto 0));
end naszregister;

architecture Behavioral of naszregister is
	signal inside : std_logic_vector (2815 downto 0); -- 44B * 8b
	signal readBool : std_logic;
	signal counter : integer := 0; --std_logic_vector(5 downto 0);
	-- signal int : integer;
	
begin
	process1 : process(Clk_50MHz)
	begin
		if rising_edge(Clk_50MHz) then
			if Reset = '1' then
				readBool <= '0';
				counter <= 0; -- (others => '0');
				inside <= (others => '0');
			else
				readBool <= '1';
				counter <= counter + 1;
			end if;
		end if;
	end process process1;
	
	process2 : process(readBool, DO, DO_Rdy)
		variable channels : integer;
		variable sampleRate : integer;
		-- variable sampleRate_vector : std_logic_vector(15 downto 0);
		variable bitsPerSample : integer;
	begin
		if readBool <= '1' and counter <= 44 then
			inside(((counter - 1) * 8 + 7) downto (counter - 1) * 0) <= DO(7 downto 0); 
		end if;
		-- if counter = X"17" then -- channels						counter = X"16" or
			-- save to vector and shift
			-- inside(7 downto 0) <= DO(7 downto 0);
		-- elsif counter >= X"18" and counter < X"1C" then -- sampleRate
			-- save to vector and shift
			--for i in 1 to 4 loop
				--inside(7+i*8 downto 8*i) <= DO(7 downto 0); -- itd			
			--end loop;
		--elsif counter = X"22" or counter = X"23" then -- bitsPerSample
			-- save to vector and shift
		-- end if;
	-- end process process2;
	
	-- process3 : process(counter)
		
	-- begin
		if counter > 44 then
			-- TODO: we need to calc it and display properly
			channels := to_integer(unsigned(inside(23*8+7 downto 22*8)));
			sampleRate := to_integer(unsigned(inside(27*8+7 downto 24*8)));
			bitsPerSample := to_integer(unsigned(inside(35*8+7 downto 34*8)));
			-- std_logic_vector(to_unsigned(channels, 4);
			
			Line(63 downto 60) <= std_logic_vector(to_unsigned(channels, 4)); --inside(23*8 + 7 downto 22*8) & 
			Line(59 downto 56) <= X"0";
			Line(55 downto 40) <= std_logic_vector(to_unsigned(sampleRate, 16)); -- inside(27*8 + 7 downto 24*8) & 
			Line(39 downto 36) <= X"0";
			Line(35 downto 28) <= std_logic_vector(to_unsigned(bitsPerSample, 8)); -- inside(35*8 + 7 downto 34*8) &
			Line(27 downto 0) <= (others => '0');
		end if;
	end process process2;
	
end Behavioral;

