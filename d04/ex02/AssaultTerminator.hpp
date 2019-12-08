#ifndef TERMINATOR
#define TERMINATOR
#include "header.hpp"

class AssaultTerminator : public ISpaceMarine {
public:
    AssaultTerminator();
    AssaultTerminator(AssaultTerminator const &copy);
    ~AssaultTerminator();

    AssaultTerminator &operator=(const AssaultTerminator &copy);

    ISpaceMarine *clone(void) const;

    void battleCry(void) const;
    void rangedAttack(void) const;
    void meleeAttack(void) const;
};

#endif
