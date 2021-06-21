#include "RobotomyRequestForm.hpp"
#include <fstream>

 void		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	char *unacceptable = NULL;

	std::srand(std::time(NULL));
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
		int chance = std::rand() % 2;
		std::cout << GOOD << executor.getName() << " executes " << this->getName()  << RESET <<std::endl;
		std::cout << "* drilling noises *" << std::endl;
		if (chance)
			std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
		else
			std::cout << this->getTarget() << "'s robotomization failed." << std::endl;
	}
 }

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", target, 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &orig) : AForm("RobotomyRequestForm", orig.getTarget(), 72, 45) {
	*this = orig;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &orig){
	this->setSigned(orig.getSigned());
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
}