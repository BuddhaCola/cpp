#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected:
		std::string		_type;
		unsigned int	_xp;
		AMateria();
	public:
		AMateria(std::string const &type);
		std::string const & getType() const; 
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter&);

		virtual ~AMateria();
		AMateria(const AMateria &);
		AMateria &operator = (const AMateria&);
};

#endif // !AMATERIA_HPP