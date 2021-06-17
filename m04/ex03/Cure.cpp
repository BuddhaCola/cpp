#include "Cure.hpp"

Cure* Cure::clone() const {
	return(new Cure(*this));
}

void Cure::use(ICharacter& target) {
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::Cure(const Cure &orig) : AMateria ("cure") 
{
	*this = orig;
}

Cure &Cure::operator = (const Cure &orig){
	this->_type = orig._type;
	this->_xp = orig._xp;
	return (*this);
}

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure(){}