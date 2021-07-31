#include "AMateria.hpp"

AMateria::AMateria() {}
AMateria::AMateria(std::string const &type) { this->type = type; }
AMateria::~AMateria() {}
AMateria::AMateria(const AMateria& obj2) { *this = obj2; }
AMateria &AMateria::operator=(const AMateria &obj2) {
	this->type = obj2.type;
	return (*this);
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	target.getName();
}