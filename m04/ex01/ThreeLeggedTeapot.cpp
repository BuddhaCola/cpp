#include "ThreeLeggedTeapot.hpp"

void ThreeLeggedTeapot::takeDamage(int amount) {
	amount -= 2;
	if (amount < 0 || hp == 0)
		return ;
	if (hp - amount > 0)
		{
			hp -= amount;
		}
	else
		hp = 0;
}

ThreeLeggedTeapot::ThreeLeggedTeapot(const ThreeLeggedTeapot &orig) {
	*this = orig;
}

ThreeLeggedTeapot &ThreeLeggedTeapot::operator = (const ThreeLeggedTeapot&orig) {
	this->hp = orig.hp;
	this->type = orig.type;
	return(*this);
}

ThreeLeggedTeapot::ThreeLeggedTeapot() : Enemy (100, "Three Legged Teapot") {
	std::cout << "* This is a teapot with three legs. Whatcha gonna do about it? *" << std::endl;
}

ThreeLeggedTeapot::~ThreeLeggedTeapot() {
	std::cout << "* dangit WTF are you doing?! *" << std::endl;
}