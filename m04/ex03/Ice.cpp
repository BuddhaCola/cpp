#include "Ice.hpp"

Ice* Ice::clone() const {
	return(new Ice(*this));
}

void AMateria::use(ICharacter& target) {
	_xp += 10;
}

Ice::Ice(const Ice &orig) : AMateria ("ice") {
	*this = orig;
}

Ice &Ice::operator = (const Ice &orig){
	this._type = orig._type;
	this->_xp = orig._xp;
	return (*this);
}

Ice::Ice() : AMateria("Ice")
{}

Ice::~Ice(){}

// AMateria::~Ice() {}