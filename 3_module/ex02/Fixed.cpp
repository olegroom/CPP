#include "Fixed.hpp"
#include <string>
#include <iostream>
#include <cmath>

Fixed::Fixed(){
	this->fixed_p_value = 0;
}

Fixed::Fixed(const Fixed &f2) {
	*this = f2;
}

Fixed::Fixed(const int value) {
	this->fixed_p_value = (value << numb_frac_bits);
}

Fixed::Fixed(const float value) {
	this->fixed_p_value = roundf(value * (1 << numb_frac_bits));
}

Fixed::~Fixed(){
}

bool Fixed::operator>(Fixed const &op) const {
	return (this->getRawBits() > op.getRawBits());
}

bool Fixed::operator<(Fixed const &op) const {
	return (this->getRawBits() < op.getRawBits());
}

bool Fixed::operator>=(Fixed const &op) const {
	return (this->getRawBits() >= op.getRawBits());
}

bool Fixed::operator<=(Fixed const &op) const {
	return (this->getRawBits() <= op.getRawBits());
}

bool Fixed::operator==(Fixed const &op) const {
	return (this->getRawBits() == op.getRawBits());
}

bool Fixed::operator!=(Fixed const &op) const {
	return (this->getRawBits() != op.getRawBits());
}

Fixed& Fixed::operator = (const Fixed &f2) {
	this->fixed_p_value = f2.getRawBits();
	return (*this);
}

Fixed Fixed::operator + (const Fixed &f2) {
	Fixed res(*this);
	res.setRawBits(this->getRawBits() + f2.getRawBits());
	return (res);
}

Fixed Fixed::operator - (const Fixed &f2) {
	Fixed res(*this);
	res.setRawBits(this->getRawBits() - f2.getRawBits());
	return (res);
}

Fixed Fixed::operator / (const Fixed &f2) {
	Fixed res(*this);
	res.setRawBits((this->getRawBits() * (1 << Fixed::numb_frac_bits))/f2.getRawBits());
	return (res);
}

Fixed Fixed::operator * (const Fixed &f2) {
	Fixed res(*this);
	res.setRawBits((this->getRawBits() * f2.getRawBits()) / (1 << Fixed::numb_frac_bits));
	return (res);
}

Fixed Fixed::operator--(int) {
	Fixed res(*this);
	this->operator--();
	return (res);
}

Fixed Fixed::operator--() {
	this->fixed_p_value--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed res(*this);
	this->operator++();
	return (res);
}

Fixed Fixed::operator++() {
	this->fixed_p_value++;
	return (*this);
}

const Fixed &Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

const Fixed &Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed &Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed &max(Fixed& f1, Fixed& f2) {
	if (f1 > f2)
		return (f1);
	else
		return (f2);
}

Fixed &min(Fixed& f1, Fixed& f2) {
	if (f1 < f2)
		return (f1);
	else
		return (f2);
}

int	Fixed::getRawBits(void) const {
	return (this->fixed_p_value);
}

void	Fixed::setRawBits( int const raw_bits) {
	this->fixed_p_value = raw_bits;
}

int		Fixed::toInt(void) const {
	return ((int)this->fixed_p_value/(int)(1 << this->numb_frac_bits));
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_p_value/(float)(1 << this->numb_frac_bits));
}

std::ostream &operator << (std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return (out);
}

