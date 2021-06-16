#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	virtual Ice* clone() const;
	virtual void use(ICharacter& target);

	Ice(const Ice &);
	Ice &operator = (const Ice&);
	Ice();
	~Ice();
};

#endif // !ICE_HPP