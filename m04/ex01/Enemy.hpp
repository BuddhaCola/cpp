#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy {
	public:
		Enemy(int hp, std::string const & type);
		
		std::string const	&getType() const;
		int 				getHP() const;
		virtual void 		takeDamage(int);
		Enemy();
		Enemy(const Enemy &);
		Enemy &operator = (const Enemy&);
		virtual ~Enemy();
	protected:
		int				hp;
		std::string		type;
};

#endif // !ENEMY_HPP