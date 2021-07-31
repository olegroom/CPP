#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	protected:

	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure &);
		Cure &operator=(const Cure &);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif