#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
}

Cat::~Cat() {}

Cat &Cat::operator=(const Cat & obj2) {
	this->type = obj2.type;
	return(*this);
}

Cat::Cat(const Cat &obj2) {
	*this = obj2;
}

void	Cat::make_sound() const {
	std::cout << Cat::type << " says MEOWW" << std::endl;
}

std::string Cat::getType() const {
	return (this->type);
}