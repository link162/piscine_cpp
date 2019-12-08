#ifndef BULLET
#define BULLET

#include "header.hpp"

class Bullet : public GameObject
{
	float speed;
	int damage;
	Bullet();
public:
	Bullet(Bullet const &old);
	Bullet(GameBoss *boss, int x, int y, Weapon *gun);
	virtual ~Bullet(void);
	Bullet &operator = (Bullet const &old);
	void display();
	void update(float diff);
	void collision(GameObject &obj);
	int getDamage() const;
	float getSpeed() const;
};

#endif
