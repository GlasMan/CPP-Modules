#include "DiamondTrap.hpp"
int main()
{
	DiamondTrap a("Burak");
	DiamondTrap b("Eyup");
	DiamondTrap c(a);

	a.whoAmI();
	cout << endl;
	a.attack("Burak");
	cout << endl;

	b.whoAmI();
	cout << endl;

	b.attack("Hakan");
	cout << endl;

	c.whoAmI();


}