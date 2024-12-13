#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	// try {
		// ShrubberyCreationForm shrubForm("home");
		// Bureaucrat highRanker("Alice", 1);
		// shrubForm.beSigned(highRanker);
		// highRanker.signForm(shrubForm);
		// shrubForm.execute(highRanker);

	// } catch (std::exception &e) {
	// 	// Catch and print any exceptions
	// 	std::cerr << "Error: " << e.what() << '\n';
	// }

	try
	{
		RobotomyRequestForm rob("robik");
		Bureaucrat highRanker("bob", 10);
		rob.beSigned(highRanker);
		highRanker.signForm(rob);
		rob.execute(highRanker);
		highRanker.executeForm(rob);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
