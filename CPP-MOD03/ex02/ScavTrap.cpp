#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	this->name = "ScavTrap";
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	cout << "Default Constructor called for ScaTrap" << endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name){
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	cout << "ScavTrap Constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy) {
	cout << "ScavTrap Copy Constructor called" << endl;
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy){
	this->energy_points = cpy.energy_points;
	this->name = cpy.name;
	this->hit_points = cpy.hit_points;
	this->attack_damage = cpy.attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap Destructor called" << endl;
}

void ScavTrap::attack(const std::string &target) {
	if (this->energy_points > 0) {
		cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage
			 << " points of damage!" << endl;
		this->energy_points--;
	}else
		cout << "Not enough energy points" << endl;
}

void ScavTrap::guardGate() {
	cout << "ScavTrap is now in Gate keeper mode" << endl;
}
