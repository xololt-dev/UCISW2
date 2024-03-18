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
			  Busy : in STD_LOGIC;
			  Start : in STD_LOGIC;
           Reset : in  STD_LOGIC;
           Clk_50MHz : in  STD_LOGIC;
			  Pop : out std_logic;
           Line : out  STD_LOGIC_VECTOR (63 downto 0));
end naszregister;

architecture Behavioral of naszregister is
	type stateType is (IDLE, START_READ, CANAL, SAMPLE, BITS, PLAY, PLAY_END);
	signal state, nextState : stateType;
	
	signal incremented : std_logic := '0';
	-- signal inside : std_logic_vector (2815 downto 0); -- 44B * 8b
	signal counter : unsigned (63 downto 0) := (others => '0');-- integer := 0; --std_logic_vector(5 downto 0);
	
begin
	process1 : process(Clk_50MHz)
	begin
		if rising_edge(Clk_50MHz) then
			if Reset = '1' then
				state <= IDLE;
				counter <= (others => '0');
				incremented <= '0';
			else
				if Start = '1' then
					state <= nextState;						
					if DO_Rdy = '1' and incremented = '0' then
						counter <= counter + 1;
						incremented <= '1';
					else
						incremented <= '0';
					end if;
				end if;
			end if;
		end if;
	end process process1;
	
	process2 : process(state, DO, DO_Rdy, Busy)
	begin
	nextState <= state;
	
	case state is
		when IDLE =>
			if Busy = '1' then
				nextState <= START_READ;
			end if;
		
		when START_READ =>
			-- if DO_Rdy = '1' then
				if counter >= X"15" then
					nextState <= CANAL;
				else
					nextState <= START_READ;
				end if;
			-- potrzeba else?
			-- end if;
			
		when CANAL =>
			if counter = X"17" then -- DO_Rdy = '1' and 
				nextState <= SAMPLE;
			end if;
			
		when SAMPLE =>
			if counter = X"21" then
				nextState <= BITS;
			end if;
			
		when BITS =>
			if counter = X"2B" then
				nextState <= PLAY;
			end if;
			
		when PLAY =>
			if Busy = '0' then
				nextState <= PLAY_END;
			end if;
			
		when OTHERS =>
			nextState <= State;
			
	end case;
	end process process2;
		
	process3 : process(state, DO, DO_Rdy)
	
	begin
		if DO_Rdy = '1' then
			if state = CANAL then
				-- LITTLE ENDIAN!!!!!!!111
				if counter = X"16" then
					Line(55 downto 48) <= DO(7 downto 0);
				else
					Line(63 downto 56) <= DO(7 downto 0);
				end if;
			elsif state = SAMPLE then
				if counter = X"18" then
					Line(23 downto 16) <= DO(7 downto 0);
				elsif counter = X"19" then
					Line(31 downto 24) <= DO(7 downto 0);
				elsif counter = X"1A" then
					Line(39 downto 32) <= DO(7 downto 0);
				elsif counter = X"1B" then
					Line(47 downto 40) <= DO(7 downto 0);
				end if;
			elsif state = BITS then
				if counter = X"22" then
					Line(7 downto 0) <= DO(7 downto 0);
				elsif counter = X"23" then
					Line(15 downto 8) <= DO(7 downto 0);
				end if;
			end if;
		end if;
	end process process3;
	
	Pop <= '1' when (state /= IDLE) and DO_Rdy = '1'
      else '0';
	
end Behavioral;

