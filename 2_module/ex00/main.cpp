#include "Zombie.hpp"

int		main(void) {
	Zombie *z1 = newZombie("Egor");
	z1->announce();
	randomChump("Stanislav");
	randomChump("Olga");
	delete z1;
	return (0);
}