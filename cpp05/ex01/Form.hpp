#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>

class Bureaucrat;
class Form
{
	private:
		Form();

		const std::string	Name;
		const int			sign_grade;
		const int			execute_grade;
		bool				sign;

	public:
		Form(const std::string& name, int sign_grade, int execute_grade);
		Form(const Form& other);
		~Form();

		Form& operator=(const Form& other);

		void	beSigned(const Bureaucrat& b);

		class GradeTooHighException : public std::exception {
			const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char*	what() const throw();
		};

		//Getter
		std::string	GetName() const;
		int			GetSign_grade() const;
		int			GetExecute_grade() const;
		bool		Get_ifSigned() const;

};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
