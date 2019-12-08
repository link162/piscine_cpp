#ifndef POWER_FIST
#define POWER_FIST 

#include "header.hpp"
class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &old);
	PowerFist &operator = (const PowerFist &old);
	virtual ~PowerFist();
	virtual void attack() const;
};

#endif
