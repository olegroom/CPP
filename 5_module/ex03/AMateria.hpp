#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &);
	AMateria &operator=(const AMateria &);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif