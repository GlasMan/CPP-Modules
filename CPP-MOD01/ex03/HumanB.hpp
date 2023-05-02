#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon_type;
	public:
		HumanB(std::string name);
		void	attack();
		void	set_weapon(Weapon *weapon);
};

#endif