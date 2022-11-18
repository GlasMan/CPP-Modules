#include "FragTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
	FragTrap f("Burak");
    cout << endl;
	cout << "Hit	point: " << f.get_hp() << endl;
	cout << "Energy	point: " << f.get_ep() << endl;
	cout << "Damage	point: " << f.get_attack() << endl << endl;
	f.highFivesGuys();
	sleep(2);
	cout << endl;
	f.attack("Eyup");
	cout << endl;
	f.takeDamage(54);
	cout << endl;
	f.beRepaired(24);
	cout << endl;
}