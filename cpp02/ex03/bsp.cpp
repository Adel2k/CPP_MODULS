#include "Point.hpp"
#include "Fixed.hpp"


float	count_area(Point const a, Point const b, Point const c) {
	float res;

	res = (a.getX()*(b.getY() - c.getY())) + (b.getX()*(c.getY() - a.getY())) + (c.getX()*(a.getY() - b.getY()));
	if (res < 0)
		return (-res);
	return (res);
}

bool edge(Point const a, Point const b, Point const point)
{
	return ((b.getY() - a.getY())*(point.getX() - a.getX()) == (point.getY() - a.getY())*(b.getX() - a.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float first = count_area(a, b, point);
	float second = count_area(a, point, c);
	float third = count_area(c, point, b);
	float global = count_area(a, b, c);

	if ((a.getX() == point.getX() && a.getY() == point.getY()) || (b.getX() == point.getX() && b.getY() == point.getY()) || (c.getX() == point.getX() && c.getY() == point.getY()))
		return false;
	if (first + second + third == 0)
		return false;
	if (edge(a, b, point) || edge(a, c, point) || edge(c, b, point))
		return false;
	if (first + second + third != global)
		return false ;
	return true ;
}
