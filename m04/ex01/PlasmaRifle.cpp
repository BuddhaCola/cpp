#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &orig)
{
	*this = orig;
}

PlasmaRifle &PlasmaRifle::operator = (const PlasmaRifle&orig)
{
	setName(orig.getName());
	setApcost(orig.getAPCost());
	setDamage(orig.getDamage());
	return(*this);
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}