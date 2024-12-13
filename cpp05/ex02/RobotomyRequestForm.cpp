#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

//Orthodox
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Elf") {
	cout << "\033[1;32mRobotomyRequestForm default constructor called.\033[0m" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other), target(other.getTarget()) {
	std::cout << "\033[1;34mRobotomyRequestForm copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other) {
	std::cout << "\033[1;34mRobotomyRequestForm copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other) {
		this->target = other.getTarget();
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	cout << "\033[1;31mRobotomyRequestForm destructor called.\033[0m" << endl;
}
//

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target(target) {
	cout << "\033[1;32mRobotomyRequestForm constructor with parameter called for " << target << ".\033[0m" << endl;

}

std::string RobotomyRequestForm::getTarget() const {
	return(target);
}

void RobotomyRequestForm::execute(Bureaucrat& executer) const{
	if (!this->Get_ifSigned()) {
		throw AForm::FormNotSignedException();
	}

	if (executer.getGrade() <= this->GetExecute_grade()) {
		cout << "Bzzzzzzz... Vrrrrrrrr... *Drilling noises*\n";
		cout << this->getTarget() << " has been robotomized successfully successfully 50% of the time!\n";
	}
	else {
		throw RobotomyRequestForm::RobotomyFailed();
	}
}

const char* RobotomyRequestForm::RobotomyFailed::what() const throw() {
	return "\033[1;33mRobotomyReaquestForm:The robotomy has failed.\033[0m\n";
}