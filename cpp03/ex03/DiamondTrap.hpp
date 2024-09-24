#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap
{
	private:
		std::string	Name;

	public:
		DiamondTrap();
		DiamondTrap(std::string Name);
		// DiamondTrap(DiamondTrap& other);
		~DiamondTrap();

		// DiamondTrap& operator=(DiamondTrap& other);
		void	whoAmI();

		using	ScavTrap::attack;
};


#endif