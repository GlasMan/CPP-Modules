#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	this->name = "";
	this->ClapTrap::name = "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	cout << "DiamondTrap Default Constructor called" << endl;
}

DiamondTrap::DiamondTrap(const std::string &name) {
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hit_points = FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	cout << "DiamondTrap Constructor called" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), FragTrap(), ScavTrap(){
	*this = cpy;
}

DiamondTrap::~DiamondTrap() {
	cout << "DiamondTrap Destructor called" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy) {
	this->name = cpy.name;
	this->ClapTrap::name = cpy.ClapTrap::name;
	this->attack_damage = cpy.attack_damage;
	this->energy_points = cpy.energy_points;
	this->hit_points = cpy.hit_points;
	return (*this);
}

void DiamondTrap::attack(const std::string &target) {
	this->ScavTrap::attack(target);
}