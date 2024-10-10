#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

//Orthodox
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(Bureaucrat& other) {
	std::cout << "\033[1;34mBureaucrat copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
	std::cout << "\033[1;34mBureaucrat copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other)
		this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {
	cout << "\033[1;31mBureaucrat destructor called.\033[0m" << endl;
}
//

int	Bureaucrat::Increment_grade() {
	if (--grade < 1)
		throw GradeTooHighException();
	std::cout << "Incrementing the grade." << std::endl;
	return grade;
}

int	Bureaucrat::Decrement_grade() {
	if (++grade > 150)
		throw GradeTooLowException();
	std::cout << "Decrementing the grade." << std::endl;
	return grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), grade(grade) {
	cout << name << " bureaucrat constructor called with " << grade << " grade." << endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "the grade is to high.";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "the grade is to low.";
}

std::string	Bureaucrat::getName() const {
	return Name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << "\033[35m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\033[0m";
	return out;
}