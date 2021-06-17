#include "Character.hpp"

std::string const & Character::getName() const {
	return(_name);
}

void Character::equip(AMateria* m) {
	int i = 0;

	if (m == nullptr)
		return ;
	for (i = 0; _inventory[i]; i++)
		if (i > 3) { 
		std::cout << "can't equip" << std::endl;
		return;
		}
	_inventory[i] = m;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "wrong slot number!" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "wrong slot number!" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
	else
		std::cout << "empty slot!" << std::endl;
}

void	Character::setname(std::string name) {
	_name = name;
}

Character::Character(const Character &orig) {
	*this = orig;
}

Character &Character::operator = (const Character&orig) {
	if (this == &orig)
		return (*this);
	this->_name = orig._name;
	for (int i = 0; i < 3; i++) {
		if (this->_inventory[i])
			delete (this->_inventory[i]);
		this->_inventory[i] = orig._inventory[i];
	}
	return(*this);
}

Character::Character(std::string const &name) : _name (name) {
	for (int i = 0; i < 4; i++)
		_inventory[i] = nullptr;
}

Character::Character() {
	setname("dummy");
}

Character::~Character() {
}