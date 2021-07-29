#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap " << FragTrap::name << " is created!" << std::endl;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
}

FragTrap::FragTrap(const std::string &name) {
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap " << FragTrap::name << " is created!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj2) {
	this->name = obj2.name;
	this->hit_points = obj2.hit_points;
	this->energy_points = obj2.energy_points;
	this->attack_dmg = obj2.attack_dmg;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &obj2) {
	*this = obj2;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap is died! Bye Bye " << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << this->name << " gives everybody HIGH FIVE!!!" << std::endl;
}

void	FragTrap::attack(std::string const &target) {
	std::cout << "FragTrap " << FragTrap::name << " attacks " << target << ", causing " << FragTrap::attack_dmg << " points of damage!" << std::endl;
}
