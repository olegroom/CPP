#include "Zombie.hpp"
#include <iostream>
#include <string>

void randomChump( std::string name ) {
	Zombie z2 = *(newZombie(name));
	z2.announce();
}