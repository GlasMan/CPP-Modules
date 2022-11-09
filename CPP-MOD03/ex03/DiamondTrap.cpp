#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->name = "Diamond";
	this->ClapTrap::name = "DiamondTrap_clap_name";
	this->FragTrap::hit_points = 100;
	this->ScavTrap::energy_points = 50;
	this->FragTrap::attack_damage = 30;
	cout << "DiamondTrap Default Constructor called" << endl;
}

DiamondTrap::DiamondTrap(const std::string name) {
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->FragTrap::hit_points = 100;
	this->ScavTrap::energy_points = 50;
	this->FragTrap::attack_damage = 30;
	cout << "DiamondTrap Constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy){
	cout << "DiamondTrap copy constructor called" << endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap Destructor called" << endl;
}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	cout << "Hi my name is: " << this->name << ", and my ClapTrap name is: " << ClapTrap::name << endl;
}
