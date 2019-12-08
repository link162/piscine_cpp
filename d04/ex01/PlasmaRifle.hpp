#ifndef PLASMA_RIFLE
#define PLASMA_RIFLE 

#include "header.hpp"
class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &old);
	PlasmaRifle &operator = (const PlasmaRifle &old);
	virtual ~PlasmaRifle();
	virtual void attack() const;
};

#endif
