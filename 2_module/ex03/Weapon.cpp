#include "Weapon.hpp"

const std::string &Weapon::getType() const {
	return (this->weapon_type);
}

void	Weapon::setType(const std::string &type) {
	this->weapon_type = type;
}

Weapon::Weapon(const std::string &type) {
	weapon_type = type;
}

Weapon::Weapon() {
	weapon_type = "default";
}

Weapon::~Weapon() {
}