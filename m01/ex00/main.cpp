#include "Pony.hpp"

void ponyOnTheHeap()
{
	std::string name = "Heep";
	Pony	*clone = new Pony(name);
	delete clone;
	std::cout << name << " прожила чудную жизнь в куче." <<  std::endl;
}

void ponyOnTheStack()
{
	std::string name = "Stock";
	Pony	clone(name);
	std::cout << name << " прожила чудную жизнь в стеке." <<  std::endl;
}

int main ()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}