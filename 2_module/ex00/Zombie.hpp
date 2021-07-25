#include <string>


class Zombie
{
public:
	void	announce(void);

	Zombie(void);
	Zombie(std::string);
	~Zombie();

private:
	std::string _name;
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );
