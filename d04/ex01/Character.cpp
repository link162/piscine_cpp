#include "header.hpp"

Character::Character() {}
Character::Character(std::string const &nam) : name(nam), ap(40), gun(NULL) {}
Character::~Character() {}
Character::Character(const Character &copy) { *this = copy; }
Character &Character::operator=(const Character &copy) {
    if (this != &copy)
		*this = copy;
 	return *this;
}
void Character::recoverAP()
{
	ap += 10;
	if (ap > 40)
		ap = 40;
}
void Character::equip(AWeapon *g) { gun = g; }
void Character::attack(Enemy *en)
{
	if (!gun)
		std::cout << name << " has " << ap << " AP and is unarmed" << std::endl;
	else if (en && ap >= gun->getAPCost())
	{
		std::cout << name << " attacks " << en->getType() << " with a "<< gun->getName() << std::endl;
		gun->attack();
		en->takeDamage(gun->getDamage());
		if (en->getHP() < 1)
			delete en;
		ap -= gun->getAPCost();
	}
}
std::string const &Character::getName() const { return name; }
AWeapon const *Character::getWeapon() const { return gun; }
int Character::getAP() const { return ap; }
std::ostream &operator << (std::ostream &op, Character const &old)
{
	AWeapon const *gun = old.getWeapon();
	if (gun)
		std::cout << old.getName() << " has " << old.getAP() << " AP and wields a "<< gun->getName() << std::endl;
	else
		std::cout << old.getName() << " has " << old.getAP() << " AP and is unarmed" << std::endl;
	return op;
}
