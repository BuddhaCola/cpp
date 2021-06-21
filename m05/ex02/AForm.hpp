#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
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
	void				setSigned(bool);
	AForm(std::string name, std::string target, int grade, int _exec_grade);
private:
	const std::string	_name;
	const std::string	_target;
	const int			_sign_grade;
	const int			_exec_grade;
	bool 				_signed;
};

std::ostream & operator << (std::ostream &out, AForm const & current );

#endif