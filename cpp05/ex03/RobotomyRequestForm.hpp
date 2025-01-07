#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include <ctime>  
# include <cstdlib>
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

		virtual void			execute(Bureaucrat& executor) const;

		std::string				getTarget() const;
};

#endif