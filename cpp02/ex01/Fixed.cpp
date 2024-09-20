#include "Fixed.hpp"

Fixed::Fixed() : point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : point(other.point) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int point) {
	std::cout << "Int constructor called" << std::endl;
	this->point = point * (1 << this->bits);
}

Fixed::Fixed(const float point) {
	std::cout << "Float constructor called" << std::endl;
	this->point = roundf(point * (1 << this->bits));
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->point = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	return (point);
}
void Fixed::setRawBits(int const raw) {
	point = raw;
}
float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->point) / (1 << this->bits));
}

int		Fixed::toInt( void ) const {
	return (this->point >> this->bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}