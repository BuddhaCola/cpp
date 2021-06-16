#include "AMateria.hpp"

std::string const & AMateria::getType() const {
	return (_type);
}

unsigned int AMateria::getXP() const {
	return (_xp);
}

AMateria::AMateria(std::string const &type) : _type(type) {}
AMateria::AMateria() {}
AMateria::AMateria(const AMateria &){}
AMateria &AMateria::operator = (const AMateria&){}
AMateria::~AMateria(){}