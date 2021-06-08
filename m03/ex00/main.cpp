#include "FragTrap.hpp"

int main ()
{
	FragTrap oleg = FragTrap(" Олег");
	srand (std::time(NULL));
	for (int i = 0; i < 5; i++)
		oleg.vaulthunter_dot_exe("🐀 Дворовая крыса");
	return (0);
}