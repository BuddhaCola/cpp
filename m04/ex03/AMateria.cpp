#include "AMateria.hpp"

std::string const & AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

AMateria::AMateria(std::string const &type) : _type(type), _xp(0) {}

AMateria::AMateria() : _type("dummy"), _xp(0) {}

AMateria::AMateria(const AMateria &orig){
	*this = orig;
}

void AMateria::use(ICharacter &) {
	_xp += 10;
}

AMateria &AMateria::operator = (const AMateria &orig){
	this->_type = orig._type;
	this->_xp = orig._xp;
	return(*this);
}

AMateria::~AMateria(){}