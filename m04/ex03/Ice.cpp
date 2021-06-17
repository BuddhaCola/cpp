#include "Ice.hpp"

Ice* Ice::clone() const {
	return(new Ice(*this));
}

void Ice::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &orig) : AMateria ("ice") 
{
	*this = orig;
}

Ice &Ice::operator = (const Ice &orig){
	this->_type = orig._type;
	this->_xp = orig._xp;
	return (*this);
}

Ice::Ice() : AMateria("ice")
{}

Ice::~Ice(){}