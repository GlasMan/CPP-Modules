#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP


#include <iostream>
#include <string>
#include <unistd.h>

using std::cout;
using std::endl;

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		~ClapTrap();
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_attack(unsigned int damage) {attack_damage = damage;}
		virtual unsigned int get_attack(){return  attack_damage;}
		unsigned int get_hp(){return hit_points;}
		unsigned int get_ep(){return energy_points;}
		virtual ClapTrap &operator= (const ClapTrap &cpy);
};

#endif