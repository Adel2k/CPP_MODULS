#include "RobotmyRequestForm.hpp"

using std::cout;
using std::endl;

//Orthodox
RobotmyRequestForm::RobotmyRequestForm() : AForm("RobotmyRequestForm", 72, 45), target("Elf") {
	cout << "\033[1;32mRobotmyRequestForm default constructor called.\033[0m" << endl;
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm& other) : AForm(other), target(other.getTarget()) {
	std::cout << "\033[1;34mRobotmyRequestForm copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

RobotmyRequestForm& RobotmyRequestForm::operator=(RobotmyRequestForm& other) {
	std::cout << "\033[1;34mRobotmyRequestForm copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other) {
		this->target = other.getTarget();
	}
	return *this;
}

RobotmyRequestForm::~RobotmyRequestForm() {
	cout << "\033[1;31mRobotmyRequestForm destructor called.\033[0m" << endl;
}
//

RobotmyRequestForm::RobotmyRequestForm(std::string target) : AForm("RobotmyRequestForm", 72, 45), target(target) {
	cout << "\033[1;32mRobotmyRequestForm constructor with parameter called for " << target << ".\033[0m" << endl;

}

std::string RobotmyRequestForm::getTarget() const {
	return(target);
}

void RobotmyRequestForm::execute(Bureaucrat& executer) const{
	if (!this->Get_ifSigned()) {
		throw AForm::FormNotSignedException();
	}

	if (executer.getGrade() <= this->GetExecute_grade()) {
		cout << "Bzzzzzzz... Vrrrrrrrr... *Drilling noises*\n";
		cout << this->getTarget() << " has been robotomized successfully successfully 50% of the time!\n";
	}
	else {
		throw RobotmyRequestForm::RobotomyFailed();
	}
}

const char* RobotmyRequestForm::RobotomyFailed::what() const throw() {
	return "\033[1;33mRobotomyReaquestForm:The robotomy has failed.\033[0m\n";
}