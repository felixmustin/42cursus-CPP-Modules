#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:
    std::string _type;
public:
    AMateria(void);
    AMateria(std::string const & type);
    AMateria(const AMateria & A);
    AMateria &operator=(const AMateria& A);
    virtual ~AMateria(void);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};

#endif