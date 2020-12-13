/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:33:49 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/09 22:07:35 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void			ScavTrap::takeDamageSuperAttack(void) {
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

void			ScavTrap::setEnergy(int energy) {
	if (_energyPoints - energy <= 0) {
		_energyPoints = 0;
		std::cout << RED << "OHH... I WANT DO DO THIS, BUT NOT TODAY (HAVE NO CHAKRA)" << RESET << std::endl;
	}
	else
		this->_energyPoints -= energy;
}

std::string		ScavTrap::getName(void) const {
	return (this->_name);
}

void	ScavTrap::beRepaired(unsigned int amount) {
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

void	ScavTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints - amount + this->_armourDamageReduction <= 0)
	 	std::cout << RED << this->_name << "IS DEAD!" << RESET << std::endl;
	else {
		this->_hitPoints -= amount - this->_armourDamageReduction;
		std::cout << BLUE << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
			<< _energyPoints << ") " << " has taken damage from " << this->_name << RESET << std::endl;
	}
}

void	ScavTrap::meleeAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his hand" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}

void	ScavTrap::rangedAttack(std::string const &target) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << target << " from his gun" << RESET << std::endl;
		setEnergy(25);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " lost 25 energy points" << RESET << std::endl;
}
	ScavTrap::ScavTrap(const std::string &name): _hitPoints(100), _maxHitPoints(100), _energyPoints(50),
		_maxEnergyPoints(50), _level(1), _name(name), _meleeAttackDamage(20),
		_rangeAttackDamage(15), _armourDamageReduction(3) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}
	ScavTrap&		ScavTrap::operator=(const	ScavTrap& scavTrap) {
	_hitPoints = scavTrap._hitPoints;
	_maxHitPoints =	scavTrap._maxHitPoints;
	_energyPoints =	scavTrap._energyPoints;
	_maxEnergyPoints = scavTrap._maxEnergyPoints;
	_level = scavTrap._level;
	_name =	scavTrap._level;
	_meleeAttackDamage = scavTrap._meleeAttackDamage;
	_rangeAttackDamage = scavTrap._rangeAttackDamage;
	_armourDamageReduction = scavTrap._armourDamageReduction;
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
	return (*this);
}
	ScavTrap::ScavTrap() {}

	ScavTrap::~ScavTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}