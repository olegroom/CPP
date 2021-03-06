#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
}

Animal::Animal(const Animal &obj2) {
	*this = obj2;
}

Animal &Animal::operator=(const Animal &obj2) {
	this->type = obj2.type;
	return (*this);
}

Animal::~Animal() {};

void	Animal::make_sound() const {}

std::string	Animal::getType() const {
	return (this->type);
}