#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "ScavTrap default constructor called for " << this->_name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg =20; 
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called for " << this->_name << std::endl;
	this->_hit_pts = 100;
	this->_energy_pts = 50;
	this->_attack_dmg =20; 
}

ScavTrap::ScavTrap(const ScavTrap &C) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = C;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &C) {
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
    this->_name = C._name;
	this->_attack_dmg = C._attack_dmg;
	this->_hit_pts = C._hit_pts;
	this->_energy_pts = C._energy_pts;
	return *this;
}
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target) {
	if (!this->isDead()) {
		this->_energy_pts--;
		std::cout << this->_name << " Scav attacks " << target << ", causing " << this->_attack_dmg << " points of damage" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << this->_name << " Scav enters in Gate keeper mode " << std::endl;
}
