# include "Ice.hpp"
# include "ICharacter.hpp"


using std::cout;
using std::endl;

//Orthodox
Ice::Ice() {
	cout << "\033[1;32mIce default constructor called.\033[0m" << endl;
	type = "ice";
}

Ice::Ice(const Ice& other) : AMateria(other) {
	std::cout << "\033[1;34mIce copy constructor called.\033[0m" << std::endl;
	*this = other;
}

Ice& Ice::operator=(const Ice& other) {
	std::cout << "\033[1;34mIce copy assignment called.\033[0m" << std::endl;
	if (this != &other)
		AMateria::operator=(other);
	return *this;
}

Ice::~Ice() {
	cout << "\033[1;31mIce destructor called.\033[0m" << endl;
}
//

AMateria* Ice::clone() const {
	AMateria* instance = new Ice;
	return (instance);
}

void	Ice::use(ICharacter& target) {
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}