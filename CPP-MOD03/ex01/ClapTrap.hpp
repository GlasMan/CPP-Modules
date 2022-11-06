#ifndef CLABTRAP_HPP
#define CLABTRAP_HPP


#include <iostream>
#include <string>

using std::cout;
using std::endl;

class ClapTrap
{
	private:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &cpy);
		virtual ~ClapTrap();
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	set_attack(unsigned int damage) {attack_damage = damage;}
		unsigned int get_attack(){return  attack_damage;}
		unsigned int get_hp(){return hit_points;}
		unsigned int get_ep(){return energy_points;}
		ClapTrap &operator= (const ClapTrap &cpy);
};

#endif