#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
		MateriaSource();
		MateriaSource(const MateriaSource &);
		MateriaSource &operator = (const MateriaSource&);
		~MateriaSource();
	protected:
		AMateria	*_learned[4];
};

#endif // !MATERIASOURCE_HPP