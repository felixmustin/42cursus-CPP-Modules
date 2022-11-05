#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->_name = "Default";
	std::cout << "DiamondTrap default constructor called for " << this->_name << std::endl;
    ClapTrap::_name = "Default_clap_name";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg =FragTrap::_attack_dmg; 
}

DiamondTrap::DiamondTrap(std::string name) {
	this->_name = name;
	std::cout << "DiamondTrap constructor called for " << this->_name << std::endl;
    ClapTrap::_name = name + "_clap_name";
	this->_hit_pts = FragTrap::_hit_pts;
	this->_energy_pts = ScavTrap::_energy_pts;
	this->_attack_dmg =FragTrap::_attack_dmg; 
}

DiamondTrap::DiamondTrap(const DiamondTrap &C) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = C;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &C) {
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
    this->_name = C._name;
	this->_attack_dmg = C._attack_dmg;
	this->_hit_pts = C._hit_pts;
	this->_energy_pts = C._energy_pts;
	return *this;
}
DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "My name is " << this->_name << ", and my Clap name is " << ClapTrap::_name << std::endl;
}


int DiamondTrap::getHitPts(void) {
	return FragTrap::getHitPts();
}

int DiamondTrap::getEnPts(void) {
	return ScavTrap::getEnPts();
}

int DiamondTrap::getAtkDmg(void) {
	return FragTrap::getAtkDmg();
}