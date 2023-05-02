#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"


int main()
{
	Weapon mizrak = Weapon("Spirit");

	HumanA ali("Ali", &mizrak);
	ali.attack();
	mizrak.setType("Sword");
	ali.attack();

	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.set_weapon(&club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}