#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &C) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = C;
}

Animal& Animal::operator=(Animal const& C) {
	std::cout << "Animal copy assignement operator called" << std::endl;
    this->_type = C._type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound(void) const {
	std::cout << "\"Animal noise\"" << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}