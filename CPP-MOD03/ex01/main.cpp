#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
	ScavTrap b("Eyup");
	cout << endl;
    cout << "Hit	point: " << b.get_hp() << endl;
    cout << "Energy	point: " << b.get_ep() << endl;
    cout << "Damage	point: " << b.get_attack() << endl << endl;

	b.guardGate();
	b.attack("Burak");
    b.takeDamage(118);
	cout << "after attack new hp is " << b.get_hp() << endl;
	b.beRepaired(12);
    cout << "after repair new hp is " << b.get_hp() << endl << endl;
    //For "virtual" explanation
	/*ClapTrap *p = new ClapTrap;
	ScavTrap a;
	p = &a;
	cout << endl;
	p->attack("Salih");
	cout << endl;
	p->attack("esat");*/
}