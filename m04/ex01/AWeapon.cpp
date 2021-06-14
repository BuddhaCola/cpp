#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{
}

std::string AWeapon::getName() const
{
	return(name);
}
int AWeapon::getAPCost() const
{
	return(apcost);
}
int AWeapon::getDamage() const
{
	return(damage);
}
void AWeapon::setName(std::string name)
{
	this->name = name;
}
void AWeapon::setApcost(int apcost)
{
	this->apcost = apcost;
}
void AWeapon::setDamage(int damage)
{
	this->damage = damage;
}

AWeapon::AWeapon(const AWeapon &orig)
{
	*this = orig;
}

AWeapon &AWeapon::operator = (const AWeapon&orig)
{
	this->name = orig.name;
	this->apcost = orig.apcost;
	this->damage = orig.damage;
	return(*this);
}

AWeapon::AWeapon() : name("sample weapon"), apcost(0), damage(0)
{}

AWeapon::~AWeapon()
{
	std::cout << "AWeapon destructor called" << std::endl;
}
