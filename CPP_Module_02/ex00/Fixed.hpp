#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

private:
    int _val;
    static const int fraction_bits = 8;
public:
    Fixed(void);
    Fixed(const Fixed &);
    Fixed &operator=(const Fixed&);
    ~Fixed(void);
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif