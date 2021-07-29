#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->name = "default";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name) {
	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_dmg = FragTrap::attack_dmg;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &obj2) {
	this->name = obj2.name;
	this->energy_points = obj2.energy_points;
	this->hit_points = obj2.hit_points;
	this->attack_dmg = obj2.attack_dmg;
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap &obj2) {
	*this = obj2;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond trap is dead now" << std::endl;
}

void DiamondTrap::attack(std::string const &msg) {
	ScavTrap::attack(msg);
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamond's object name is " << this->name << std::endl;
	std::cout << "ClapTrap's name, which is grandparent of this is " << ClapTrap::name << std::endl;
}