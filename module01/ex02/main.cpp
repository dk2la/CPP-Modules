/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:03 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:03 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int		main(void) {
	ZombieEvent zombieEvent;
	Zombie* newZ;

	std::cout << RED << "First type: change name zombie: " << RESET << std::endl;
	newZ = new Zombie();
	std::cout << MAGENTA << "Zombie created!" << RESET << std::endl;
	newZ->announce();
	delete newZ;

	std::cout << RED << "Second type: change type zombie: " << RESET << std::endl;
	zombieEvent.setType("Elite");
	newZ = zombieEvent.newZombie("Sam");
	std::cout << MAGENTA << "Zombie created!" << RESET << std::endl;
	newZ->announce();
	delete newZ;
	
	std::cout << RED << "Third type: random type and name zombie: " << RESET << std::endl;
	for (int count = 0; count != 6; count++) {
		newZ = zombieEvent.randomChump();
		std::cout << MAGENTA << "Zombie created!" << RESET << std::endl;
		newZ->announce();
		delete newZ;
	}
	return (0);
}