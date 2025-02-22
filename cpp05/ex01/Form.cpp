#include "Form.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

//Orthodox
Form::Form() : Name("No name"), sign_grade(0), execute_grade(0), sign(false) {
	if (sign_grade < 0 || execute_grade < 0)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw Form::GradeTooLowException();
	cout << "\033[1;32mForm default constructor called.\033[0m" << endl;
}

Form::Form(const Form& other) : sign_grade(other.GetSign_grade()), execute_grade(other.GetExecute_grade()), sign(false) {
	std::cout << "\033[1;34mForm copy constructor called.\033[0m" << std::endl;
	*this = other;
}

Form& Form::operator=(const Form& other) {
	std::cout << "\033[1;34mForm copy assignment called.\033[0m" << std::endl;
	if (this != &other) {
		this->sign = other.Get_ifSigned();
	}
	return *this;
}

Form::~Form() {
	cout << "\033[1;31mForm destructor called.\033[0m" << endl;
}
//

const char* Form::GradeTooHighException::what() const throw() {
	return "\033[1;33mForm:The grade is to high.\033[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\033[1;33mForm:The grade is to low.\033[0m";
}

Form::Form(const std::string& name, int sign_grade, int execute_grade) : Name(name), sign_grade(sign_grade), execute_grade(execute_grade) {
	cout << "\033[1;32mForm constructor with parametrs called.\033[0m" << endl;
	if (sign_grade < 0 || execute_grade < 0)
		throw Form::GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw Form::GradeTooLowException();
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

bool	Form::Get_ifSigned() const {
	return sign;
}

void	Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= GetSign_grade())
		sign = true;
	else
		throw Form::GradeTooLowException();
}



std::ostream&	operator<<(std::ostream& out, const Form& form) {
	if (form.Get_ifSigned() == false)
		out << form.GetName() << ", form sign grade is " << form.GetSign_grade() << ", execute grade is " << form.GetExecute_grade() << ", is not signed."<< endl;
	else
		out << form.GetName() << ", form sign grade is " << form.GetSign_grade() << ", execute grade is " << form.GetExecute_grade() << ", is signed." << endl;
	return out;
}