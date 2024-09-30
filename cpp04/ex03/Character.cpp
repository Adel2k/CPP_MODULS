# include "Character.hpp"

using std::cout;
using std::endl;

//Orthodox
Character::Character() : Name("No name"), quantity(0) {
	cout << "\033[1;32mCharacter default constructor called.\033[0m" << endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
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
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
	this->Name = Name;
}

const std::string& Character::getName() const{
	return (Name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] == NULL) {
			inventory[i] = m;
			cout << "done" << endl;
			return ;
		}
	}
}

void	Character::unequip(int idx) {
	if (inventory[idx])
		inventory[idx] = NULL;
	else
		cout << "It doesnt exist" << endl;
}

void Character::use(int idx, ICharacter& target) {
	if (inventory[idx] != NULL) {
		inventory[idx]->use(target);
		cout << "Slot " << idx << "is using " << target.getName() << endl;
	}
	else
		cout << "It doesnt exist" << endl;
}