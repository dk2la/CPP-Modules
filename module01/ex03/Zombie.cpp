/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:53 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:53 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    std::string types[7] = {
        "Elite",
        "Maestro",
        "Lite",
        "Imposible",
        "Kektor",
        "Loler",
        "Gamer"
    };
    std::string names[7] = {
        "Memilio",
        "Skarry",
        "Atomatoe",
        "Casubmar",
        "Jalvaro",
        "Sjakku",
        "Fcathryn"
    };
    this->_nameZombie = names[rand() % 7];
    this->_typeZombie = types[rand() % 7];
    std::cout << RED << "Constructor is working!" << RESET << std::endl;
}

std::string Zombie::getName(void) {
    return (_nameZombie);
}

std::string Zombie::getType(void) {
    return (_typeZombie);
}

Zombie::~Zombie() {
    std::cout << RED << "Destructor is working" << RESET << std::endl;
}