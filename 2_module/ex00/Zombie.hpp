#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
public:
	void	announce(void);
	void	set_name(std::string);

	Zombie(void);
	Zombie(std::string);
	~Zombie();

private:
	std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif