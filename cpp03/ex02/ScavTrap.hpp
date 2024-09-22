#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		std::string	Name;
		int			Hit_point;
		int			Energy_point;
		int			Attack_damage;

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