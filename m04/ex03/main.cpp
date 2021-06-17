#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	ICharacter* me = new Character("Олег");
	ICharacter* bob = new Character("Борис");

	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("сure"); // wrong materia name!
	if (tmp == nullptr)
		std::cout << "wrong Materia name!" << std::endl;
	me->use(-69, *bob); // wrong slot number!
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->unequip(3);
	me->use(3, *bob); // empty slot after unequip
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(3, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}