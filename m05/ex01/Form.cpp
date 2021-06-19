#include "Form.hpp"

class	Form::GradeTooHighException : public std::exception {
public:
	const char *what() const throw() {
		return ("Grade Too High!");
	}
};

class	Form::GradeTooLowException : public std::exception {
public:
	const char *what() const throw() {
		return ("Grade Too Low!");
	}
};

void	Form::beSigned(Bureaucrat &bur){
	char *unacceptable = NULL;
	try {
		if (bur.getGrade() > _grade) {
			throw(GradeTooLowException());
		}
		if (bur.getGrade() < _grade) {
			throw(GradeTooHighException());
		}
	}
	catch (GradeTooHighException) {
		unacceptable = (char *)("\033[0m\033[35mGrade Too High");
	}
	catch (GradeTooLowException) {
		unacceptable = (char *)("\033[0m\033[33mGrade Too Low");
	}
	if (unacceptable)
	{
		std::cout << BAD << bur.getName() << " cannot sign " << _name << " because " << unacceptable << RESET << std::endl;
		return ;
	}
	else
	{
		_signed = true;
		std::cout << GOOD << bur.getName() << " signs " << _name  << RESET <<std::endl;
	}
}

std::string	Form::getName() const {
	return(_name);
}

bool Form::getSigned() const {
	return(_signed);
}

int	Form::getGrade() const {
	return(_grade);
}

Form::Form(std::string name, int grade) : _name(name), _grade(grade), _signed(false) {
}

Form::Form(const Form &orig) : _name(orig.getName()), _grade(orig.getGrade()), _signed(orig.getSigned()) {
}

Form Form::operator = (Form &orig) {
	_signed = orig.getSigned();
	return(*this);
}

Form::~Form() {
}

std::ostream &operator << (std::ostream &out, Form const & current ) {
	char	*status = NULL;
	current.getSigned() == true ? status = (char *)"signed" : status = (char *)"not signed";
	out << "Form: " << current.getName() << "; Grade: " << current.getGrade() << "; Status: " << status << std::endl;
	return out;
}