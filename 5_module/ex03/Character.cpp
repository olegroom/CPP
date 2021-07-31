#include "Character.hpp"

Character::Character() {
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = nullptr;
	this->name = "default";
}
Character::Character(std::string const &name) {
	for (size_t i = 0; i < 4; i++)
		this->materias[i] = nullptr;
	this->name = name; 
}

Character::Character(const Character &obj2) { *this = obj2; }
Character::~Character() {
	for (size_t i = 0; i < 4; i++)
		if (this->materias[i] != nullptr)
			delete this->materias[i];
}
Character& Character::operator=(const Character &obj2) {
	for (size_t i = 0; i < 4; i++)
		if (this->materias[i] != nullptr)
			delete this->materias[i];
	for (size_t i = 0; i < 4; i++)
		if (obj2.materias[i] != nullptr)
			this->materias[i] = obj2.materias[i]->clone();
	this->name = obj2.name;
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	for (size_t i = 0; i < 4; i++)
		if (materias[i] == nullptr)
		{
			materias[i] = m->clone();
			return ;
		}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4 && this->materias[idx] != nullptr)
		this->materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter & target) {
	if (this->materias[idx] != nullptr)
		this->materias[idx]->use(target);
}

