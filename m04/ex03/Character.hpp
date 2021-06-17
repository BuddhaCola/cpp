#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
public:
	std::string const &	getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
	void				setname(std::string name);

	Character(std::string const &name);

	Character(const Character &);
	Character &operator = (const Character&);
	~Character();
protected:
	std::string			_name;
	AMateria			*_inventory[4];
private:
	Character();
};

#endif // !CHARACTER_HPP
