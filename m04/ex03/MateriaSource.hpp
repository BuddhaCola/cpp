#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource {
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif // !MATERIASOURCE_HPP