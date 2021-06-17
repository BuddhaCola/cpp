#include "Squad.hpp"

int	Squad::getCount() const {
	return (count);
}

ISpaceMarine *Squad::getUnit(int i) const {
	if (i < 0 || i > count)
		return (nullptr);
	return(squad[i]);
}

int	Squad::push(ISpaceMarine *newguy) {
	bool	oldsquad = false;
	if (count) {
		oldsquad = true;
	}
	count++;
	ISpaceMarine **newsquad = new ISpaceMarine *[count];
	if (oldsquad)
	{
		for (int i = 0; i < count; i++)
				newsquad[i] = squad[i];
		delete [] squad;
	}
	newsquad[count - 1] = newguy;
	squad = newsquad;
	return (count);
}


Squad::Squad(const Squad &orig) {
	*this = orig;
}

Squad &Squad::operator = (const Squad &orig) {
	if (this->squad != nullptr)
	{
		for (int i = 0; i < orig.count; i++)
			delete squad[i];
		delete [] squad;
	}
	if (orig.count)
		for (int i = 0; i < orig.count; i++)
			this->squad[i] = orig.squad[i];
	return (*this);
}

Squad::Squad() : count(0), squad(nullptr) {
}

Squad::~Squad() {
	for (int i = 0; i < count ; i++) {
		delete squad[i];
	}
	delete [] squad;
}