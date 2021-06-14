#include "Sorcerer.hpp"

void	Sorcerer::polymorph(Victim const &target) const {
	target.getPolymorphed();
}

void	Sorcerer::polymorph(Peon const &target) const {
	target.getPolymorphed();
}

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :	_name(name), _title(title) {
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

std::string Sorcerer::getName() const {
	return (_name);
}

std::string Sorcerer::getTitle() const {
	return (_title);
}

Sorcerer::Sorcerer(const Sorcerer &orig) {
	*this = orig;
}
Sorcerer &Sorcerer::operator = (const Sorcerer&orig) {
	this->_name = orig._name;
	this->_title = orig._title;
	return(*this);
}

Sorcerer::Sorcerer() {}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::ostream & operator << (std::ostream &out, Sorcerer const & current ) {
	out << "I am " << current.getName() << ", " << current.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}