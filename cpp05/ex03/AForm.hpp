#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <exception>
class Bureaucrat;
class AForm
{
	private:
		const std::string	Name;
		const int			sign_grade;
		const int			execute_grade;
		bool				sign;

	public:
		AForm();
		AForm(const std::string& name, int sign_grade, int execute_grade);
		AForm(const AForm& other);
		virtual ~AForm();

		AForm&			operator=(const AForm& other);

		void			beSigned(const Bureaucrat& b);
		virtual void	execute(const Bureaucrat& executor) const = 0;

		//Getter
		std::string	GetName() const;
		int			GetSign_grade() const;
		int			GetExecute_grade() const;
		bool		Get_ifSigned() const;

		//Exceptions
		class GradeTooHighException : public std::exception {
			const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char*	what() const throw();
		};

		class NoFile : public std::exception {
			public :
				const char*	what() const throw();
		};

		class FormNotSignedException : public std::exception {
			public :
				const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const  AForm& form);

#endif
