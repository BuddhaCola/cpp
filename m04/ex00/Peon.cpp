#include "Peon.hpp"

void Peon::getPolymorphed() const {
	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &orig) {
	*this = orig;
}

Peon &Peon::operator = (const Peon &orig) {
	this->_name = orig._name;
	return(*this);
}

Peon::Peon() : Victim("just peon") {
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}