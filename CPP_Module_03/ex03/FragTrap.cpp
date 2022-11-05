#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << "FragTrap default constructor called for " << this->_name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts =100;
	this->_attack_dmg =30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called for " << this->_name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts =100;
	this->_attack_dmg =30; 
}

FragTrap::FragTrap(const FragTrap &C) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = C;
}

FragTrap& FragTrap::operator=(const FragTrap &C) {
	std::cout << "FragTrap copy assignement operator called" << std::endl;
    this->_name = C._name;
	this->_attack_dmg = C._attack_dmg;
	this->_hit_pts = C._hit_pts;
	this->_energy_pts = C._energy_pts;
	return *this;
}

FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << this->_name << " Frag asks for a high five ! " << std::endl;
}
