#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;


//Orthodox
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), target("Elf") {
	cout << "\033[1;32mShrubberyCreationForm default constructor called.\033[0m" << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), target(other.getTarget()) {
	cout << "\033[1;34mShrubberyCreationForm copy constructor called.\033[0m" << endl;
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	cout << "\033[1;34mShrubberyCreationForm copy assignment called.\033[0m" << endl;
	if (this != &other) {
		this->target = other.getTarget();
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	cout << "\033[1;31mShrubberyCreationForm destructor called.\033[0m" << endl;
}
//

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), target(target) {
	cout << "\033[1;32mShrubberyCreationForm constructor with parameter called for " << target << ".\033[0m" << endl;

}
std::string ShrubberyCreationForm::getTarget() const {
	return(target);
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	AForm::execute(executor);
	if (executor.getGrade() <= this->GetExecute_grade()) {
		std::string s = getTarget() + "_shrubbery";
		std::ofstream outfile(s.c_str());
		if (!outfile.is_open()) {
			std::cerr << "Error:can not open the file" << endl;
			throw AForm::NoFile();
		}
		outfile << "         *\n";
		outfile << "        /_\\\n";
		outfile << "       /___\\\n";
		outfile << "      /_____\\\n";
		outfile << "     /_______\\\n";
		outfile << "    /_________\\\n";
		outfile << "         |||\n";
		outfile << "         |||\n";
		outfile << "      🎁🎁🎁🎁\n";

		outfile.close();
	}
}
