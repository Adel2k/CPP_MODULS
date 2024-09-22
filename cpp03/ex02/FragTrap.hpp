#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string Name);
		FragTrap(FragTrap& other);
		~FragTrap();

		FragTrap&	operator=(FragTrap& other);
		void		highFivesGuys();
};


#endif