#include "Bureaucrat.hpp"

int		main(void) {

try
{
	Bureaucrat v1("Vasya", 2);
	std::cout << v1 << std::endl;
	Form f1("f1", 50, 50);
	Form f2("f2", 1, 20);
	std::cout << f2 << std::endl;
	v1.signForm(f2);
	std::cout << std::endl << f2;


}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}
	return (0);
}