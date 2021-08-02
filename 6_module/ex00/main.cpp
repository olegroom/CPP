#include "Bureaucrat.hpp"

int		main(void) {

try
{
	Bureaucrat v1("Vasya", 2);
	std::cout << v1;
	Bureaucrat o1("Oleg", 60);
	std::cout << o1;
	// Bureaucrat g1("Galina", 155);
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
	return (0);
}