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
	void operator = (const Fixed &);
	~Fixed();
	int getRawBits( void ) const;
	void setRawBits( int const );

	Fixed(const int);
	Fixed(const float);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream &operator << (std::ostream &out, const Fixed &obj);

#endif