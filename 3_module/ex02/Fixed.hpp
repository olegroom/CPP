#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int fixed_p_value;
	const static int numb_frac_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed& operator = (const Fixed &);
	Fixed operator + (const Fixed &);
	Fixed operator - (const Fixed &);
	Fixed operator / (const Fixed &);
	Fixed operator * (const Fixed &);

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	bool operator>(Fixed const &op) const;
	bool operator<(Fixed const &op) const;
	bool operator>=(Fixed const &op) const;
	bool operator<=(Fixed const &op) const;
	bool operator==(Fixed const &op) const;
	bool operator!=(Fixed const &op) const;


	static Fixed &min(Fixed& f1, Fixed& f2);
	const static Fixed &min(const Fixed& f1, const Fixed& f2);
	static Fixed &max(Fixed& f1, Fixed& f2);
	const static Fixed &max(const Fixed& f1, const Fixed& f2);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const );

	Fixed(const int);
	Fixed(const float);
	float	toFloat(void) const;
	int		toInt(void) const;

};

Fixed &min(Fixed &f1, Fixed &f2);
Fixed &max(Fixed &f1, Fixed &f2);
std::ostream &operator << (std::ostream &out, const Fixed &obj);

#endif