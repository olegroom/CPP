#include "ClapTrap.hpp"

int		main(void) {
	ClapTrap obj1;
	ClapTrap obj2("Kostya");


	obj2.attack("Everything around");
	obj1.takeDamage(10);
	obj1.attack("Kostya");
	obj2.takeDamage(20);

	ClapTrap obj3("Vasiliy");
	obj3.attack("Kostya");
	obj2.beRepaired(30);
	return (0);
}