#include "Ice.hpp"

Ice::Ice() { this->type = "ice"; }
Ice::~Ice() {}
Ice::Ice(const Ice &obj2) { *this = obj2; }
Ice &Ice::operator=(const Ice &obj2) {
	this->type = obj2.type;
	return (*this);
}

AMateria* Ice::clone() const {
	AMateria *object = new Ice();
	return (object);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
