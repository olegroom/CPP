#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string 	name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_dmg;
public:
	void			attack(std::string const &target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);
	
	ClapTrap();
	ClapTrap(const ClapTrap &obj2);
	ClapTrap& operator=(const ClapTrap &);
	~ClapTrap();

	ClapTrap(std::string);
};

#endif