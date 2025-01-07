#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public	AForm
{
	private:
		std::string		target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm& other);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		PresidentialPardonForm&		operator=(PresidentialPardonForm& other);
		
		virtual void execute(Bureaucrat& executor) const;

		std::string	getTarget() const;
};

#endif