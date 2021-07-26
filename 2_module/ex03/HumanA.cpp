#include "HumanA.hpp"

HumanA::HumanA (std::string name, const Weapon &weap): weap(weap) {
	this->name = name;
}

HumanA::~HumanA () {
}

void	HumanA::attack() const {
	std::cout << HumanA::name << " attacks with his " << HumanA::weap.getType() << std::endl;
}