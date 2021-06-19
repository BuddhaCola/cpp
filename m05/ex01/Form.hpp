#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const	std::string	_name;
	const int			_grade;
	bool 				_signed;
	Form();
public:
	void				beSigned(Bureaucrat &);
	class				GradeTooHighException;
	class				GradeTooLowException;
	std::string			getName() const;
	bool				getSigned() const;
	int					getGrade() const;
	Form(std::string name, int grade);

	Form(const Form &);
	Form operator = (Form &);
	~Form();
};

std::ostream & operator << (std::ostream &out, Form const & current );

#endif