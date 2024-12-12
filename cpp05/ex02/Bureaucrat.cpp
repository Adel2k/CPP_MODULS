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
	cout << "Bureaucrat constructor with parametrs called." << endl;
	if (grade < 0)
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

void	Bureaucrat::signForm(AForm& form) {
	if (form.GetSign() == true)
		std::cout << Name << " signed " << form.GetName() << "." << std::endl;
	else {
		std::cout << Name << " couldn't sign " << form.GetName() << " because The grade is to low." << endl;
		throw GradeTooLowException();
	}
}

std::string	Bureaucrat::getName() const {
	return Name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return out;
}