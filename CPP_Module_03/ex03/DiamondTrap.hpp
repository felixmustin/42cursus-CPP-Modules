#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {

private:
    std::string _name;

public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &);
    DiamondTrap &operator=(const DiamondTrap&);
    ~DiamondTrap(void);
    
    void attack(const std::string &target);
    void whoAmI();
    
    int getHitPts(void);
    int getEnPts(void);
    int getAtkDmg(void);
};

#endif