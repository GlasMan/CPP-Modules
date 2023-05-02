#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with their " << _weapon_type->getType() << std::endl;
}

void HumanB::set_weapon(Weapon *weapon)
{
	_weapon_type = weapon;
}