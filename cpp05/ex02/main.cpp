#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

using std::cout;
using std::endl;


int main() {
	cout << endl << "\033[1;34m################# TESTING ###################\033[0m" << endl << endl;
	{
		std::string	form = "AWS";
		std::string	Name = "bglik";
		std::string target = "burger";
		int			Grade = 1; //High enough for sign end execute

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade to sign Shrubbery Creation -------> \033[0m" ;
			Bureaucrat				highRanker(Name, Grade);
			ShrubberyCreationForm	shrubForm(target);

			cout << endl << "\033[35mRequired grade for sign the form is 145 and for execute is 137. \033[0m" << endl;
			shrubForm.beSigned(highRanker);
			try {
				cout << endl;
				highRanker.signForm(shrubForm);
				cout << endl;

			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				shrubForm.execute(highRanker);
			}
			catch(const ShrubberyCreationForm::FormNotSignedException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				cout << endl;
				highRanker.executeForm(shrubForm);
				cout << endl;
			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	form = "AWS";
		std::string	Name = "Duck";
		std::string target = "fish";
		int			Grade = 149; 

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade to sign Shrubbery Creation -------> \033[0m" ;
			Bureaucrat				highRanker(Name, Grade);
			ShrubberyCreationForm	shrubForm(target);

			cout << endl << "\033[35mRequired grade for sign the form is 145 and for execute is 137. \033[0m" << endl;
			shrubForm.beSigned(highRanker);
			try {
				cout << endl;
				highRanker.signForm(shrubForm);
				cout << endl;

			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				shrubForm.execute(highRanker);
			}
			catch(const ShrubberyCreationForm::FormNotSignedException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				cout << endl;
				highRanker.executeForm(shrubForm);
				cout << endl;
			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	form = "AWS";
		std::string	Name = "Bglik";
		std::string target = "qyabab";
		int			Grade = 30;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade to sign Presidential Pardon -------> \033[0m" ;
			Bureaucrat				highRanker(Name, Grade);
			PresidentialPardonForm	shrubForm(target);

			cout << endl << "\033[35mRequired grade for sign the form is 25 and for execute is 5. \033[0m" << endl;
			shrubForm.beSigned(highRanker);
			try {
				cout << endl;
				highRanker.signForm(shrubForm);
				cout << endl;

			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				shrubForm.execute(highRanker);
			}
			catch(const PresidentialPardonForm::FormNotSignedException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				cout << endl;
				highRanker.executeForm(shrubForm);
				cout << endl;
			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	form = "AWS";
		std::string	Name = "Bglik";
		std::string target = "pizza";
		int			Grade = 19;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade to sign Robotomy REquest -------> \033[0m" ;
			Bureaucrat				highRanker(Name, Grade);
			RobotomyRequestForm	shrubForm(target);

			cout << endl << "\033[35mRequired grade for sign the form is 72 and for execute is 45. \033[0m" << endl;
			shrubForm.beSigned(highRanker);
			try {
				cout << endl;
				highRanker.signForm(shrubForm);
				cout << endl;

			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				shrubForm.execute(highRanker);
			}
			catch(const RobotomyRequestForm::FormNotSignedException& e) {
				std::cerr << e.what() << '\n';
			}
			try {
				cout << endl;
				highRanker.executeForm(shrubForm);
				cout << endl;
			}
			catch(const Bureaucrat::GradeTooLowException& e) {
				std::cerr << e.what() << '\n';
			}
		}
		catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << '\n';
		}
	}
}
