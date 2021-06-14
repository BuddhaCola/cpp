#include "RadScorpion.hpp"

RadScorpion::RadScorpion(const RadScorpion &orig) {
	*this = orig;
}

RadScorpion &RadScorpion::operator = (const RadScorpion&orig) {
	this->hp = orig.hp;
	this->type = orig.type;
	return(*this);
}

RadScorpion::RadScorpion() : Enemy (80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;	
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}