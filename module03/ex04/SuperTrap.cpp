#include "SuperTrap.hpp"

SuperTrap::SuperTrap(const SuperTrap& superTrap): ClapTrap(superTrap), FragTrap(superTrap), NinjaTrap(superTrap) {}

SuperTrap::SuperTrap(const std::string& name): ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}

SuperTrap&		SuperTrap::operator=(const SuperTrap &superTrap) {
	_hitPoints = superTrap._hitPoints;
	_maxHitPoints = superTrap._maxHitPoints;
	_energyPoints = superTrap._energyPoints;
	_maxEnergyPoints = superTrap._maxEnergyPoints;
	_level = superTrap._level;
	_name = superTrap._level;
	_meleeAttackDamage = superTrap._meleeAttackDamage;
	_rangeAttackDamage = superTrap._rangeAttackDamage;
	_armourDamageReduction = superTrap._armourDamageReduction;
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
	return (*this);
}

SuperTrap::SuperTrap() {}

SuperTrap::~SuperTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}