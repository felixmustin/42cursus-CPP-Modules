#include "WrongCat.hpp"

WrongCat::WrongCat() : _type("WrongCat"){
	WrongAnimal::_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &C) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = C;
}

WrongCat& WrongCat::operator=(WrongCat const& C) {
	std::cout << "WrongCat copy assignement operator called" << std::endl;
    this->_type = C._type;
	return *this;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << "MIAOU !" << std::endl;
}