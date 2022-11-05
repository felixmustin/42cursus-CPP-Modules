#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(val << _fractionBit);
}

Fixed::Fixed(float const val) {
    std::cout << "Float constructor called" << std::endl;
    setRawBits(roundf(val * (1 << _fractionBit)));
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

float Fixed::toFloat( void ) const {
    return ((float) this->_val) / (1 << _fractionBit);
}

int Fixed::toInt( void ) const {
    return(this->_val >> _fractionBit);
}

std::ostream &operator<< (std::ostream &out, const Fixed  &fix)
{
	out << fix.toFloat();
	return (out);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called " << std::endl;
}