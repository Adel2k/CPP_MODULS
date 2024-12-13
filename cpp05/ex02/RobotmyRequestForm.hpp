#ifndef RobotmyRequestForm_HPP
# define ROBOTMYREQUESTFORM_HPP

# include <iostream>
# include <exception>
# include <fstream>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotmyRequestForm : public AForm {
	private:
		std::string	target;
	
	public:
		RobotmyRequestForm();
		RobotmyRequestForm(RobotmyRequestForm& other);
		RobotmyRequestForm(std::string target);
		~RobotmyRequestForm();

		RobotmyRequestForm&		operator=(RobotmyRequestForm& other);

		virtual void			execute(Bureaucrat& executer) const;

		std::string				getTarget() const;

		class RobotomyFailed : public std::exception {
			public :
				const char* what() const throw();
		};

};

#endif