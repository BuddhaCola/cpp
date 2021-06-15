#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad {
private:
	int	count;
	ISpaceMarine	**squad;
public:
	int				getCount() const;
	ISpaceMarine*	getUnit(int) const;
	int				push(ISpaceMarine*);

	Squad(const Squad &);
	Squad &operator = (const Squad&);
	Squad();
	virtual ~Squad();
};
#endif // !SQUAD_HPP