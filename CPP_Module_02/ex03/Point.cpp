#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) { }

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y) { }

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) { }

Point::Point( const Point &F): _x(F._x), _y(F._y) {}

Point& Point::operator=(Point const& P) {
    (void) P;
	return *this;
}

Point::~Point(){
}

float Point::sign(const Point &a, const Point &b, const Point &c)
{
	Fixed	fixed;

	fixed = (a._x - c._x) * (b._y - c._y) - (b._x - c._x) * (a._y - c._y);
	return (fixed.toFloat());
}

Fixed Point::getX(void) const {
    return (this->_x);
}

Fixed Point::getY(void) const {
    return (this->_y);
}

std::ostream &operator<< (std::ostream &out, const Point &P)
{
	out << "(" << P.getX() << "," << P.getY() << ")";
	return (out);
}