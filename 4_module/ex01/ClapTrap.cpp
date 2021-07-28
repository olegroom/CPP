#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "default";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 0;
	std::cout << "ClapTrap " << name << " is created." << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 0;
	std::cout << name << " is created!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj2) {
	this->name = obj2.name;
	this->hit_points = obj2.hit_points;
	this->energy_points = obj2.energy_points;
	this->attack_dmg = obj2.attack_dmg;
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap&obj2) {
	*this = obj2;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " is died! Bye Bye " << name << std::endl;
}

void	ClapTrap::attack(std::string const &target) {
	std::cout << ClapTrap::name << " attacks " << target << ", causing " << ClapTrap::attack_dmg << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	std::cout << ClapTrap::name << " is taking " << amount << " damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	std::cout << ClapTrap::name << " was healed by " << amount << " points" << std::endl;
}