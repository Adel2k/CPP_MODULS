#include "Bureaucrat.hpp"
#include "Form.hpp"


int main () {
	Bureaucrat a;
	Form 	b;
	
	try
	{
		Bureaucrat b("bob", 150);
		// b.Decrement_grade();
		// b.Decrement_grade();
		// b.Decrement_grade();
		// b.Decrement_grade();
		// b.Decrement_grade();
		// b.Decrement_grade();
		std::cout << b << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return (1);
	}
	return (0);

}