#include "DiamondTrap.hpp"
int main()
{
    ClapTrap x("Hakan");
    cout << endl;
    ScavTrap    b("Esat");
    cout << endl;
    FragTrap    c("Mert");
    cout << endl;
	DiamondTrap a("Burak");
    cout << endl;
    cout <<"c_hp: " << x.get_hp() << endl;
    cout << "c_ep: "<< x.get_ep() << endl;
    cout <<"c_attack: " << x.get_attack() << endl << endl;

    cout <<"f_hp: " << c.get_hp() << endl;
    cout << "f_ep: "<< c.get_ep() << endl;
    cout <<"f_attack: " << c.get_attack() << endl << endl;

    cout <<"s_hp: " << b.get_hp() << endl;
    cout << "s_ep: "<< b.get_ep() << endl;
    cout <<"s_attack: " << b.get_attack() << endl << endl;

    a.whoAmI();
    cout << endl;
    cout <<"d_hp: (from frag): " << a.get_hp() << endl;
    cout << "d_ep: (from scav): "<< a.get_ep() << endl;
    cout <<"d_attack: (from frag): " << a.get_attack() << endl << endl;
    cout << endl;
    a.attack("Eyup");
    cout << endl;
    a.takeDamage(100);
    a.takeDamage(100);
    cout << endl;
    a.beRepaired(12);
    cout << endl;

}
