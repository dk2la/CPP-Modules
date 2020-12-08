/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:34:33 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:34:33 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

std::string attacks[5] = {
	"Amaterasu",
	"Sharingan",
	"Mangekyou Sharingan",
	"Izanagi",
	"Rikudo Senjuts"
};

void			NinjaTrap::ninjaShoebox(const ClapTrap& clapTrap) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << clapTrap.getName() << " jutu " << attacks[rand() % 5] << RESET << std::endl;
	setEnergy(10);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << "ARGHH... lost 10 energy points" << RESET << std::endl;
}

void			NinjaTrap::ninjaShoebox(const NinjaTrap& ninjaTrap) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << ninjaTrap.getName() << " jutu " << attacks[rand() % 5] << RESET << std::endl;
	setEnergy(10);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << "ARGHH... lost 10 energy points" << RESET << std::endl;
}

void			NinjaTrap::ninjaShoebox(const ScavTrap& scavTrap) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << scavTrap.getName() << " jutu " << attacks[rand() % 5] << RESET << std::endl;
	setEnergy(10);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << "ARGHH... lost 10 energy points" << RESET << std::endl;
}

void			NinjaTrap::ninjaShoebox(const FragTrap& fragTrap) {
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << " attacks " << fragTrap.getName() << " jutu " << attacks[rand() % 5] << RESET << std::endl;
	setEnergy(10);
	std::cout << GREEN << this->_name << " (" << "HP: " << _hitPoints << " ENRG: "
		<< _energyPoints << ") " << "ARGHH... lost 10 energy points" << RESET << std::endl;
}

NinjaTrap&		NinjaTrap::operator=(const NinjaTrap &ninjaTrap) {
	_hitPoints = ninjaTrap._hitPoints;
	_maxHitPoints = ninjaTrap._maxHitPoints;
	_energyPoints = ninjaTrap._energyPoints;
	_maxEnergyPoints = ninjaTrap._maxEnergyPoints;
	_level = ninjaTrap._level;
	_name = ninjaTrap._level;
	_meleeAttackDamage = ninjaTrap._meleeAttackDamage;
	_rangeAttackDamage = ninjaTrap._rangeAttackDamage;
	_armourDamageReduction = ninjaTrap._armourDamageReduction;
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
	return (*this);
}

NinjaTrap::NinjaTrap(const std::string& name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0) {
	std::cout << RED << "ARGGGHH.... " << _name <<  " hero created!" << RESET << std::endl;
}

NinjaTrap::NinjaTrap() {}

NinjaTrap::~NinjaTrap() {
	std::cout << RED << "ARGGGHH...." << _name << " hero has been destroyed!" << RESET << std::endl;
}