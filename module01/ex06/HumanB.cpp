/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:02 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:02 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void		HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void		HumanB::attack(void) { 
	std::cout << this->_name << " is attacikng " << this->_weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name): _name(name) {
	std::cout << "Constructor is working" << std::endl;
}
