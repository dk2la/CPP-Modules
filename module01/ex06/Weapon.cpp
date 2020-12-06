/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:11 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:11 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void) {
	return (_weapon);
}

void	Weapon::setType(std::string weaponD){
	this->_weapon = weaponD;
}

Weapon::Weapon(std::string weaponD): _weapon(weaponD) {
	std::cout << "Constructor is working" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Destructor is working" << std::endl;
}