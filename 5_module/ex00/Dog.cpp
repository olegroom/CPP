#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
}

Dog::~Dog() {}

Dog &Dog::operator=(const Dog & obj2) {
	this->type = obj2.type;
	return(*this);
}

Dog::Dog(const Dog &obj2) {
	*this = obj2;
}

void	Animal::make_sound() {
	std::cout << std::endl;
}