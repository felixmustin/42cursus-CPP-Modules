#include "Cat.hpp"

Cat::Cat() : _type("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
	Animal::_type = this->_type;
}

Cat::Cat(const Cat &C) : _brain(NULL) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = C;
}

Cat& Cat::operator=(Cat const& C) {
	std::cout << "Cat copy assignement operator called" << std::endl;
    this->_type = C._type;
	if (_brain) {
		delete _brain;
	}
	this->_brain = new Brain();
	*(this->_brain) = *(C._brain);
	return *this;
}

Cat::~Cat(){
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "MIAOU !" << std::endl;
}

Brain* Cat::getBrain(void) const {
	return this->_brain;
}
