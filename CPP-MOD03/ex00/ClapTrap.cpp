#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
	cout << "Constructor called" << endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	cout << "Copy constructor called" << endl;
	*this = cpy;
}

ClapTrap::~ClapTrap() {
	cout << "Destructor called" << endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy) {
	this->name = cpy.name;
	this->attack_damage = cpy.attack_damage;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (this->energy_points > 0) {
		cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage
			 << " points of damage!" << endl;
		this->energy_points--;
	}else
		cout << "Not enough energy points" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	cout << "ClapTrap " << this->name << " taking damage";
	this->hit_points -= amount;
	cout << "(After taking damage the new HP is " << this->hit_points << ")." << endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energy_points > 0) {
		cout << "ClapTrap " << this->name << " repairing it self (!This will cause an energy point!)" << endl;
		this->hit_points += amount;
		this->energy_points--;
	}else
		cout << "Not enough energy points" << endl;
}