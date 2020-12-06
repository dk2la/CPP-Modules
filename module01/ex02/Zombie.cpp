/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:05 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:52:11 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce (void) {
	std::cout << GREEN << _nameZombie << "  (" << _typeZombie << ") " << "Braiiiiiiinnnssss..." << RESET << std::endl;
}

Zombie::Zombie(std::string name, std::string type): _nameZombie(name), _typeZombie(type) {} 

Zombie::Zombie(): _nameZombie("Jalvaro"), _typeZombie("Maestro") {}

Zombie::~Zombie() {}

