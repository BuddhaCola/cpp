#include "Intern.hpp"

void Intern::getPolymorphed() const {
	std::cout << getName() << " has been turned into a junior frontend developer" << std::endl;
}

Intern::Intern(const std::string &name) : Victim(name) {
	std::cout << "Добрый день!" << std::endl;
}

Intern::Intern(const Intern &orig) {
	std::cout << "Добрый день!" << std::endl;
	*this = orig;
}

Intern &Intern::operator = (const Intern &orig) {
	this->_name = orig._name;
	return(*this);
}

Intern::Intern() : Victim("новенький") {
	std::cout << "Привет! Давно тут работаешь?" << std::endl;
}

Intern::~Intern() {
	std::cout << "Да пошло всё нахер! Пошло всё нахер! ПОШЛО ВСЁ НАХЕР!" << std::endl;
}

std::ostream & operator << (std::ostream &out, Intern const & current )
{
	out << "Это, ну. В общем, звать меня " << current.getName() << ". Ну я там чёт программировал в университете на паскале. Джаваскрипт немного знаю." << std::endl;
	return (out);
}