#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream> 

class ClapTrap {

private:
    std::string _name;
    int _hit_pts;
    int _energy_pts;
    int _attack_dmg;
    bool isDead(void);
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &);
    ClapTrap &operator=(const ClapTrap&);
    ~ClapTrap(void);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    int getHitPts(void);
    int getEnPts(void);
    int getAtkDmg(void);
};

#endif