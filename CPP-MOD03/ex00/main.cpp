#include "ClapTrap.hpp"
#include <unistd.h>

int main()
{
	ClapTrap a("Burak");
    cout << endl;

    ClapTrap b("Eyup");
    cout << endl;

    cout << "Hit	point: " << a.get_hp() << endl;
    cout << "Energy	point: " << a.get_ep() << endl;
    cout << "Damage	point: " << a.get_attack() << endl << endl;

	a.set_attack(4);
	b.set_attack(5);
    cout << endl;

    a.attack("Eyup");
    b.takeDamage(a.get_attack());
    cout << endl;

    b.attack("Burak");
    a.takeDamage(b.get_attack());
    cout << endl;

    a.beRepaired(3);
    b.beRepaired(3);
    cout << endl;
}