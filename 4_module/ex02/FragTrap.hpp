#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(const FragTrap&);
		FragTrap(const std::string &);
		FragTrap& operator=(FragTrap const &);
		~FragTrap();

		void	highFivesGuys(void);
		void	attack(std::string const &target);
};

#endif