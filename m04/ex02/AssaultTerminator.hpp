#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator = (const AssaultTerminator&);
	AssaultTerminator();
	~AssaultTerminator();
};

#endif // !ASSAULTTERMINATOR_HPP