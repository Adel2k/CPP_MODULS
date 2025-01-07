#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"


class Intern
{
	private:

	public:
		Intern();
		Intern(const Intern& other);
		~Intern();
	
		Intern&	operator=(const Intern& other);

		AForm*	makeForm(const std::string& Form, const std::string& Target) const;
};

#endif