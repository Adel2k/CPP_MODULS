#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"
# include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();

		void	attack();

	private:
		std::string	name;
		Weapon&		weapon_type;
};



#endif