#include "Zombie.hpp"
#include <iostream>
#include <string>

void	Zombie::set_name(std::string name) {
	this->_name = name;
}

void	Zombie::announce() {
	std::cout << "<" << Zombie::_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void) {
	this->_name = "default";
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Some debugging message. Zombie " << this->_name << " is dead!" << std::endl;
}