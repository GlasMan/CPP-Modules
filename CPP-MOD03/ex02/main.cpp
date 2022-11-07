#include "FragTrap.hpp"
int main()
{
	FragTrap *f = new FragTrap();
	cout << "Hit	point: " << f->get_hp() << endl;
	cout << "Energy	point: " << f->get_ep() << endl;
	cout << "Damage	point: " << f->get_attack() << endl;
	f->attack("Burak");
	cout << endl;
	f->takeDamage(100);
	cout << endl;
	f->beRepaired(24);
	cout << endl;
	f->highFivesGuys();
	sleep(2);
	cout << endl;

}