# include "AMateria.hpp"

using std::cout;
using std::endl;

//Orthodox
AMateria::AMateria() {
	cout << "\033[1;32mAMateria default constructor called.\033[0m" << endl;
}

AMateria::AMateria(AMateria& other) {
	std::cout << "\033[1;34mAMateria copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

AMateria& AMateria::operator=(AMateria& other) {
	std::cout << "\033[1;34mAMateria copy assignment constructor called.\033[0m" << std::endl;
	if (this == &other)
		return *this;
	return *this;
}

AMateria::~AMateria() {
	cout << "\033[1;31mAMateria destructor called.\033[0m" << endl;
}
//

AMateria::AMateria(std::string const& type) {
	cout << "\033[1;32mAMateria constructor with parametrs called.\033[0m" << endl;
	this->type = type;
}

void	AMateria::use(ICharacter& target) {
	cout << "\033[1;35mAMateria use called.\033[0m" << endl;
}

std::string const & AMateria::getType() const {
	return (type);
}


