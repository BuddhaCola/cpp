#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion(const RadScorpion &);
		RadScorpion &operator = (const RadScorpion&);
		RadScorpion();
		virtual ~RadScorpion();
};

#endif // !RADSCORPION_HPP