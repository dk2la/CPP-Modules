#include "SuperTrap.hpp"

SuperTrap&		SuperTrap::operator=(const SuperTrap &superTrap) {
	return (*this);
}

SuperTrap::SuperTrap(const SuperTrap& superTrap): ClapTrap(superTrap), FragTrap(superTrap), NinjaTrap(superTrap) {}

SuperTrap::SuperTrap(const std::string& name): ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}

SuperTrap::SuperTrap() {}

SuperTrap::~SuperTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}