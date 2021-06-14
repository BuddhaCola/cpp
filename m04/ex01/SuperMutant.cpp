#include "SuperMutant.hpp"

void SuperMutant::takeDamage(int amount) {
	amount -= 3;
	if (amount < 0 || hp == 0)
		return ;
	if (hp - amount > 0)
		{
			hp -= amount;
		}
	else
		hp = 0;
}

SuperMutant::SuperMutant(const SuperMutant &orig) {
	*this = orig;
}

SuperMutant &SuperMutant::operator = (const SuperMutant&orig) {
	this->hp = orig.hp;
	this->type = orig.type;
	return(*this);
}

SuperMutant::SuperMutant() : Enemy (170, "SuperMutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}