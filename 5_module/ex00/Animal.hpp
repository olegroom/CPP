#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		~Animal();

	protected:
		virtual void	make_sound() = 0;
		std::string type;
};

#endif