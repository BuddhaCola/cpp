#include "PresidentialPardonForm.hpp"
#include <fstream>

 void		PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	char *unacceptable = NULL;

	try {
		if (this->getSigned() == false) {
			throw(notSignedException());
		}
		if (executor.getGrade() > this->getExecGrade()) {
			throw(GradeTooLowException());
		}
		if (executor.getGrade() < this->getExecGrade()) {
			throw(GradeTooHighException());
		}
	}
	catch (notSignedException) {
		std::cout << BAD << executor.getName() << " cannot execute " << this->getName() << " because it's not signed!" << RESET << std::endl;
		return ;
	}
	catch (GradeTooHighException) {
		unacceptable = (char *)("\033[0m\033[35mGrade Too High");
	}
	catch (GradeTooLowException) {
		unacceptable = (char *)("\033[0m\033[33mGrade Too Low");
	}
	if (unacceptable)
	{
		std::cout << BAD << executor.getName() << " cannot execute " << this->getName() << " because " << unacceptable << " (need " << this->getExecGrade() << ", got " << executor.getGrade() << ")"  << std::endl;
		return ;
	}
	else
	{
		std::cout << GOOD << executor.getName() << " executes " << this->getName()  << RESET <<std::endl;
		std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
 }

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", target, 25, 5) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &orig) : AForm("PresidentialPardonForm", orig.getTarget(), 25, 5) {
	*this = orig;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &orig){
	this->setSigned(orig.getSigned());
	return(*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
}