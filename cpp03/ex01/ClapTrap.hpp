#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	Name;
		int			Hit_point;
		int			Energy_point;
		int			Attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap& other);
		ClapTrap& operator=(ClapTrap& other);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
};

#endif