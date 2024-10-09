# include "Cure.hpp"
# include "ICharacter.hpp"

using std::cout;
using std::endl;

//Orthodox
Cure::Cure() {
	cout << "\033[1;32mCure default constructor called.\033[0m" << endl;
	type = "cure";
}

Cure::Cure(Cure& other) : AMateria(other) {
	std::cout << "\033[1;34mCure copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Cure& Cure::operator=(Cure& other) {
	std::cout << "\033[1;34mCure copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
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