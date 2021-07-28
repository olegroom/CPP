#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
private:
	int fixed_p_value;
	const static int numb_frac_bits = 8;
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed& operator = (const Fixed &);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const );
};

#endif