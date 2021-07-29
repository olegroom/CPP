#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap(const std::string &);
		ScavTrap& operator=(ScavTrap const &);
		~ScavTrap();

		void	guardGate();
		void	attack(std::string const &target);
};

#endif