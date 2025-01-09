#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

//Orthodox
Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : Name(other.getName()), grade(other.getGrade()) {
	cout << "\033[1;34mBureaucrat copy constructor called.\033[0m" << endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	cout << "\033[1;34mBureaucrat copy assignment called.\033[0m" << endl;
	if (this != &other) {
		this->grade = other.getGrade();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	cout << "\033[1;31mBureaucrat destructor called.\033[0m" << endl;
}
//

int	Bureaucrat::Increment_grade() {
	if (--grade < 1)
		throw GradeTooHighException();
	cout << "Incrementing the grade." << endl;
	return grade;
}

int	Bureaucrat::Decrement_grade() {
	if (++grade > 150)
		throw GradeTooLowException();
	cout << "Decrementing the grade." << endl;
	return grade;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : Name(name), grade(grade) {
	cout << name << " bureaucrat constructor called with " << grade << " grade." << endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "\033[1;33mBureaucrat:The grade is to high.\033[0m";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "\033[1;33mBureaucrat:The grade is to low.\033[0m";
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