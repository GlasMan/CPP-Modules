#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
	ClapTrap a("Burak");
	cout << "1" << endl;
	ScavTrap b("Eyup");
	cout << "2" << endl;
	ScavTrap c(b);
	cout << "3" << endl;
	a.set_attack(4);
	b.guardGate();
	b.attack("Burak");

}