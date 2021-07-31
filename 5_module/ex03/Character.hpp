#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
protected:
	std::string name;
	int count;
	AMateria *materias[4];
public:
	Character();
	Character(std::string const &name);
	Character(const Character &);
	Character &operator=(const Character &);
	virtual ~Character();

	std::string const & getName() const;
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void equip(AMateria* m);
};

#endif