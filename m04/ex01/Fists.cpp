#include "Fists.hpp"

void Fists::attack() const
{
	std::cout << "* хдыщ *" << std::endl;
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

Fists::Fists() : AWeapon("fists", 4, 3)
{}

Fists::~Fists()
{}