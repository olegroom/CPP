#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
	this->ptr_to_brain = new Brain();
}

Dog::~Dog() {
	delete this->ptr_to_brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog & obj2) {
	this->type = obj2.type;
	delete this->ptr_to_brain;
	ptr_to_brain = new Brain();
	*ptr_to_brain = *obj2.ptr_to_brain;
	return(*this);
}

Dog::Dog(const Dog &obj2) {
	*this = obj2;
}

void	Dog::make_sound() const {
	std::cout << Dog::type << " says GaVv" << std::endl;
}

std::string	Dog::getType() const {
	return (this->type);
}