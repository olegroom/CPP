#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal {
	public:
		virtual void	make_sound() const;
		virtual std::string	getType() const;

	protected:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
		std::string type;
};

#endif