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
		PresidentialPardonForm(const PresidentialPardonForm& other);
		PresidentialPardonForm(const std::string& target);
		~PresidentialPardonForm();

		PresidentialPardonForm&		operator=(const PresidentialPardonForm& other);
		
		virtual void execute(const Bureaucrat& executor) const;

		std::string	getTarget() const;
};

#endif