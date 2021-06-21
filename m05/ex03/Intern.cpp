#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

const Intern::fncptr Intern::fnarr[3] = { &Intern::shrub, &Intern::robo, &Intern::presi };

const std::string	Intern::types[3] = { "Shrubbery Creation", "Robotomy Request", "Presidential Pardon" };

AForm *Intern::shrub(std::string const &target) const {
	AForm *ptr = new ShrubberyCreationForm(target);
	return (ptr);
}

AForm *Intern::presi(std::string const &target) const {
	AForm *ptr = new PresidentialPardonForm(target);
	return (ptr);
}

AForm *Intern::robo(std::string const &target) const {
	AForm *ptr = new RobotomyRequestForm(target);
	return (ptr);
}

AForm	*Intern::makeForm(std::string formType, std::string target){
	AForm	*ptr = NULL;
	for (size_t i = 0; i < sizeof(types) / sizeof(types[1]); i++)
	{
		if (types[i] == formType)
			ptr = (this->*fnarr[i])(target);
	}
	if (!ptr)
		std::cout << "Intern coudn't create " << formType << " because of wrong form type" << std::endl;
	else
		std::cout << "Intern creates " << formType << " form targeted on " << target << std::endl;
	return ptr;
}

Intern::Intern(){
}

Intern::Intern(const Intern &orig){
	*this = orig;
}

Intern &Intern::operator = (const Intern &){
	return (*this);
}

Intern::~Intern(){
}