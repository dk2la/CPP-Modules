/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:57 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:58 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	std::cout << RED << "Making Zombies horde" << RESET << std::endl;
	horde = new Zombie[n];
	for (int count = 0; count < n; count++) {
		std::cout << YELLOW << horde[count].getName() << " (" << horde[count].getType() << ") "
			<< "Braiiiiiiinnnssss..." << RESET << std::endl;
	}
	delete [] horde;
	std::cout << RED << "Zombie horde created!" << RESET << std::endl;
}

ZombieHorde::~ZombieHorde() {
	std::cout << RED << "Destructor is wordking!" << RESET << std::endl;
}