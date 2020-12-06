#include "FragTrap.hpp"

void			FragTrap::takeDamageSuperAttack(void) {
	int		damage[5] = {
		0,
		25,
		50,
		75,
		100
	};
	if (this->_hitPoints - damage[rand() % 5] + this->_armourDamageReduction <= 0)
	 	std::cout << RED << this->_name << "IS DEAD!" << RESET << std::endl;
	else {
		this->_hitPoints -= damage[rand() % 5] - this->_armourDamageReduction;
		std::cout << BLUE << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " has taken damage from " << this->_name << RESET << std::endl;
	}
}

void			FragTrap::setEnergy(unsigned int energy) {
	if (this->_energyPoints - energy <= 0)
		std::cout << RED << "OHH... I WANT DO DO THIS, BUT NOT TODAY (HAVE NO CHAKRA)" << RESET << std::endl;
	else
		this->_energyPoints -= energy;
}

std::string		FragTrap::getName(void) const {
	return (this->_name);
}

void	FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints + amount >= this->_maxHitPoints) {
		this->_hitPoints = this->_maxHitPoints;
		std::cout << YELLOW << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " REBORN TO THE FULL HP" << RESET << std::endl;
	}
	else {
		this->_hitPoints += amount;
		std::cout << YELLOW << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " REBORN" << RESET << std::endl;
	}
	if (this->_energyPoints + amount >= this->_maxEnergyPoints) {
		this->_energyPoints = this->_maxEnergyPoints;
		std::cout << YELLOW << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " RESTOCKED THE CHAKRA TO THE FULL" << RESET << std::endl;
	}
	else {
		this->_energyPoints += amount;
		std::cout << YELLOW << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " RESTOCKED THE CHAKRA" << RESET << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const& target) {
	std::string attacks[5] = {
		"Orochimaru Style: Body Replacement Technique",
		"Release of Fire: The technique of a powerful fireball",
		"Geijutsu wa bakuhatsu da",
		"Forbidden Iwagakure technique",
		"Amaterasu"
	};
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " jutu " << attacks[rand() % 5] << RESET << std::endl;
		setEnergy(75);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 75 energy points" << RESET << std::endl;

}

void	FragTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints - amount + this->_armourDamageReduction <= 0)
	 	std::cout << RED << this->_name << "IS DEAD!" << RESET << std::endl;
	else {
		this->_hitPoints -= amount - this->_armourDamageReduction;
		std::cout << BLUE << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " has taken damage from " << this->_name << RESET << std::endl;
	}
}

void	FragTrap::meleeAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his hand" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}

void	FragTrap::rangedAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his gun" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string &name): _hitPoints(100), _maxHitPoints(100), _energyPoints(100),
		_maxEnergyPoints(100), _level(1), _name(name), _meleeAttackDamage(30),
		_rangeAttackDamage(20), _armourDamageReduction(5) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}

FragTrap&		FragTrap::operator=(const FragTrap &fragTrap) {
	_hitPoints = fragTrap._hitPoints;
	_maxHitPoints = fragTrap._maxHitPoints;
	_energyPoints = fragTrap._energyPoints;
	_maxEnergyPoints = fragTrap._maxEnergyPoints;
	_level = fragTrap._level;
	_name = fragTrap._level;
	_meleeAttackDamage = fragTrap._meleeAttackDamage;
	_rangeAttackDamage = fragTrap._rangeAttackDamage;
	_armourDamageReduction = fragTrap._armourDamageReduction;
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
	return (*this);
}

FragTrap::FragTrap() {}

FragTrap::~FragTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}