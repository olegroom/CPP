#include "Fixed.hpp"
#include <string>
#include <iostream>

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->fixed_p_value = 0;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &f2) {
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_p_value = f2.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &f2) {
	std::cout << "Copy constructor called" << std::endl;
	*this = f2;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_p_value);
}

void	Fixed::setRawBits( int const raw_bits) {
	this->fixed_p_value = raw_bits;
}


