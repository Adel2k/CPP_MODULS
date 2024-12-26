# include "Cure.hpp"
# include "ICharacter.hpp"

using std::cout;
using std::endl;

//Orthodox
Cure::Cure() {
	cout << "\033[1;32mCure default constructor called.\033[0m" << endl;
	type = "cure";
}

Cure::Cure(const Cure& other) : AMateria(other) {
	std::cout << "\033[1;34mCure copy constructor called.\033[0m" << std::endl;
	*this = other;
}

Cure& Cure::operator=(const Cure& other) {
	std::cout << "\033[1;34mCure copy assignment called.\033[0m" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Cure::~Cure() {
	cout << "\033[1;31mCure destructor called.\033[0m" << endl;
}
//

AMateria* Cure::clone() const {
	AMateria* instance = new Cure;
	return (instance);
}

void	Cure::use(ICharacter& target) {
	cout << "* heals " << target.getName() << "’s wounds *" << endl;
}