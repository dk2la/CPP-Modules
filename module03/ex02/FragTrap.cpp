/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:34:01 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:34:01 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5) {
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