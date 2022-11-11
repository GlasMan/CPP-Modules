#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &cpy);
		~FragTrap();
		virtual FragTrap &operator=(const FragTrap &cpy);
		void highFivesGuys();
};
#endif