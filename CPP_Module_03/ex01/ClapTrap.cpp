#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_pts(10), _energy_pts(10), _attack_dmg(0) {
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &C) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = C;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& C) {
	std::cout << "ClapTrap copy assignement operator called" << std::endl;
    this->_name = C._name;
	this->_attack_dmg = C._attack_dmg;
	this->_hit_pts = C._hit_pts;
	this->_energy_pts = C._energy_pts;
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (!this->isDead()) {
		this->_energy_pts--;
		std::cout << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	if (!this->isDead()) {
		this->_hit_pts -= amount;
		std::cout << this->_name << " takes " << amount << " points of damage" << std::endl;
	}
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->isDead()) {
		this->_energy_pts--;
		this->_hit_pts += amount;
		std::cout << this->_name << " repair himself " << amount << " hit points" << std::endl;
	}
}

bool ClapTrap::isDead(void) {
	if (this->_energy_pts > 0 && this->_hit_pts > 0)
		return (false);
	else {
		std::cout << this->_name << " is dead" << std::endl;
		return (true);
	}
}

int ClapTrap::getHitPts(void) {
	return (this->_hit_pts);
}

int ClapTrap::getEnPts(void) {
	return (this->_energy_pts);
}

int ClapTrap::getAtkDmg(void) {
	return (this->_attack_dmg);
}