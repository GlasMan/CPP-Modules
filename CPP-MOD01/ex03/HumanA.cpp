#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon_type = weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon_type->getType() << std::endl;
}