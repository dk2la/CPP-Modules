/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:16 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:16 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(): _type("Elite") {}

ZombieEvent::~ZombieEvent() {}

void	ZombieEvent::setType(std::string type) {
	_type = type;
}

Zombie*	ZombieEvent::randomChump(void) {
	std::string 	names[6];
	unsigned int	indexZombieNames;

	names[0] = "Atomatoe";
	names[1] = "Memilio";
	names[2] = "Deddara";
	names[3] = "Fkathryn";
	names[4] = "Skarry";
	names[5] = "Sjakku";

	indexZombieNames = rand() % 6;
	Zombie* oneMoreZombie = new Zombie(names[indexZombieNames], _type);
	return (oneMoreZombie);
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie *newZ = new Zombie(name, this->_type);
	return(newZ);
}