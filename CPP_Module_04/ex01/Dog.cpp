#include "Dog.hpp"

Dog::Dog() : _type("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
	Animal::_type = this->_type;
}

Dog::Dog(const Dog &D) : _brain(NULL) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = D;
}

Dog& Dog::operator=(Dog const& D) {
	std::cout << "Dog copy assignement operator called" << std::endl;
    this->_type = D._type;
	if (this->_brain) {
		delete this->_brain;
	}
	this->_brain = new Brain();
	*(this->_brain) = *(D._brain);
	return *this;
}

Dog::~Dog(){
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << "WOUF !" << std::endl;
}

Brain* Dog::getBrain(void) const {
	return this->_brain;
}