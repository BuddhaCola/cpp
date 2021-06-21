#include "ShrubberyCreationForm.hpp"
#include <fstream>

 void		ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	char *unacceptable = NULL;

	try {
		if (this->getSigned() == false) {
			throw(notSignedException());
		}
		if (executor.getGrade() > this->getExecGrade()) {
			std::cout << "/* message */" << std::endl;
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
		std::string filename = this->getTarget() +  "_shrubbery";
		std::cout << GOOD << executor.getName() << " executes " << this->getName()  << RESET <<std::endl;
		std::ofstream file(filename);
		file <<"ДЕРЕВО!!!";
		file.close();
	}
 }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &orig) : Form("ShrubberyCreationForm", orig.getTarget(), 145, 137) {
	*this = orig;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (const ShrubberyCreationForm &orig){
	this->setSigned(orig.getSigned());
	return(*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
}