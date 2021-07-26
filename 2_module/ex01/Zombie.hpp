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


Zombie* zombieHorde( int N, std::string name );

#endif