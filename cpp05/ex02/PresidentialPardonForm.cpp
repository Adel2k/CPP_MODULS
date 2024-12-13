#include "PresidentialPardonForm.hpp"

using std::cout;
using std::endl;

//Orthodox
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("Elf") {
	cout << "\033[1;32mPresidentialPardonForm default constructor called.\033[0m" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other) : AForm(other), target(other.getTarget()) {
	std::cout << "\033[1;34mPresidentialPardonForm copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& other) {
	std::cout << "\033[1;34mPresidentialPardonForm copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other) {
		this->target = other.getTarget();
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	cout << "\033[1;31mPresidentialPardonForm destructor called.\033[0m" << endl;
}
//

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 72, 45), target(target) {
	cout << "\033[1;32mPresidentialPardonForm constructor with parameter called for " << target << ".\033[0m" << endl;

}

std::string PresidentialPardonForm::getTarget() const {
	return(target);
}

void PresidentialPardonForm::execute(Bureaucrat& executer) const {
	if (!this->Get_ifSigned()) {
		throw AForm::FormNotSignedException();
	}

	if (executer.getGrade() <= this->GetExecute_grade()) {
		cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
	}
}
