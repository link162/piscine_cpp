#ifndef GAME_OBJECT
#define GAME_OBJECT

#include "header.hpp"
class GameObject
{
public:
	enum obj
	{
		player,
		enemy,
		bullet,
		decor
	};
private:
	static int nbr;
protected:
	GameBoss *boss;
	int const index;
	float 	  x;
	float 	  y;
	int		max_hp;
	int		hp;
	obj		type;
	Figure *figure;
	GameObject();
public:
	GameObject(GameBoss *boss, int x, int y, int hp, obj type);
	GameObject(GameObject const & old);
	virtual ~GameObject();
	GameObject &operator = (GameObject const &old);
	virtual void display();
	virtual void update(float diff);
	virtual void collision (GameObject &obj) = 0;
	bool is_killed() const;
	float get_x() const;
	float get_y() const;
	obj get_type() const;
	Figure *get_figure() const;
	void setHp(int val);
};

#endif
