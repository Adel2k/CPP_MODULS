# include "Character.hpp"

using std::cout;
using std::endl;

//Orthodox
Character::Character() : quantity(0) {
	cout << "\033[1;32mCharacter default constructor called.\033[0m" << endl;
}

Character::Character(Character& other) {
	std::cout << "\033[1;34mCharacter copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Character& Character::operator=(Character& other) {
	std::cout << "\033[1;34mCharacter copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

Character::~Character() {
	cout << "\033[1;31mCharacter destructor called.\033[0m" << endl;
}
//

Character::Character(std::string Name) : quantity(0) {
	cout << "\033[1;32mCharacter constructor with parametrs called.\033[0m" << endl;
	this->Name = Name;
}

const std::string& Character::getName() const{
	cout << "\033[1;35mCharacter getName called.\033[0m" << endl;
	return (Name);
}

// void	Character::equip(AMateria* m) {
// 	if (slots)

// }