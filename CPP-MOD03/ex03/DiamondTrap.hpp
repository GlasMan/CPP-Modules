#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		~DiamondTrap();

		DiamondTrap &operator= (const DiamondTrap &cpy);
		void attack(const std::string &target);
		unsigned int get_attack(){return  this->attack_damage;}
		unsigned int get_hp(){return this->hit_points;}
		unsigned int get_ep(){return this->energy_points;}
		void whoAmI();

};

#endif