#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					point;
		const static int	bits = 8;

	public:
		Fixed();
		Fixed(const int point);
		Fixed(const float point);
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& other);
		~Fixed();

		float	toFloat( void ) const;
		int		toInt( void ) const;

		//Getter
		int		getRawBits() const;

		//Setter
		void	setRawBits(int const raw);

		//Overloading
		bool	operator<(const Fixed& rs) const;
		bool	operator>(const Fixed& rs) const;
		bool	operator>=(const Fixed& rs) const;
		bool	operator<=(const Fixed& rs) const;
		bool	operator==(const Fixed& rs) const;
		bool	operator!=(const Fixed& rs) const;

		const Fixed	operator+(const Fixed& rs);
		const Fixed	operator-(const Fixed& rs);
		const Fixed	operator*(const Fixed& rs);
		const Fixed	operator/(const Fixed& rs);

		const Fixed	operator++(int);
		const Fixed	operator--(int);
		Fixed&	operator++();
		Fixed&	operator--();

		static Fixed&	min(Fixed& f1, Fixed& f2);
		static Fixed&	max(Fixed& f1, Fixed& f2);
		static const Fixed&	min(const Fixed& f1, const Fixed& f2);
		static const Fixed&	max(const Fixed& f1, const Fixed& f2);

};

std::ostream&	operator<<(std::ostream& out, const Fixed& fixed);







#endif