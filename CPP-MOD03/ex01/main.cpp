#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <unistd.h>

int main()
{
	ClapTrap a("Burak");
	cout << endl;
	ScavTrap b("Eyup");
	cout << "********** scavtrap copy **********" << endl<<endl;
	ScavTrap c(b);
	cout << endl;
	a.set_attack(4);
	b.guardGate();
	b.attack("Burak");
	a.takeDamage(b.get_attack());
	cout << "after attack new hp is " << a.get_hp() << endl;
	a.beRepaired(12);
	//For "virtual" explanation
	/*ClapTrap *p = new ClapTrap;
	ScavTrap a;
	p = &a;
	cout << endl;
	p->attack("Salih");
	cout << endl;
	p->attack("esat");
	 */
}