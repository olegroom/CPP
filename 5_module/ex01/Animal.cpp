#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout << "Animal is appear))" << std::endl;
}

Animal::Animal(const Animal &obj2) {
	*this = obj2;
}

Animal &Animal::operator=(const Animal &obj2) {
	this->type = obj2.type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "animal dying =(" << std::endl;
};

void	Animal::make_sound() const {}

std::string	Animal::getType() const {
	return (this->type);
}