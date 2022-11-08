#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		FragTrap &operator=(const FragTrap &cpy);
		virtual unsigned int get_attack(){return  this->attack_damage;}
		virtual unsigned int get_hp(){return this->hit_points;}
		virtual unsigned int get_ep(){return this->energy_points;}
		void highFivesGuys();
};
#endif