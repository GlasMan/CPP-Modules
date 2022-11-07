#include "ClapTrap.hpp"
#include <unistd.h>

int main()
{
	ClapTrap a("Burak");
	ClapTrap b("Eyup");
	a.set_attack(4);
	b.set_attack(5);
	while(b.get_hp() && a.get_hp() && a.get_ep() && b.get_ep()) {
		a.attack("Eyup");
		if (a.get_ep() > 0 ||a.get_hp())
			b.takeDamage(4);
		b.beRepaired(3);
		b.attack("Burak");
		if (b.get_ep() && b.get_hp())
			a.takeDamage(5);
		a.beRepaired(3);
		sleep(3);
	}
}