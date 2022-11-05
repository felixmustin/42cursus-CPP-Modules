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
};

std::ostream &operator << (std::ostream &out, const Fixed &F);

#endif