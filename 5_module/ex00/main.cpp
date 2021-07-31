#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int		main(void) {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->make_sound(); //will output the cat sound!
	j->make_sound();
	meta->make_sound();
	
	return (0);
}