#include "AForm.hpp"

const char *AForm::GradeTooHighException::what() const throw() {
	return ("Grade Too High!");
}

const char *AForm::GradeTooLowException::what() const throw() {
	return ("Grade Too Low!");
}

const char *AForm::notSignedException::what() const throw() {
	return ("Not Signed!");
}

void	AForm::beSigned(Bureaucrat &bur){
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

std::string	AForm::getName() const {
	return(_name);
}

std::string	AForm::getTarget() const {
	return (_target);
}

bool AForm::getSigned() const {
	return(_signed);
}

int	AForm::getGrade() const {
	return(_sign_grade);
}

int	AForm::getExecGrade() const {
	return(_exec_grade);
}

void	AForm::setSigned(bool value) {
	_signed = value;
}

AForm::AForm(std::string name, std::string target, int grade, int exec_grade) : _name(name), _target(target), _sign_grade(grade), _exec_grade(exec_grade), _signed(false) {
}

std::ostream &operator << (std::ostream &out, AForm const & current ) {
	char	*status = NULL;
	current.getSigned() == true ? status = (char *)"signed" : status = (char *)"not signed";
	out << "Form: " << current.getName() << "; Target: " << current.getTarget() << "; Signing grade: " << current.getGrade() << "; Execution grade: " << current.getExecGrade() << "; Status: " << status;
	return out;
}