#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"

class Character : public ICharacter {

private:
    std::string _name;
    AMateria *_inventory[4];
public:
    Character(void);
    Character(std::string name);
    ~Character(void);
    Character(const Character & I);
    Character &operator=(const Character& I);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif