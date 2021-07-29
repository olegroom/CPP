#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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

	FragTrap sc1;
	FragTrap sc2("Lisa");

	sc1.attack("Me");
	sc2.highFivesGuys();

	DiamondTrap d1("OLEG");

	d1.whoAmI();
	

	return (0);
}