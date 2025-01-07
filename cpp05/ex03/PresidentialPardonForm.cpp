#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;

//Orthodox
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Elf") {
	cout << "\033[1;32mPresidentialPardonForm default constructor called.\033[0m" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : AForm(other), target(other.getTarget()) {
	cout << "\033[1;34mPresidentialPardonForm copy constructor called.\033[0m" << endl;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other) {
	cout << "\033[1;34mPresidentialPardonForm copy assignment called.\033[0m" << endl;
	if (this != &other) {
		this->target = other.getTarget();
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	cout << "\033[1;31mPresidentialPardonForm destructor called.\033[0m" << endl;
}
//

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5), target(target) {
	cout << "\033[1;32mPresidentialPardonForm constructor with parameter called for " << target << ".\033[0m" << endl;

}

std::string PresidentialPardonForm::getTarget() const {
	return(target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	AForm::execute(executor);
	cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
