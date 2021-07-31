#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
	this->ptr_to_brain = new Brain();
}

Cat::~Cat() {
	delete this->ptr_to_brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat & obj2) {
	this->type = obj2.type;
	delete this->ptr_to_brain;
	ptr_to_brain = new Brain();
	*ptr_to_brain = *obj2.ptr_to_brain;
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