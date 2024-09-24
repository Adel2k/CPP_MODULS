#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	private:
		std::string	Name;

	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap& other);
		~FragTrap();

		FragTrap&	operator=(FragTrap& other);
		void		highFivesGuys();
};


#endif