#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <unordered_map>

class Harl{
	public:
		Harl();
		void complain(std::string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
		void (Harl::*functions[4])(void);

		std::string	levels[4];
};
# endif