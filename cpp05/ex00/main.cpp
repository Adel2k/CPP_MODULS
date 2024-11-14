#include "Bureaucrat.hpp"

using std::cout;
using std::endl;

int main () {

	cout << endl << "\033[1;34m################# TESTING ###################\033[0m" << endl << endl;
	{
		std::string	Name = "Bob";
		int			Grade = 100;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	Name = "Pingvin";
		int			Grade = 150;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	Name = "Potato";
		int			Grade = 146;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			b.Decrement_grade();
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	Name = "Potato";
		int			Grade = 150;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	Name = "Potato";
		int			Grade = 4;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			b.Increment_grade();
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	{
		std::string	Name = "Potato";
		int			Grade = 0;

		try {
			cout << "\033[32mTrying Bureaucrat " << Name << " with " << Grade << " grade -------> \033[0m";
			Bureaucrat b(Name, Grade);
			std::cout << b << std::endl;
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	cout << endl << "\033[33m>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\033[0m" << endl << endl;
	return (0);
}