#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
# include <cmath>

class Fixed {

private:
    int _val;
    static const int _fractionBit = 8;
public:
    Fixed(void);
    Fixed(int const val);
    Fixed(float const val);
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed&);
    ~Fixed(void);

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    Fixed operator+(Fixed const &F) const;
    Fixed operator-(Fixed const &F) const;
    Fixed operator*(Fixed const &F) const;
    Fixed operator/(Fixed const &F) const;
	Fixed &operator--();
	Fixed operator--(int);
	Fixed &operator++();
	Fixed operator++(int);
    bool operator<(const Fixed &F) const;
    bool operator<=(const Fixed &F) const;
    bool operator>(const Fixed &F) const;
    bool operator>=(const Fixed &F) const;
    bool operator!=(const Fixed &F) const;
    bool operator==(const Fixed &F) const;

    static Fixed &min(Fixed &a, Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &min(Fixed const &a, Fixed const &b);
    static const Fixed &max(Fixed const &a, Fixed const &b);
};

std::ostream &operator << (std::ostream &out, const Fixed &F);

#endif