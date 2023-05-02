#include "Weapon.hpp"

Weapon::Weapon(std::string tp)
{
	type = tp;
}

const string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(std::string tp)
{
	type = tp;
}