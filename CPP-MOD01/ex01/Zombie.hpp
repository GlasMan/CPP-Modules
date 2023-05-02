#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

class Zombie
{
    private:
        string name;
    public:
		~Zombie();
        void	set_name(string a){ name = a;}
		void	announce();
};

Zombie* newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif