#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap " << ScavTrap::name << " is created!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
}

ScavTrap::ScavTrap(const std::string &name) {
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj2) {
	this->name = obj2.name;
	this->hit_points = obj2.hit_points;
	this->energy_points = obj2.energy_points;
	this->attack_dmg = obj2.attack_dmg;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &obj2) {
	*this = obj2;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap is died! Bye Bye " << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap has entered in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target) {
	std::cout << "ScavTrap " << ScavTrap::name << " attacks " << target << ", causing " << ScavTrap::attack_dmg << " points of damage!" << std::endl;
}
