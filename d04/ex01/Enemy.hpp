#ifndef ENEMY
#define ENEMY
#include "header.hpp"

class Enemy
{
protected:
	int hp;
	std::string type;
public:
	Enemy();
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy &operator = (const Enemy &old);
	Enemy(Enemy const &old);
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int);
};

#endif
