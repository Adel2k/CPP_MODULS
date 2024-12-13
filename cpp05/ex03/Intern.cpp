# include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;

//Orthodox
Intern::Intern() {
	cout << "\033[1;32mIntern default constructor called.\033[0m" << endl;
}

Intern::Intern(Intern& other) {
	std::cout << "\033[1;34mIntern copy constructor called.\033[0m" << std::endl;
	*this = other;
}

Intern& Intern::operator=(Intern& other) {
	std::cout << "\033[1;34mIntern copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other)
		return *this;
	return *this;
}

Intern::~Intern() {
	cout << "\033[1;31mIntern destructor called.\033[0m" << endl;
}
//

AForm*	Intern::makeForm(std::string Form, std::string Target) const {
	int			i = 0;
	std::string arr[] = {"presidential pardon", "robotomy request", "shrubbery creation", "NULL"};
	
	while (Form != arr[i] && arr[i] != "NULL")
		i++;
	switch (i)
	{
		case (0):
			return (new PresidentialPardonForm(Target));
		case (1):
			return (new RobotomyRequestForm(Target));
		case (2):
			return (new ShrubberyCreationForm(Target));
		default:
			cout << "Intern can't made " + Form + "." << endl;
			cout << "The form types are: " + arr[0] + " , " + arr[1] + " , " + arr[2] + "." << endl;
			return (NULL); 
	}
}