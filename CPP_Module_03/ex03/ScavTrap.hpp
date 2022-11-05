#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : virtual public ClapTrap {

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(const ScavTrap&);
    ~ScavTrap(void);
    void attack(const std::string& target);
    void guardGate();
};

#endif