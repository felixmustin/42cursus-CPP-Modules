#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

private:

public:
    Cure();
    ~Cure(void);
    Cure(const Cure &C);
    Cure &operator=(const Cure& C);

    void use(ICharacter& target);
    AMateria* clone() const;
};

#endif