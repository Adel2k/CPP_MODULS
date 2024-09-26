#include "Fixed.hpp"

Fixed::Fixed() : point(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : point(other.point) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int point) {
	this->point = point * (1 << this->bits);
}

Fixed::Fixed(const float point) {
	this->point = roundf(point * (1 << this->bits));
}

Fixed&	Fixed::operator=(const Fixed& other) {
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	this->point = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	return (point);
}

void	Fixed::setRawBits(int const raw) {
	point = raw;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->point) / (1 << this->bits));
}

int Fixed::toInt( void ) const {
	return (this->point >> this->bits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

bool	Fixed::operator<(const Fixed& rs) const{
	if (point < rs.point)
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed& rs) const{
	if (point > rs.point)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& rs) const{
	if (point >= rs.point)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& rs) const{
	if (point <= rs.point)
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed& rs) const{
	if (point == rs.point)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& rs) const{
	if (point != rs.point)
		return true;
	return false;
}

Fixed const Fixed::operator+(const Fixed& rs) {
	Fixed	result;

	result.setRawBits(point + rs.point);
	return (result);
}

Fixed const Fixed::operator-(const Fixed& rs) {
	Fixed	result;

	result.setRawBits(point - rs.point);
	return (result);
}

Fixed const Fixed::operator*(const Fixed& rs) {
	Fixed	result;

	result.setRawBits(point * rs.point >> this->bits);
	return (result);
}

Fixed const Fixed::operator/(const Fixed& rs) {
	Fixed	result;

	result.setRawBits(point / rs.point >> this->bits);
	return (result);
}

Fixed& Fixed::operator++() {
	++point;
	return (*this);
}

Fixed const Fixed::operator++(int) {
	Fixed temp;

	temp = *this;
	point++;
	return(temp);
}

Fixed& Fixed::operator--() {
	--point;
	return (*this);
}

Fixed const Fixed::operator--(int) {
	Fixed temp;

	temp = *this;
	point--;
	return(temp);
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f2);
	return (f1);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const &Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed const	&Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1 > f2)
		return (f2);
	return (f1);
}