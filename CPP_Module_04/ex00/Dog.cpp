#include "Dog.hpp"

Dog::Dog() : _type("Dog"){
	Animal::_type = this->_type;
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &C) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = C;
}

Dog& Dog::operator=(Dog const& C) {
	std::cout << "Dog copy assignement operator called" << std::endl;
    this->_type = C._type;
	return *this;
}

Dog::~Dog(){
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "WOUF !" << std::endl;
}
