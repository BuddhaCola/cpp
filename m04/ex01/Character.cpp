#include "Character.hpp"


void Character::recoverAP() {
	ap = 40;
}

void Character::equip(AWeapon *ptr) {
	weapon = ptr;
}

void Character::attack(Enemy *enm) {
	if (weapon && ap >= weapon->getAPCost()) {
		enm->takeDamage(weapon->getDamage());
		std::cout << name << " attacks " << enm->getType() << " with a " << weapon->getName() << std::endl;
		weapon->attack();
		if (enm->getHP() == 0)
			delete enm;
		ap -= weapon->getAPCost();
	}
}

std::string const &Character::getName() const {
	return (name);
}

int const &Character::getAp() const {
	return(ap);
}

AWeapon		*Character::getWeapon() const {
	return(weapon);
}

Character::Character(std::string const & name) : name(name), ap(40), weapon(NULL) {}

Character::Character(const Character &orig) : name(orig.name), ap(orig.ap), weapon(orig.weapon) {}

Character &Character::operator= (const Character &orig) {
	this->name = orig.name;
	this->ap = orig.ap;
	this->weapon = orig.weapon;
	return (*this);
}

Character::Character() : name("dummy"), ap(0), weapon(NULL) {}

Character::~Character() {}

std::ostream & operator << (std::ostream &out, Character const & current ) {
	if (current.getWeapon())
		out << current.getName() << " has " << current.getAp() << " AP and wields a " << current.getWeapon()->getName() << std::endl;
	else
		out << current.getName() << " has " << current.getAp() << " AP and is unarmed" << std::endl;
	return (out);
}