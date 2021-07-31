#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj2) {
	for (size_t i = 0; i < 100; i++)
		this->ideas[i] = obj2.ideas[i];
	return (*this);
}

Brain::Brain(const Brain &obj2) {
	*this = obj2;
}