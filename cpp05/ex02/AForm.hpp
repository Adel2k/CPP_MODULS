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
		AForm(const std::string name, int sign_grade, int execute_grade);
		AForm(AForm& other);
		virtual ~AForm();

		AForm&			operator=(AForm& other);

		void			beSigned(Bureaucrat& b);
		virtual void	execute(Bureaucrat& executer) const = 0;

		//Getter
		std::string	GetName() const;
		int			Get_ifSigned_grade() const;
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

std::ostream&	operator<<(std::ostream& out, AForm& AForm);

#endif
