#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string	target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm& other);
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		RobotomyRequestForm&		operator=(RobotomyRequestForm& other);

		virtual void			execute(Bureaucrat& executer) const;

		std::string				getTarget() const;

		class RobotomyFailed : public std::exception {
			public :
				const char* what() const throw();
		};

};

#endif