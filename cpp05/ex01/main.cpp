#include "Bureaucrat.hpp"


int	main(void) {

	{
		Bureaucrat	meta("Bob", 30);
		Form		form("form", 25 , 75);

		try
		{
			form.beSigned(meta);
			meta.signForm(form);
		}
		catch(const Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}

	{
		try {
			Form	alpha("form 1", 0 , 75);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Form	alpha("form 2", 75 , 155);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			Form	alpha("form 3", 75 , 75);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

}