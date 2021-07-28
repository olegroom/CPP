#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixed_p_value = 0;
}

Fixed::Fixed(const Fixed &f2) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f2;
}

Fixed::Fixed(const int value) {
	std::cout << "Int constructor called" << std::endl;
	this->fixed_p_value = (value << numb_frac_bits);
}

Fixed::Fixed(const float value) {
	std::cout << "Float constructor called" << std::endl;
	this->fixed_p_value = roundf(value * (1 << numb_frac_bits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}


void Fixed::operator = (const Fixed &f2) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_p_value = f2.getRawBits();
}


int	Fixed::getRawBits(void) const {
	return (this->fixed_p_value);
}

void	Fixed::setRawBits( int const raw_bits) {
	this->fixed_p_value = raw_bits;
}

int		Fixed::toInt(void) const {
	return (this->fixed_p_value >> numb_frac_bits);
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_p_value/(float)(1 << this->numb_frac_bits));
}

std::ostream &operator << (std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return (out);
}

