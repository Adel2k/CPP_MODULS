#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
# include "Intern.hpp"

using std::cout;
using std::endl;


int main() {
	cout << endl << "\033[1;34m################# TESTING ###################\033[0m" << endl << endl;
	{
		std::string	Name = "bglik";
		int			Grade = 1;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade to sign -------> \033[0m" ;
			Intern dog;
			AForm *form;
			Bureaucrat buro(Name, Grade);

			form = dog.makeForm("shrubbery creation", "Elfik");
			form->beSigned(buro);
			try {
				cout << endl;
				buro.signForm(*form);
				cout << endl;

			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				form->execute(buro);
			}
			catch(const ShrubberyCreationForm::FormNotSignedException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				cout << endl;
				buro.executeForm(*form);
				cout << endl;
			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	
	return 0;
}
