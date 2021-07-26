#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
	public:
		void	attack() const;
		void	setWeapon(const Weapon &);
		HumanB(std::string name);
		~HumanB();

	private:
		const Weapon *weap;
		std::string name;
};

#endif