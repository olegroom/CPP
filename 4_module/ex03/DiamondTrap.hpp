#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(const std::string &);
		DiamondTrap &operator=(DiamondTrap &);
		DiamondTrap(DiamondTrap &);
		~DiamondTrap();

		void	whoAmI();
		void	attack(std::string const &);

	private:
		std::string name;
};

#endif