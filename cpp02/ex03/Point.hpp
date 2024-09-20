#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cmath>
#include "Fixed.hpp"

class Point
{
	private:
		Fixed x;
		Fixed y;

	public:
		Point();
		Point(const float x, const float y);
		Point(const Point& other);
		Point&	operator=(const Point& other);
		~Point();

		float getX() const;
		float getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif