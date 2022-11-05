#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {

private:

public:
    Ice();
    ~Ice(void);
    Ice(const Ice & I);
    Ice &operator=(const Ice& I);

    void use(ICharacter& target);
    AMateria* clone() const;
};

#endif