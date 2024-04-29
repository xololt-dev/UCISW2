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
			  DAC_Busy : in STD_LOGIC;
			  Start : in STD_LOGIC;
           Reset : in  STD_LOGIC;
           Clk_50MHz : in  STD_LOGIC;
			  Pop : out std_logic;
			  Work : out std_logic := '0'; 
			  MonoStereo : out std_logic;
			  EightSixteen : out std_logic;
			  SRate_Tick : out std_logic := '0';
			  Cmd : out std_logic_vector (3 downto 0) := (others => '0');
			  Addr : out std_logic_vector (3 downto 0) := (others => '0');
			  Data : out std_logic_vector (11 downto 0) := (others => '0');
           Line : out  STD_LOGIC_VECTOR (63 downto 0) := (others => '0'));
end naszregister;

architecture Behavioral of naszregister is
	-- potrzeba ekstra stanu/signalu dla DAC?
	type stateType is (IDLE, START_READ, CANAL, SAMPLE, BITS, DATA_SIZE, 
		LOAD, LOADED, PLAY, PLAY_END);
	signal state, nextState : stateType;
	
	type wavReadStateType is (IDLE, LEFT, LEFT_EXT, RIGHT, RIGHT_EXT, DONE);
	signal readState, nextReadState : wavReadStateType;
	
	signal incremented : std_logic := '0';
	signal counter : unsigned (63 downto 0) := (others => '0');

	signal sixteen : std_logic := '0';
	signal conversion : unsigned (15 downto 0) := (others => '0');
	signal stereo : std_logic := '0';
	signal freq : std_logic_vector (31 downto 0) := (others => '0');
	signal freqCounter : unsigned (63 downto 0) := (others => '0');
	signal data_size_vec : std_logic_vector (31 downto 0) := (others => '0');
	signal data_counter : unsigned (31 downto 0) := (others => '0');
	
