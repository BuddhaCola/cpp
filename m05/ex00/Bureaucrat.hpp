#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
	protected:
		const std::string	_name;
		int					_grade;
	public:
		const std::string	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();

		Bureaucrat(std::string name, int grade);

		Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat operator = (Bureaucrat &);
		~Bureaucrat();
};

std::ostream & operator << (std::ostream &out, Bureaucrat const & current );

#endif // !BUREAUCRAT_HPP
