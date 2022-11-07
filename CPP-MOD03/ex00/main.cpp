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
		b.takeDamage(a.get_attack());
		b.beRepaired(a.get_attack() - 3);
		b.attack("Burak");
		a.takeDamage(b.get_attack());
		a.beRepaired(b.get_attack() - 3);
		sleep(3);
	}
}