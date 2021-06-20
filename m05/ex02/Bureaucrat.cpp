#include "Bureaucrat.hpp"

void	Bureaucrat::executeForm(Form &form) {
	form.execute(*this);
}

void Bureaucrat::signForm(Form &a) {
	a.beSigned(*this);
}

class	Bureaucrat::GradeTooHighException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Grade Too High!");
		}
};

class	Bureaucrat::GradeTooLowException : public std::exception {
	public:
		const char *what() const throw() {
			return ("Grade Too Low!");
		}
};

const std::string	Bureaucrat::getName() const {
	return _name;
}

int	Bureaucrat::getGrade() const {
	return _grade;
}

void	Bureaucrat::upgrade(){
	try {
			if (_grade - 1 == 0)
				throw(GradeTooHighException());
	}
	catch (GradeTooHighException) {
		std::cerr << "Can't upgrade " << _name << "'s level anymore!" << std::endl;
		return ;
	}
		_grade--;
}

void	Bureaucrat::downgrade(){
	try {
		if (_grade + 1 == 151)
			throw(GradeTooLowException());
	}
	catch (GradeTooLowException) {
		std::cerr << "Can't downgrade " << _name << "'s level anymore!" << std::endl;
		return ;
	}
	_grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try {
		if (grade < 1)
			throw GradeTooHighException();
		if (grade > 150)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException) {
		std::cout << "can't create " << grade << " level bureaucrat " << name << ": level too low. " << std::endl;
		return ;
	}
	catch (GradeTooHighException) {
		std::cout << "can't create " << grade << " level bureaucrat " << name << ": level too high. " << std::endl;
		return ;
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &orig) : _name(orig.getName()), _grade(orig.getGrade()) {
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat &orig) {
	if (this == &orig)
		return *this;
	_grade = orig._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat(){}

std::ostream & operator << (std::ostream &out, Bureaucrat const & current ) {
	out << current.getName() << ", bureaucrat grade " << current.getGrade() <<".";
	return out;
}