#include "Cure.hpp"

Cure::Cure() { this->type = "cure"; }


Cure::~Cure() {}
Cure::Cure(const Cure &obj2) { *this = obj2; }
Cure &Cure::operator=(const Cure &obj2) {
	this->type = obj2.type;
	return (*this);
}

AMateria* Cure::clone() const {
	AMateria *object = new Cure();
	return (object);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}