#include "Karen.hpp"

int		main(int ac, char **av) {
	Karen kr1;

	if (ac != 2)
	{
		std::cout << "Wrong number of args" << std::endl;
		return (1);
	}
	kr1.complain(av[1]);
	return (0);
}