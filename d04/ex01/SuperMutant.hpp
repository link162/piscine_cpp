#ifndef SUPER_MUTANT
#define SUPER_MUTANT

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	~SuperMutant();
	SuperMutant(SuperMutant const &old);
	SuperMutant &operator = (const SuperMutant &old);
	virtual void takeDamage(int i);
};

#endif
