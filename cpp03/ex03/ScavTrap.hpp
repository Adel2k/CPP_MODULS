#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string Name);
		ScavTrap(ScavTrap& other);
		~ScavTrap();

		ScavTrap& operator=(ScavTrap& other);
		void guardGate();
		void attack(const std::string& target);
};


#endif