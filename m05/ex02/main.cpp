#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {
	Bureaucrat simpledimple = Bureaucrat("Jenifffffer", 145);
	Form *fgramota = new ShrubberyCreationForm("home");
	std::cout << *fgramota << std::endl;
	simpledimple.signForm(*fgramota);
	for (size_t i = 0; i < 145 - 137; i++)
	{
		simpledimple.upgrade();
		std::cout << simpledimple << std::endl;	
	}
	std::cout << simpledimple << std::endl;
	simpledimple.executeForm(*fgramota);

	Form *bender = new RobotomyRequestForm("Василий");
	std::cout << *bender << std::endl;
	Bureaucrat seventytwo = Bureaucrat("Lola", 72);
	seventytwo.signForm(*bender);
	Bureaucrat fourtytwo = Bureaucrat("Tim", 45);
	fourtytwo.executeForm(*bender);

	Form *pardon = new PresidentialPardonForm("Глеб");
	Bureaucrat p = Bureaucrat("Peter", 25);
	p.signForm(*pardon);
	Bureaucrat r = Bureaucrat("Rob", 5);
	r.executeForm(*pardon);
	std::cout << *pardon << std::endl;
}