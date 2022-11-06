#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

class ScavTrap : public ClapTrap
{
	private:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &cpy);
		~ScavTrap();

		virtual ScavTrap &operator= (const ScavTrap &cpy);
		void	attack(const std::string &target);
		void	guardGate();

};

#endif