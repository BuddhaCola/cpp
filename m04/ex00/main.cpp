#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Intern.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Intern kirill("Oleg");
	std::cout << kirill;
	robert.polymorph(kirill);

	jim = kirill;
	std::cout << jim;

	return 0;
}