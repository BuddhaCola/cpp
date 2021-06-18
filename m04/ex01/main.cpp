#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Fists.hpp"
#include "ThreeLeggedTeapot.hpp"

int main ()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "my test!" << std::endl;
	Enemy *sm = new ThreeLeggedTeapot(); // new enemy subclass
	for (int i = 0; i < 2; i++) { // recover AP test
		me->recoverAP();
		std::cout << *me;
	}
	AWeapon* f = new Fists(); // new weapon subclass
	me->equip(f);

	for (int i = 0; i < 3; i++) { //fighting mechanics!
		std::cout << *me;
		me->attack(sm);
		std::cout << sm->getType() << " got " << me->getWeapon()->getDamage() << " damage. It has " << sm->getHP() << " HP left!" << std::endl;
	}

	me->equip(pr);
	for (int i = 0; i < 6; i++) {
		std::cout << *me;
		me->attack(sm);
		std::cout << sm->getType() << " got " << me->getWeapon()->getDamage() << " damage. It has " << sm->getHP() << " HP left!" << std::endl;
	}
	//after 5 plasma rifle shots, character loses all AP ("not enough AP!" message)
	std::cout << "it was at this moment that " << me->getName() <<" knew " << me->getName() <<" fucked up" << std::endl;
	delete (me);
	return 0;
	
}