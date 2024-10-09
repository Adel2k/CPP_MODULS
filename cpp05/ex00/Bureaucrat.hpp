#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucrat
{
	private:
		const std::string	Name;
		int					grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& other);
		~Bureaucrat();

		int			Increment_grade();
		int			Decrement_grade();

		class	GradeTooHighException : public std::exception {
			const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			const char*	what() const throw();
		};

		Bureaucrat&	operator=(Bureaucrat& other);

		//Getter
		std::string	getName() const;
		int			getGrade() const;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif