#include "Zombie.hpp"

int main()
{
	Zombie *a;

	a = newZombie("Burak");
	a->announce();
	randomChump("ALI");
	delete a;
}