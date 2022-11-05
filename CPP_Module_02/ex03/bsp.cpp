#include "Point.hpp"
#include <stdio.h>

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float	s1, s2, s3;
	bool neg, pos;

	s1 = Point::sign(point, a, b);
	s2 = Point::sign(point, b, c);
	s3 = Point::sign(point, c, a);

	neg = (s1 < 0) || (s2 < 0) || (s3 < 0);
    pos = (s1 > 0) || (s2 > 0) || (s3 > 0);

    return !(neg && pos);
}