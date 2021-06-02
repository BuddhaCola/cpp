#include "Weapon.hpp"

class HumanB
{
	std::string	_name;
	Weapon		*_weapon;
	public:
		void attack();
		void setWeapon(Weapon &Weapon);
		HumanB(std::string name);
};