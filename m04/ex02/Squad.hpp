#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad {
public:
	int				getCount();
	ISpaceMarine*	getUnit(N);
	int				push(ISpaceMarine*);
};
#endif // !SQUAD_HPP