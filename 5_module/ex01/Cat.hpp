#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(const Cat &);
		Cat &operator=(const Cat &);

		void	make_sound() const;
		std::string	getType() const;

	private:
		Brain *ptr_to_brain;
};

#endif