#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

//Orthodox
Bureaucrat::Bureaucrat() : Name("No name"), grade(0) {
	if (grade < 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	cout << "\033[1;32mBureaucrat default constructor called.\033[0m" << endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& other) {
	std::cout << "\033[1;34mBureaucrat copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& other) {
	std::cout << "\033[1;34mBureaucrat copy assignment constructor called.\033[0m" << std::endl;
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
	if (--grade < 0)
		throw GradeTooHighException();
	return grade;
}

int	Bureaucrat::Decrement_grade() {
	if (++grade > 150)
		throw GradeTooLowException();
	return grade;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : Name(name), grade(grade) {
	cout << "\033[1;32mBureaucrat constructor with parametrs called.\033[0m" << endl;
	if (grade < 0)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Too High";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Too Low";
}

void	Bureaucrat::signForm(Form& form) {
	if (form.GetSign() == true)
		std::cout << Name << " signed " << form.GetName() << std::endl;
	else
		std::cout << Name << " couldnt sign " << form.GetName() << " because " << std::endl;
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