#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
	{
		Weapon club = Weapon("AK-47");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("bazooka");
		bob.attack();
	}
	{
		Weapon club = Weapon("sword");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("katana");
		jim.attack();
	}
	return 0;
}

