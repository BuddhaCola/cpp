#include "Form.hpp"

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade Too High!");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade Too Low!");
}

const char *Form::notSignedException::what() const throw() {
	return ("Not Signed!");
}

void	Form::beSigned(Bureaucrat &bur){
	char *unacceptable = NULL;
	try {
		if (bur.getGrade() > _sign_grade) {
			throw(GradeTooLowException());
		}
		if (bur.getGrade() < _sign_grade) {
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
		std::cout << BAD << bur.getName() << " cannot execute " << this->getName() << " because " << unacceptable << RESET << " (need " << this->getGrade() << ", got " << bur.getGrade() << ")"  << std::endl;
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

std::string	Form::getTarget() const {
	return (_target);
}

bool Form::getSigned() const {
	return(_signed);
}

int	Form::getGrade() const {
	return(_sign_grade);
}

int	Form::getExecGrade() const {
	return(_exec_grade);
}

void	Form::setSigned(bool value) {
	_signed = value;
}

// void	Form::setName(std::string value) {
// 	_name = value;
// }
// void	Form::setGrade(int value) {
// 	_sign_grade = value;
// }
// void	Form::setExecGrade(int value) {
// 	_exec_sign_grade = value;
// }

Form::Form(std::string name, std::string target, int grade, int exec_grade) : _name(name), _target(target), _sign_grade(grade), _exec_grade(exec_grade), _signed(false) {
}

// Form::Form(const Form &orig) : _name(orig.getName()), _sign_grade(orig.getGrade()), _signed(orig.getSigned()) {
// }

// Form Form::operator = (Form &orig) {
// 	_signed = orig.getSigned();
// 	return(*this);
// }

// Form::~Form() {
// }

std::ostream &operator << (std::ostream &out, Form const & current ) {
	char	*status = NULL;
	current.getSigned() == true ? status = (char *)"signed" : status = (char *)"not signed";
	out << "Form: " << current.getName() << "; Grade: " << current.getGrade() << "; Status: " << status << std::endl;
	return out;
}