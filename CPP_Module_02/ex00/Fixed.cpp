#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &F) {
    std::cout << "Copy constructor called" << std::endl;
    this->_val = F.getRawBits();
}

Fixed& Fixed::operator=(Fixed const& F) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &F)
        this->_val = F.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    return (this->_val);
}

void Fixed::setRawBits(int const raw) {
    this->_val = raw;
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}