#include "Victim.hpp"

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

Victim::Victim(const std::string &name) : _name(name) {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &orig) {
	*this = orig;
}
Victim &Victim::operator = (const Victim&orig) {
	this->_name = orig._name;
	return(*this);
}

Victim::Victim() : _name("just victim") {
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::~Victim() {
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
	return (_name);
}

std::ostream & operator << (std::ostream &out, Victim const & current )
{
	out << "I'm " << current.getName() << " and I like otters!" << std::endl;
	return (out);
}