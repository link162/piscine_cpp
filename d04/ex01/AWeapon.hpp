#ifndef AWEAPON
#define AWEAPON

class AWeapon
{
private:
	std::string name;
	int cost;
	int damage;
public:
	AWeapon();
	AWeapon(AWeapon const &old);
	AWeapon &operator = (const AWeapon &old);
	AWeapon(std::string const &n, int c, int d);
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif
