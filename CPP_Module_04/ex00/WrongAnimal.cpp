#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &C) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = C;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& C) {
	std::cout << "WrongAnimal copy assignement operator called" << std::endl;
    this->_type = C._type;
	return *this;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "\"WrongAnimal noise\"" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}