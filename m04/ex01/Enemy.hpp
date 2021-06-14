#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
	protected:
		int	hp;
		std::string		type;
	public:
		Enemy(int hp, std::string const & type);
		
		std::string const	&getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);
		Enemy(const Enemy &);
		Enemy &operator = (const Enemy&);
		Enemy();
		virtual ~Enemy() = 0;
};

#endif // !ENEMY_HPP