begin
	process1 : process(Clk_50MHz)
	begin
		if rising_edge(Clk_50MHz) then
			if Reset = '1' then
				state <= IDLE;
				readState <= IDLE;
				counter <= (others => '0');
				incremented <= '0';
			else
				if Start = '1' then
					state <= nextState;
					readState <= nextReadState;
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
	
	process5 : process(Clk_50MHz, state, freqCounter, Reset)

	begin
		if rising_edge(Clk_50MHz) then
			if Reset = '1' or state = PLAY then
				freqCounter <= (others => '0');
			elsif state = LOADED or state = LOAD then
				freqCounter <= freqCounter + 1;
			end if;
		end if;
	end process process5;
	
	process2 : process(Clk_50MHz, state, DO, DO_Rdy, Busy, counter, incremented, freqCounter, data_counter)
	begin
		--if rising_edge(Clk_50MHz) then
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
					if counter = X"17" then
						nextState <= SAMPLE;
					end if;
					
				when SAMPLE =>
					if counter = X"21" then
						nextState <= BITS;
					end if;
					
				when BITS =>
					if counter = X"27" then
						nextState <= DATA_SIZE;
					end if;
					
				when DATA_SIZE =>
					if counter = X"2C" then
						nextState <= LOAD;
					end if;
				
				when LOAD =>
					if readState = DONE then -- if DO_Rdy = '1' then
						nextState <= LOADED;
						--if stereo = '0' and sixteen = '0' then
							--nextState <= LOADED;
						--elsif stereo = '0' and sixteen = '1' and readState = LEFT then
							--nextState <= LOADED;
						--elsif stereo = '1' and sixteen = '0' and readState = LEFT then
							--nextState <= LOADED;
						--elsif stereo = '1' and sixteen = '1' and readState = RIGHT then
							--nextState <= LOADED;
						--end if;
					--elsif incremented = '1' then
						--nextState <= LOADED;
					elsif Busy = '0' then
						nextState <= PLAY_END;
					else
						nextState <= LOAD;
					end if;

				when LOADED =>
					-- TODO w zalenoci od mono/stereo 8/16b freq counter zmieni?
					-- 8KHz X"186A"
					-- 11.025KHz X"11B7"
					-- 22.05KHz X"8DB"
					-- 44.1KHz X"46D"
					-- 48KHz X"411"
					if freqCounter >= X"186A" and freq = X"00001F40" then
						nextState <= PLAY;
					elsif freqCounter >= X"11B7" and freq = X"00002B11" then
						nextState <= PLAY;
					elsif freqCounter >= X"8DB" and freq = X"00005622" then
						nextState <= PLAY;
					elsif freqCounter >= X"46D" and freq = X"0000AC44" then
						nextState <= PLAY;
					elsif freqCounter >= X"411" and freq = X"0000BB80" then
						nextState <= PLAY;
					else
						nextState <= LOADED;
					end if;

				when PLAY =>
					if Busy = '0' or (data_counter >= unsigned(data_size_vec)) then
						nextState <= PLAY_END;
					else
						nextState <= LOAD;
					end if;
					
				when PLAY_END =>
					nextState <= IDLE;

			end case;
		--end if;
	
	end process process2;
	
	process6 : process(Clk_50Mhz, DO_Rdy, readState, DAC_Busy)
	begin
		-- if od state ?
		if rising_edge(Clk_50MHz) and DO_Rdy = '1' and DAC_Busy = '0' then
			nextReadState <= readState;
			
			-- mono 8b . LEFT
			-- mono 16b . LEFT, LEFT_EXT
			-- stereo 8b . LEFT, RIGHT
			-- stereo 16b . LEFT, LEFT_EXT, RIGHT, RIGHT_EXT
			
			case readState is
				when IDLE => 
					if state = LOAD then 
						nextReadState <= LEFT;
					end if;
					
				when LEFT =>
					if sixteen = '1' then
						nextReadState <= LEFT_EXT;
					elsif stereo = '0' then
						nextReadState <= DONE;
					else
						nextReadState <= RIGHT;
					end if;
				
				when LEFT_EXT =>
					if stereo = '1' then
						nextReadState <= RIGHT;
					else
						nextReadState <= DONE;
					end if;
					
				when RIGHT =>
					if sixteen = '1' then
						nextReadState <= RIGHT_EXT;
					else
						nextReadState <= DONE;
					end if;
					
				when RIGHT_EXT =>
					nextReadState <= DONE; --LEFT;

				when DONE =>
					if state = LOADED then
						nextReadState <= IDLE;
					end if;
					
			end case;
			
		end if;
	
	end process process6;

	process3 : process(Clk_50MHz, state, DO, DO_Rdy, counter, stereo)

	begin
		if rising_edge(Clk_50MHz) then
			if DO_Rdy = '1' then
				if state = CANAL then
					-- LITTLE ENDIAN!!!!!!!111
					if counter = X"16" then
						Line(55 downto 48) <= DO(7 downto 0);
						if DO(0) = '0' then
							stereo <= '1';
						end if;
					else
						Line(63 downto 56) <= DO(7 downto 0);
					end if;

				elsif state = SAMPLE then
					if counter = X"18" then
						Line(23 downto 16) <= DO(7 downto 0);
						freq(7 downto 0) <= DO(7 downto 0);
					elsif counter = X"19" then
						Line(31 downto 24) <= DO(7 downto 0);
						freq(15 downto 8) <= DO(7 downto 0);
					elsif counter = X"1A" then
						Line(39 downto 32) <= DO(7 downto 0);
						freq(23 downto 16) <= DO(7 downto 0);
					elsif counter = X"1B" then
						Line(47 downto 40) <= DO(7 downto 0);
						freq(31 downto 24) <= DO(7 downto 0);
					end if;

				elsif state = BITS then
					if counter = X"22" then
						Line(7 downto 0) <= DO(7 downto 0);
						if DO = "00010000" then
							sixteen <= '1';
						end if;
					elsif counter = X"23" then
						Line(15 downto 8) <= DO(7 downto 0);
					end if;

				elsif state = DATA_SIZE then				
					if counter = X"28" then
						data_size_vec(7 downto 0) <= DO(7 downto 0);
					elsif counter = X"29" then
						data_size_vec(15 downto 8) <= DO(7 downto 0);
					elsif counter = X"2A" then
						data_size_vec(23 downto 16) <= DO(7 downto 0);
					elsif counter = X"2B" then
						data_size_vec(31 downto 24) <= DO(7 downto 0);
					end if;
					
				elsif state /= START_READ then
					-- changeState <= '1';
				end if;

			else
				if state = IDLE then
					Line <= (others => '0');
					freq <= (others => '0');
					data_size_vec <= (others => '0');
					stereo <= '0';
					sixteen <= '0';
				end if;
			end if;
		end if;
	end process process3;
	
	process4 : process(Clk_50MHz, state, nextState, DO_Rdy)

	begin
		if rising_edge(Clk_50MHz) then
			if DO_Rdy = '1' then
				if state = LOAD then
					-- 8b - TODO: z 16b
					
					-- mono 8b -> DO(7 downto 0) & 0000
					-- mono 16b -> DO(7 downto 0) & DO(7 downto 4)
					-- stereo 8b -> DO(7 downto 0) & 0000
					-- stereo 16b -> DO(7 downto 0) & DO(7 downto 4)
					
					-- 16b jest uint!
					if sixteen = '1' then
						if readState = LEFT_EXT or readState = RIGHT_EXT then 
							if DO(7) = '1' then
								Data(11 downto 0) <= std_logic_vector(to_unsigned(to_integer(unsigned(DO)) + to_integer(conversion) + 4096, 12));
							else 
								Data(11 downto 4) <= DO(7 downto 0);
							end if;
						elsif readState = LEFT or readState = RIGHT then
							Data(3 downto 0) <= DO(7 downto 4);
							conversion <= conversion + unsigned(DO(7 downto 4));
						end if;
					else
						Data(11 downto 0) <= DO(7 downto 0) & "0000";
					end if;
					
					if readState /= IDLE and readState /= DONE then
						data_counter <= data_counter + 1;
					end if;
					
				elsif state = LOADED then
					conversion <= (others => '0');
				elsif state = IDLE then
					Data <= (others => '0');
					data_counter <= (others => '0');
				end if;				
			end if;
		end if;
	end process process4;
	
	process7 : process(Clk_50MHz, state)
	begin
		if rising_edge(Clk_50MHz) then
			if state = LOAD or state = PLAY then
				-- TODO Stereo ?
				-- C (lewe) = 0010, D (prawe) = 0011
				
				-- MONO:
				if (readState = LEFT or readState = LEFT_EXT) then
					Cmd <= "0011";
					Addr <= "0010";
				-- STEREO:
				else -- if (readState = RIGHT or readState = RIGHT_EXT) then
					Cmd <= "0010";
					Addr <= "0011";
				end if;
			end if;
		end if;
		
	end process process7;

	-- Czy przy data nie za szybko pop
	-- Pop <= '1' when (state /= IDLE and state /= LOADED and state /= PLAY) and DO_Rdy = '1'
		
	Pop <= '1' when (state = START_READ or state = CANAL or state = SAMPLE or state = BITS or state = DATA_SIZE or (state = LOAD and (readState /= IDLE and readState /= DONE))) and DO_Rdy = '1'
		else '0';

	SRate_Tick <= '1' when state = PLAY 
		else '0';
		
	Work <= '1' when state /= IDLE
		else '0';

	MonoStereo <= stereo;
	EightSixteen <= sixteen;
	
end Behavioral;

