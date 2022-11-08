#ifndef CLABTRAP_HPP
#define CLABTRAP_HPP


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
		virtual ~ClapTrap();
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_attack(unsigned int damage) {this->attack_damage = damage;}
		virtual unsigned int get_attack(){return  this->attack_damage;}
		virtual unsigned int get_hp(){return this->hit_points;}
		virtual unsigned int get_ep(){return this->energy_points;}
		virtual ClapTrap &operator= (const ClapTrap &cpy);
};

#endif