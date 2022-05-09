#include "Zombie.hpp"

Zombie::Zombie(void) {
}

Zombie::~Zombie(void) {
    std::cout << "Destructor called on : " << _name << std::endl;
}