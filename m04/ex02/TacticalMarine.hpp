#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
public:
	ISpaceMarine*	clone() const;
	void			battleCry() const;
	void			rangedAttack() const;
	void			meleeAttack() const;

	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator = (const TacticalMarine&);
	TacticalMarine();
	~TacticalMarine();
};

#endif // !TACTICALMARINE_HPP