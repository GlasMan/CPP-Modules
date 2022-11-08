#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();

		ScavTrap &operator= (const ScavTrap &cpy);
		void	attack(const std::string &target);
		virtual unsigned int get_attack(){return  this->attack_damage;}
		virtual unsigned int get_hp(){return this->hit_points;}
		virtual unsigned int get_ep(){return this->energy_points;}
		void	guardGate();
};

#endif