#include "MateriaSource.hpp"

void		MateriaSource::learnMateria(AMateria *new_materia) {
	int i = 0;

	if (new_materia == nullptr)
		return ;
	for (i = 0; i < 4; i++) {
		if (_learned[i] == nullptr) {
			_learned[i] = new_materia->clone();
			std::cout << "learned " << new_materia->getType() << std::endl;
			return;
		}
	}
	if (i == 4)
	std::cout << "Materia Source is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type){
	for (int i = 0; i < 4; i++)
	{
		if (_learned[i] != nullptr)
			if (_learned[i]->getType() == type)
				return(_learned[i]->clone());
	}
	return NULL;
}

MateriaSource::MateriaSource(){
	for (int i = 0 ; i < 4; i++)
		_learned[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &orig){
	*this = orig;
}

MateriaSource &MateriaSource::operator = (const MateriaSource &orig){
	if (this == &orig)
		return(*this);
	for (int i = 0 ; i < 4; i++)
	{
		if (this->_learned[i] != nullptr)
			delete(_learned[i]);
		_learned[i] = orig._learned[i];
	}
	return(*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0 ; i < 4; i++) {
		if (_learned[i] != nullptr)
			delete(_learned[i]);
	}
}