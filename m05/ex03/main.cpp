#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main () {
	Intern intern = Intern();
	AForm *blankForm = NULL;
	int	toupgrade;


	Bureaucrat signer = Bureaucrat("Тимур Аркадьевич", 150);
	Bureaucrat executor = Bureaucrat ("Рашид Султанович", 150);
	blankForm = intern.makeForm("Shrubbery Creation", "Бугульма");
	std::cout << *blankForm << std::endl;
	toupgrade = signer.getGrade() - blankForm->getGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		signer.upgrade();
		signer.signForm(*blankForm);
	}
	toupgrade = executor.getGrade() - blankForm->getExecGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		executor.upgrade();
		executor.executeForm(*blankForm);
	}
	blankForm = intern.makeForm("Robotomy Request", "Константин Геннадьевич");
	std::cout << *blankForm << std::endl;
	toupgrade = signer.getGrade() - blankForm->getGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		signer.upgrade();
		signer.signForm(*blankForm);
	}
	toupgrade = executor.getGrade() - blankForm->getExecGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		executor.upgrade();
		executor.executeForm(*blankForm);
	}
	blankForm = intern.makeForm("Presidential Pardon", "Евлампий Натанович");
		toupgrade = signer.getGrade() - blankForm->getGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		signer.upgrade();
		signer.signForm(*blankForm);
	}
	toupgrade = executor.getGrade() - blankForm->getExecGrade();
	for (int i = 0; i < toupgrade; i++)
	{
		executor.upgrade();
		executor.executeForm(*blankForm);
	}
	blankForm = intern.makeForm("ShrubberyCreationForm", "Новое Огорёво");
}