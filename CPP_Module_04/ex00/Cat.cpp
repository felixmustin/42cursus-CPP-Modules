#include "Cat.hpp"

Cat::Cat() : _type("Cat"){
	Animal::_type = this->_type;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &C) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = C;
}

Cat& Cat::operator=(Cat const& C) {
	std::cout << "Cat copy assignement operator called" << std::endl;
    this->_type = C._type;
	return *this;
}

Cat::~Cat(){
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const{
	std::cout << "MIAOU !" << std::endl;
}
