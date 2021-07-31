#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int		main(void) {
	// AMateria *cure = new Cure();
	// AMateria *ice = new Ice();
	// ICharacter *vas = new Character("Vasiliy");

	// vas->equip(ice);
	// vas->equip(cure);

	// vas->use(0, *vas);
	// vas->use(1, *vas);

	// vas->unequip(0);
	// vas->unequip(1);
	
	// vas->use(0, *vas);
	// vas->use(1, *vas);

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}