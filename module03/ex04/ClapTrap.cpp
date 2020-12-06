#include "ClapTrap.hpp"

void			ClapTrap::takeDamageSuperAttack(void) {
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

void			ClapTrap::setEnergy(unsigned int energy) {
	if (this->_energyPoints - energy <= 0)
		std::cout << RED << "OHH... I WANT DO DO THIS, BUT NOT TODAY (HAVE NO CHAKRA)" << RESET << std::endl;
	else
		this->_energyPoints -= energy;
}

std::string		ClapTrap::getName(void) const {
	return (this->_name);
}

void	ClapTrap::beRepaired(unsigned int amount) {
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

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints - amount + this->_armourDamageReduction <= 0)
	 	std::cout << RED << this->_name << "IS DEAD!" << RESET << std::endl;
	else {
		this->_hitPoints -= amount - this->_armourDamageReduction;
		std::cout << BLUE << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " has taken damage from " << this->_name << RESET << std::endl;
	}
}

void	ClapTrap::meleeAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his hand" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}

void	ClapTrap::rangedAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his gun" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}

ClapTrap&		ClapTrap::operator=(const ClapTrap &clapTrap) {
	_hitPoints = clapTrap._hitPoints;
	_maxHitPoints = clapTrap._maxHitPoints;
	_energyPoints = clapTrap._energyPoints;
	_maxEnergyPoints = clapTrap._maxEnergyPoints;
	_level = clapTrap._level;
	_name = clapTrap._level;
	_meleeAttackDamage = clapTrap._meleeAttackDamage;
	_rangeAttackDamage = clapTrap._rangeAttackDamage;
	_armourDamageReduction = clapTrap._armourDamageReduction;
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(const std::string& name): _name(name), _hitPoints(1000), _maxHitPoints(1000), _energyPoints(1000),
		_maxEnergyPoints(1000), _level(1000), _meleeAttackDamage(1000),
		_rangeAttackDamage(1000), _armourDamageReduction(1000) {
	std::cout << RED << "ARGGGHH.... " << _name << " hero has created!" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name, uint hp, uint mhp, uint ep, uint mep, uint lvl, uint mad, uint rad, uint adr): _hitPoints(hp), _maxHitPoints(mhp), _energyPoints(ep),
		_maxEnergyPoints(mep), _level(lvl), _name(name), _meleeAttackDamage(mad),
		_rangeAttackDamage(rad), _armourDamageReduction(adr) {}

ClapTrap::ClapTrap() {}

ClapTrap::~ClapTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}