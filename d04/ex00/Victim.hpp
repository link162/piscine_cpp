#ifndef VICTIM
#define VICTIM
#include "header.hpp"

class Victim
{
protected:
	Victim();
	std::string name;
public:
	~Victim();
	Victim(const Victim &old);
	Victim &operator = (const Victim &old);
	Victim(std::string const &name);
	std::string const getName() const;
	virtual void getPolymorphed(void) const;
};
	std::ostream &operator << (std::ostream &op, Victim const &old);

#endif
