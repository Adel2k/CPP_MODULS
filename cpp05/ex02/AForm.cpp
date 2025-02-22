#include "AForm.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

//Orthodox
AForm::AForm() : Name("No name"), sign_grade(0), execute_grade(0), sign(false) {
	if (sign_grade < 0 || execute_grade < 0)
		throw GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
	cout << "\033[1;32mAForm default constructor called.\033[0m" << endl;
}

AForm::AForm(const AForm& other) : sign_grade(other.GetSign_grade()), execute_grade(other.GetExecute_grade()), sign(false) {
	std::cout << "\033[1;34mAForm copy constructor called.\033[0m" << std::endl;
	*this = other;
}

AForm& AForm::operator=(const AForm& other) {
	std::cout << "\033[1;34mAForm copy assignment called.\033[0m" << std::endl;
	if (this != &other) {
		this->sign = other.Get_ifSigned();
	}
	return *this;
}

AForm::~AForm() {
	cout << "\033[1;31mAForm destructor called.\033[0m" << endl;
}

//

AForm::AForm(const std::string& name, int sign_grade, int execute_grade) : Name(name), sign_grade(sign_grade), execute_grade(execute_grade) {
	cout << "\033[1;32mAForm constructor with parametrs called.\033[0m" << endl;
	if (sign_grade < 0 || execute_grade < 0)
		throw GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
}

std::string	AForm::GetName() const {
	return Name;
}

int	AForm::GetExecute_grade() const {
	return execute_grade;
}

int	AForm::GetSign_grade() const {
	return sign_grade;
}

bool	AForm::Get_ifSigned() const {
	return sign;
}

void	AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= GetSign_grade())
		sign = true;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(const Bureaucrat& executor) const {
	if (sign == false)
		throw FormNotSignedException();
	if (executor.getGrade() > execute_grade)
		throw GradeTooLowException();
}

//

const char* AForm::GradeTooHighException::what() const throw() {
	return "\033[1;33mAForm:The grade is to high.\033[0m";
}

const char* AForm::GradeTooLowException::what() const throw() {
	return "\033[1;33mAForm:The grade is to low.\033[0m";
}

const char* AForm::NoFile::what() const throw() {
	return "\033[1;33mAForm:Can not open the file.\033[0m";
}

const char* AForm::FormNotSignedException::what() const throw() {
	return "\033[1;33mAForm:The form havent been signed.\033[0m";
}

std::ostream&	operator<<(std::ostream& out, const AForm& form) {
	if (form.Get_ifSigned() == false)
		out << form.GetName() << ", form sign grade is " << form.GetSign_grade() << ", execute grade is " << form.GetExecute_grade() << ", is not signed."<< endl;
	else
		out << form.GetName() << ", form sign grade is " << form.GetSign_grade() << ", execute grade is " << form.GetExecute_grade() << ", is signed." << endl;
	return out;
}