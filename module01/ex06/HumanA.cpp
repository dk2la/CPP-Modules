/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:41:56 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:41:57 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void        HumanA::attack(void) {
    std::cout << _name << " is attack " << this->_weapon.getType() << std::endl;
}

HumanA::HumanA(const std::string &name, Weapon &type): _name(name), _weapon(type) {
    std::cout << "Constructor is working" << std::endl;
}
