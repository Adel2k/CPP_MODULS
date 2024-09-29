# include "MateriaSource.hpp"

using std::cout;
using std::endl;

//Orthodox
Character::Character() : Name("No name"), quantity(0) {
	cout << "\033[1;32mCharacter default constructor called.\033[0m" << endl;
	for (int i = 0; i < 4; i++) {
		iventory[i] = NULL;
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

void	MateriaSource::learnMateria(AMateria*) {

}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	
}