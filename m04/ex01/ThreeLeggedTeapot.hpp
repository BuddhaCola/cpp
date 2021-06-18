#ifndef THREELEGGEDTEAPOT_HPP
#define THREELEGGEDTEAPOT_HPP

#include "Enemy.hpp"

class ThreeLeggedTeapot : public Enemy {
	public:
		void takeDamage(int);

		ThreeLeggedTeapot(const ThreeLeggedTeapot &);
		ThreeLeggedTeapot &operator = (const ThreeLeggedTeapot&);
		ThreeLeggedTeapot();
		virtual ~ThreeLeggedTeapot();
};

#endif // !THREELEGGEDTEAPOT_HPP