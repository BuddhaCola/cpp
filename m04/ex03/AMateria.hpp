#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {
	private:
		[...]
		unsigned int _xp;
	public:AMateria(std::string const & type);
		[...]
		[...] ~AMateria();
		std::string const & getType() const;
		//Returns the materia typeunsigned int getXP() const;
		//Returns the Materia's XPvirtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // !AMATERIA_HPP