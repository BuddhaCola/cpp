#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

# define GOOD			"\033[0m\033[32m"
# define BAD			"\033[0m\033[31m"
# define TOOHIGH		"\033[0m\033[35m"
# define TOOLOW			"\033[0m\033[33m"
# define RESET			"\033[0m"

class Form;

class Bureaucrat {
	protected:
		const std::string	_name;
		int					_grade;
	public:
		void				executeForm(Form &);
		void				signForm(Form &);
		const std::string	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();
		class				GradeTooHighException;
		class				GradeTooLowException;

		Bureaucrat(std::string name, int grade);

		Bureaucrat();
		Bureaucrat(Bureaucrat const &);
		Bureaucrat &operator = (Bureaucrat &);
		~Bureaucrat();
};

std::ostream & operator << (std::ostream &out, Bureaucrat const & current );

#endif // !BUREAUCRAT_HPP
