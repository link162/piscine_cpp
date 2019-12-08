#ifndef ENEMY
#define ENEMY

#include "header.hpp"

class Enemy : public GameObject
{
	Weapon *gun;
	Enemy();
	Enemy(Enemy const &old);
public:
	Enemy(GameBoss *boss, int x, int y);
	virtual ~Enemy();
	Enemy &operator = (Enemy const &old);
	void display();
	void update (float diff);
	void collision(GameObject &old);
	void attack();
};

#endif
