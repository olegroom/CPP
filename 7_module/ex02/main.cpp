#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void);
void identify(Base* p);
void identify(Base& p);


Base	*generate(void) {
	srand(time(0));
	int i = (rand() % 3);
	switch (i)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		break;
	}
	return (NULL);
}

void	identify(Base *p) {
	A *a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base& p) {
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		B &b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
	try
	{
		C &c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
	}
}


int		main(void) {
	Base *res = generate();
	identify(res);
	identify(*res);
	return (0);
}