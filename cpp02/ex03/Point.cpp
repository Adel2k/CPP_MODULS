#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float x, const float y) : x(x), y(y) {}


Point::Point(const Point& other) : x(other.x), y(other.y) {
	// std::cout << "Copy constructor called" << std::endl;
}

Point&	Point::operator=(const Point& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->x = other.x;
	this->y = other.y;
	return *this;
}

Point::~Point() {}

float Point::getX() const {
	return (x.toFloat());
}

float Point::getY() const {
	return (y.toFloat());
}
