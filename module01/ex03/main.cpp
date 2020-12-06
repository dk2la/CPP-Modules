/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:50 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:50 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int		main(void) {
	std::string	numbersOfZombies;
	int			num;

	std::cout << GREEN << "Tell me, how much zombie u want: (range 1 - 7): " << RESET;
	while (std::getline(std::cin, numbersOfZombies)) {
		try {
			num = std::stoi(numbersOfZombies);
			if (num <= 0 || num >= 8)
				std::cout << GREEN << "Tell me, how much zombie u want: (range 1 - 7): " << RESET;
			else
				break ;
		}
		catch(const std::exception& err) {
			std::cout << GREEN << "Tell me, how much zombie u want: (range 1 - 7): " << RESET;
		}
	}
	ZombieHorde* zombieHorde = new ZombieHorde(num);
	delete zombieHorde;
	return (0);
}