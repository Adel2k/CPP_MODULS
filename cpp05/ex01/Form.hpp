#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>


class Form
{
	private:
		const std::string	Name;
		const int			sign_grade;
		const int			execute_grade;
		bool				sign;

		
	public:
		Form();
		Form(std::string name, int sign_grade, int execute_grade);
		Form(Form& other);
		~Form();

		Form& operator=(Form& other);

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
		bool		GetSign() const;

};

std::ostream&	operator<<(std::ostream& out, Form& form);

#endif
