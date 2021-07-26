#include "Zombie.hpp"

int	main(void) {
	const int num_of_Zombies = 5;
	Zombie *horde = zombieHorde(num_of_Zombies, "Robot");
	for (int i = 0; i < num_of_Zombies; ++i)
		horde[i].announce();
	delete [] horde;
	horde = NULL;
	return (0);
}