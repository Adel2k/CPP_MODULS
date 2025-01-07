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
		RobotomyRequestForm(const RobotomyRequestForm& other);
		RobotomyRequestForm(const std::string& target);
		~RobotomyRequestForm();

		RobotomyRequestForm&		operator=(const RobotomyRequestForm& other);

		virtual void			execute(const Bureaucrat& executor) const;

		std::string				getTarget() const;
};

#endif