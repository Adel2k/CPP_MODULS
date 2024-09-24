#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"

class DiamondTrap : public FrafTrap , public ScavTrap
{
	private:
		/* data */
	public:
		DiamondTrap(/* args */);
		~DiamondTrap();
};


#endif