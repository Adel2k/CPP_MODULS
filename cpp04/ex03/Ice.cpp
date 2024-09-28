# include "Ice.hpp"

using std::cout;
using std::endl;

//Orthodox
Ice::Ice() {
	cout << "\033[1;32mIce default constructor called.\033[0m" << endl;
	type = "ice";
}

Ice::Ice(Ice& other) : AMateria(other) {
	std::cout << "\033[1;34mIce copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Ice& Ice::operator=(Ice& other) {
	std::cout << "\033[1;34mIce copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
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
	cout << "* shoots an ice bolt at " << target.getName() << "*" << endl;
}