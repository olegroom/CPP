#include "Zombie.hpp"
#include <string>

void randomChump( std::string name ) {
	Zombie z2 = *(newZombie(name));
	z2.announce();
}