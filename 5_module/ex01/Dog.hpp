#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &);
		Dog& operator=(const Dog &);

		void		make_sound() const;
		std::string	getType() const;

	private:
		Brain *ptr_to_brain;
};

#endif