#include "Fixed.hpp"

Fixed::Fixed() : point(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : point(other.point) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other) {
		return *this;
	}
	this->point = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return (point);
}
void Fixed::setRawBits(int const raw) {
	point = raw;
}