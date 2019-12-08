#ifndef USER
#define USER

#include "header.hpp"

class User : public GameObject
{
	Weapon *gun;
	float speed_x;
	float speed_y;
	User();
public:
	User(GameBoss *boss, int x, int y);
	User(User const &old);
	virtual ~User();
	User &operator = (User const &old);
	void update(float diff);
	void collision(GameObject &old);
	void getInput(int intput);
	void attack();
	void setPos(int c, int y);
	void clear ();
	void reset_speed();
	void takeDamage(int val);
	void hud();
};

#endif
