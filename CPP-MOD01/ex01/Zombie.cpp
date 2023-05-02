#include "Zombie.hpp"



void	Zombie::announce()
{
	cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::~Zombie()
{
	cout << "Destructor called " << name << " Destroyed" << endl;
}