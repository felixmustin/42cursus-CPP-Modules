#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

private:
    const Fixed _x;
    const Fixed _y;
public:
    Point(void);
    Point(const Fixed x, const Fixed y);
    Point(const float x, const float y);
    Point(const Point &);
    Point &operator=(const Point&);
    static float sign(const Point &a, const Point &b, const Point &c);
    ~Point(void);
    Fixed getX(void) const;
    Fixed getY(void) const;
};

std::ostream &operator << (std::ostream &out, const Point &P);
bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif