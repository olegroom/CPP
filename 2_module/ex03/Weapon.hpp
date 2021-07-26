#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
	public:
		Weapon(const std::string &);
		Weapon();
		~Weapon();
		
		void		setType(const std::string &);
		const std::string &getType() const;

	private:
		std::string weapon_type;
};

#endif