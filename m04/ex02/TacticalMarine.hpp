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

// clone() returns a copy of the current object
// •Upon creation, displays: "Tactical Marine ready for battle!"
// •battleCry()displays: "For the holy PLOT!"
// •rangedAttack()displays: "* attacks with a bolter *"
// •meleeAttack()displays: "* attacks with a chainsword *"
// •Upon death, displays: "Aaargh..."

#endif // !TACTICALMARINE_HPP