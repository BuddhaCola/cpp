#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	virtual Cure* clone() const;
	virtual void use(ICharacter& target);

	Cure(const Cure &);
	Cure &operator = (const Cure&);
	Cure();
	~Cure();
};

#endif // !CURE_HPP