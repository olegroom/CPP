#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void) {
	ClapTrap kostya("Kostya");

	ScavTrap scavObj;
	scavObj.guardGate();
	scavObj.attack("George");
	ScavTrap me("Oleg");
	me.attack("CPP Module 03");
	me.beRepaired(150);
	kostya.attack("Everything around");
	kostya.takeDamage(20);

	ClapTrap obj3("Vasiliy");
	obj3.attack("Kostya");
	kostya.beRepaired(30);
	return (0);
}