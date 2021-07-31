#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource &operator=(const MateriaSource &);
	virtual ~MateriaSource();

	AMateria *Source[4];

	void	learnMateria(AMateria*);
	AMateria *createMateria(std::string const &type);
};

#endif