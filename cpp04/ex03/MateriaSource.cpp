# include "MateriaSource.hpp"

using std::cout;
using std::endl;

//Orthodox
MateriaSource::MateriaSource() {
	cout << "\033[1;32mMateriaSource default constructor called.\033[0m" << endl;
	for (int i = 0; i < 4; i++) {
		inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(MateriaSource& other) {
	std::cout << "\033[1;34mMateriaSource copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other) {
	std::cout << "\033[1;34mMateriaSource copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

MateriaSource::~MateriaSource() {
	cout << "\033[1;31mMateriaSource destructor called.\033[0m" << endl;
	for (int i = 0; i < 4; i++) {
		if (inventory[i]) {
			delete inventory[i];
		}
	}
}
//

void	MateriaSource::learnMateria(AMateria* other) {
	if (!other)
		return ;
	for (int i = 0; i < 4; i++){
		if (!inventory[i]) {
			inventory[i] = other;
			return ;
		}
	}
	
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (inventory[i] && inventory[i]->getType() == type)
			return (inventory[i]->clone());
	}
	return (NULL);
}