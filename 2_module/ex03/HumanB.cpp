#include "HumanB.hpp"


HumanB::HumanB (std::string name) {
	this->name = name;
	this->weap = NULL;
}

HumanB::~HumanB () {
}

void	HumanB::setWeapon(const Weapon &weapon) {
	this->weap = &weapon;
}

void	HumanB::attack() const {
	if (this->weap != NULL)
		std::cout << HumanB::name << " attacks with his " << this->weap->getType() << std::endl;
	else
		std::cout << HumanB::name << " don't have a weapon" << std::endl;
}