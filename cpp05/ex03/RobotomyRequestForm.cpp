#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;

//Orthodox
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Elf") {
	cout << "\033[1;32mRobotomyRequestForm default constructor called.\033[0m" << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other) : AForm(other), target(other.getTarget()) {
	cout << "\033[1;34mRobotomyRequestForm copy constructor called.\033[0m" << endl;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& other) {
	cout << "\033[1;34mRobotomyRequestForm copy assignment called.\033[0m" << endl;
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

void RobotomyRequestForm::execute(Bureaucrat& executor) const{
	AForm::execute(executor);
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	cout << "Bzzzzzzz... Vrrrrrrrr... *Drilling noises*\n";
	if ((std::rand() % 2) == 0)
		cout << target << " has been robotomized successfully!" << endl;
	else
		cout << "The robotomy of " << target << " failed." << endl;
}

