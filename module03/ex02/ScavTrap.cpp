#include "ScavTrap.hpp"

void	ScavTrap::challengeNewcomer(void) {
	std::string challenge[5] = {
		"Orochimaru Style: Body Replacement Technique",
		"Release of Fire: The technique of a powerful fireball",
		"Geijutsu wa bakuhatsu da",
		"Forbidden Iwagakure technique",
		"Amaterasu"
	};
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " Give some challenge: learn " << challenge[rand() % 5] << RESET << std::endl;
		setEnergy(10);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 75 energy points" << RESET << std::endl;

}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}

ScavTrap::ScavTrap() {}

ScavTrap::~ScavTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}