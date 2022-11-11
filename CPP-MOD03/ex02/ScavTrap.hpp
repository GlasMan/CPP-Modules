#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

using std::cout;
using std::endl;

class ScavTrap : public ClapTrap
{
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