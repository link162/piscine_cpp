#ifndef WEAPON
#define WEAPON

#include "header.hpp"

class Weapon
{
	protected:
		int damage;
		float const shoot_delay;
		float timer;
		std::string name;
		GameObject *boss;
		Weapon();
		Weapon(Weapon const &old);
		Weapon &operator = (Weapon const &old);
	public:
		Weapon(int d, float s, std::string name, GameObject *boss);
		virtual ~Weapon();
		std::string const &get_name() const;
		void update(float diff);
		virtual void attack(GameBoss &old) = 0;
		int get_damage() const;
		GameObject *get_parent() const;
};

#endif
