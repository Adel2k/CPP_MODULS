#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

#include "AForm.hpp"


class Bureaucrat
{
	private:
		Bureaucrat();
		
		const std::string	Name;
		int					grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& other);
		~Bureaucrat();

		int			Increment_grade();
		int			Decrement_grade();
		void		signForm(AForm& form);


		class	GradeTooHighException : public std::exception {
			public :
				const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public :
				const char*	what() const throw();
		};

		Bureaucrat&	operator=(Bureaucrat& other);

		//Getter
		std::string	getName() const;
		int			getGrade() const;

};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat);

#endif