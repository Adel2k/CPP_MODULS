#ifndef HUMANB_HPP
# define HUMANB_HPP


# include "Weapon.hpp"
# include "HumanB.hpp"
# include <iostream>

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon_type;

	public:
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon& weapon);
};

#endif