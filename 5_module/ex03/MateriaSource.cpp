#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (size_t i = 0; i < 4; i++)
		Source[i] = nullptr;
}

MateriaSource::~MateriaSource() {
	for (size_t i = 0; i < 4; i++)
		delete Source[i];
}
MateriaSource &MateriaSource::operator=(const MateriaSource &obj2) {
	for (size_t i = 0; i < 4; i++)
		delete Source[i];
	for (size_t i = 0; i < 4; i++)
		if (obj2.Source[i] != nullptr)
			this->Source[i] = obj2.Source[i]->clone();
	return (*this);
}
MateriaSource::MateriaSource(const MateriaSource &obj2) {
	*this = obj2;
}

void	MateriaSource::learnMateria(AMateria *materia) {
	for (size_t i = 0; i < 4; i++)
		if (this->Source[i] == nullptr)
		{
			this->Source[i] = materia;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (size_t i = 0; i < 4; i++)
		if (Source[i] != nullptr)
			if (type.compare(Source[i]->getType()) == 0)
				return (Source[i]);
	return (0);
}