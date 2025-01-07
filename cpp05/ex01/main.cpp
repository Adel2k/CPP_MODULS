#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout;
using std::endl;

int main () {

	cout << endl << "\033[1;34m################# TESTING ###################\033[0m" << endl << endl;
	{
		std::string form = "AWS";
		std::string	Name = "Bob";
		int			Grade = 100;
		int			S_Grade = 20;
		int			E_Grade = 10;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat	b(Name, Grade);
			Form		a(form, S_Grade, E_Grade);

			std::cout << b << std::endl;
			a.beSigned(b);
			b.signForm(a);
			cout << a;
		}
		catch(std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string form = "CCNA";
		std::string	Name = "Potato";
		int			Grade = 10;
		int			S_Grade = 20;
		int			E_Grade = 10;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat	b(Name, Grade);
			Form		a(form, S_Grade, E_Grade);

			std::cout << b << std::endl;
			a.beSigned(b);
			try {
				b.signForm(a);
				cout << a;
			}
			catch(std::exception& e) {
			std::cerr << e.what() << '\n';
			}
		}
		catch(std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string form = "AWS";
		std::string	Name = "Pinvgvin";
		int			Grade = 20;
		int			S_Grade = 20;
		int			E_Grade = 10;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat	b(Name, Grade);
			Form		a(form, S_Grade, E_Grade);

			std::cout << b << std::endl;
			a.beSigned(b);
			try {
				b.signForm(a);
				cout << a;
			}
			catch(std::exception& e) {
			std::cerr << e.what() << '\n';
			}
		}
		catch(std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string form = "AWS";
		std::string	Name = "Pinvgvin";
		int			Grade = 200;
		int			S_Grade = 200;
		int			E_Grade = 10;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat	b(Name, Grade);
			Form		a(form, S_Grade, E_Grade);

			std::cout << b << std::endl;
			a.beSigned(b);
			try {
				b.signForm(a);
				cout << a;
			}
			catch(std::exception& e) {
			std::cerr << e.what() << '\n';
			}
		}
		catch(std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	return (0);
}