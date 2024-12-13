#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"
// #include "RobotomyRequestForm.hpp"


class Intern
{
	private:

	public:
		Intern();
		Intern(Intern& other);
		~Intern();
	
		Intern& operator=(Intern& other);
		AForm* makeForm(std::string Form, std::string Target) const;
};

#endif