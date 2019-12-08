#ifndef CHARACTER
#define CHARACTER
#include "header.hpp"

class Character
{
protected:
	std::string name;
	int ap;
	AWeapon *gun;
	Character();
public:
	Character(std::string const & name);
	~Character();
	Character &operator = (const Character &old);
	Character(Character const &old);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const &getName() const;
	int getAP() const;
	AWeapon const *getWeapon() const;
};
std::ostream &operator << (std::ostream &op, Character const &old);

#endif
