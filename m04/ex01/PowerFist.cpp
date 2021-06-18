#include "PowerFist.hpp"

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist &orig)
{
	*this = orig;
}

PowerFist &PowerFist::operator = (const PowerFist&orig)
{
	setName(orig.getName());
	setApcost(orig.getAPCost());
	setDamage(orig.getDamage());
	return(*this);
}

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}