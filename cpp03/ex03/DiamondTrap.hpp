#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string	Name;

	public:
		DiamondTrap();
		DiamondTrap(std::string Name);
		DiamondTrap(DiamondTrap& other);
		DiamondTrap(int no_use);
		~DiamondTrap();

		DiamondTrap& operator=(DiamondTrap& other);
		void	whoAmI();

		// using	ScavTrap::attack;
};


#endif