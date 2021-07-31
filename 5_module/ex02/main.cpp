#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void) {

	// Animal an1;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	
	return (0);
}