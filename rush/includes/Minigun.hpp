#ifndef MINIGUN
#define MINIGUN

#include "header.hpp"

class Minigun : public Weapon
{
protected:
	Minigun(void);
	Minigun(Minigun const &old);
	Minigun &operator=(Minigun const &old);
public:
	Minigun(GameObject *boss);
	virtual ~Minigun(void);
	void attack(GameBoss &boss);
};

#endif
