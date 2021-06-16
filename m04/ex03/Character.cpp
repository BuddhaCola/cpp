#include "Character.hpp"

std::string const & Character::getName() const {
	return(_name);
}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {

}

void	Character::setname(std::string name) {
	_name = name;
}

Character::Character(const Character &orig) {
	this->_name = orig.getName();
}

Character &Character::operator = (const Character&orig) {
	return(*this);
}

Character::Character(std::string name) {
	setname(name);
	std::cout << "created char " << _name << std::endl;
}

Character::Character() {
	setname("dummy");
}

Character::~Character() {
	std::cout << "deleted char " << _name << std::endl;
}