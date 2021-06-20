#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	virtual void		execute(Bureaucrat const & executor) const = 0;
	void				beSigned(Bureaucrat &);

	class	GradeTooHighException : public std::exception {
		public:
			const char *what() const throw();
	};

	class	GradeTooLowException : public std::exception {
		public:
			const char *what() const throw();
	};

	class	notSignedException : public std::exception {
	public:
		const char *what() const throw();
	};

	std::string			getName() const;
	std::string			getTarget() const;
	bool				getSigned() const;
	int					getGrade() const;
	int					getExecGrade() const;
	// void				setName(std::string);
	// void				setGrade(int);
	// void				setExecGrade(int);
	void				setSigned(bool);
	Form(std::string name, std::string target, int grade, int _exec_grade);

	// Form(const Form &);
	// Form operator = (Form &);
	// ~Form();
private:
	const std::string	_name;
	const std::string	_target;
	const int			_sign_grade;
	const int			_exec_grade;
	bool 				_signed;
	// Form();
};

std::ostream & operator << (std::ostream &out, Form const & current );

#endif