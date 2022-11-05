#include "Character.hpp"

Character::Character(void) {
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

Character::Character(std::string name) : _name(name) {
    for (int i= 0; i < 4; i++)
        this->_inventory[i] = nullptr;
}

Character::~Character(void) {
    for (int i = 0; i < 4; i++) {
        delete this->_inventory[i];
    }
}

Character::Character(const Character & I) {
    for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
	*this = I;
}

Character &Character::operator=(const Character& I) {
    this->_name = I.getName();
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i]) {
            delete this->_inventory[i];
            this->_inventory[i] = I._inventory[i]->clone();
        }
    }
    return *this;
}

std::string const &Character::getName() const {
    return this->_name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; i++) {
        if (this->_inventory[i] == nullptr) {
            this->_inventory[i] = m;
            std::cout << "Materia " << m->getType() << " equipped" << std::endl;
            return ;
        }
    }
    std::cout << "Cannot equip, inventory full" << std::endl;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        if (this->_inventory[idx]) {
            this->_inventory[idx] = nullptr;
            std::cout << "Materia " << this->_inventory[idx]->getType() << "unequipped" << std::endl;
        }
        else
            std::cout << "Cannot unequip, inventory slot empty" << std::endl;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4) {
        if (this->_inventory[idx]) {
            this->_inventory[idx]->use(target);
        }
        else
            std::cout << "Cannot use, inventory slot empty" << std::endl;
    }
}