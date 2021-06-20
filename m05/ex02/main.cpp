#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main () {
	Bureaucrat simpledimple = Bureaucrat("Jenifffffer", 145);
	Form *fgramota = new ShrubberyCreationForm("home");
	simpledimple.signForm(*fgramota);
	for (size_t i = 0; i < 145 - 137; i++)
	{
		simpledimple.upgrade();
		std::cout << simpledimple << std::endl;	
	}
	std::cout << simpledimple << std::endl;
	simpledimple.executeForm(*fgramota);
}