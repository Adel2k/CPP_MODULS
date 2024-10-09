#include "Form.hpp"

using std::cout;
using std::endl;

//Orthodox
Form::Form() : Name("No name"), sign_grade(0), execute_grade(0), sign(false) {
	if (sign_grade < 0)
		throw GradeTooHighException();
	if (sign_grade > 150)
		throw GradeTooLowException();
	if (execute_grade < 0)
		throw GradeTooHighException();
	if (execute_grade > 150)
		throw GradeTooLowException();
	cout << "\033[1;32mForm default constructor called.\033[0m" << endl;
}

Form::Form(Form& other) : sign_grade(other.GetSign_grade()), execute_grade(other.GetExecute_grade()), sign(false) {
	std::cout << "\033[1;34mForm copy constructor called.\033[0m" << std::endl;
	if (this == &other)
		return ;
	*this = other;
}

Form& Form::operator=(Form& other) {
	std::cout << "\033[1;34mForm copy assignment constructor called.\033[0m" << std::endl;
	if (this != &other) {
		this->sign = other.GetSign();
	}
	return *this;
}

Form::~Form() {
	cout << "\033[1;31mForm destructor called.\033[0m" << endl;
}
//

const char* Form::GradeTooHighException::what() const throw() {
	return "Too high";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Too Low";
}

Form::Form(std::string name, int sign_grade, int execute_grade) : Name(name), sign_grade(sign_grade), execute_grade(execute_grade) {
	cout << "\033[1;32mForm constructor with parametrs called.\033[0m" << endl;

}

std::string	Form::GetName() const {
	return Name;
}

int	Form::GetExecute_grade() const {
	return execute_grade;
}

int	Form::GetSign_grade() const {
	return sign_grade;
}

bool	Form::GetSign() const {
	return sign;
}



std::ostream&	operator<<(std::ostream& out, Form& form) {
	out << form.GetName();
	return out;
}