#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"
#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal();
		virtual void	make_sound() const = 0;
		virtual std::string	getType() const;

	protected:
		std::string type;
};

#endif