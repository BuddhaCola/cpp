#include "Fists.hpp"

void Fists::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

Fists::Fists(const Fists &orig)
{
	*this = orig;
}

Fists &Fists::operator = (const Fists&orig)
{
	setName(orig.getName());
	setApcost(orig.getAPCost());
	setDamage(orig.getDamage());
	return(*this);
}

Fists::Fists() : AWeapon("Power Fist", 8, 50)
{}

Fists::~Fists()
{
	std::cout << "Fists destructor called" << std::endl;
}