#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->name = "";
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	cout << "Default Constructor called for FragTrap" << endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	cout << "FragTrap Constructor called" << endl;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy){
	cout << "FragTrap Copy Constructor called" << endl;
	*this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy) {
	this->energy_points = cpy.energy_points;
	this->name = cpy.name;
	this->hit_points = cpy.hit_points;
	this->attack_damage = cpy.attack_damage;
	return (*this);
}

FragTrap::~FragTrap() {
	cout << "FragTrap Destructor called" << endl;
}

void FragTrap::highFivesGuys() {
	cout << "Hey guys how about a high five???" << endl;
}