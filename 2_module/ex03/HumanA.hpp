#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
	public:
		void	attack() const;
		HumanA(std::string, const Weapon &);
		~HumanA();

	private:
		const Weapon &weap;
		std::string name;
};

#endif