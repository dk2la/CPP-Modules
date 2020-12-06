/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:41:34 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:48:43 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Validation.hpp"

int		main(int ac, char **av) {
	if (ac <= 3 || ac >= 5) {
		std::cout << RED << "Wrong numbers of arguments!" << RESET << std::endl;
		return (1);
	}
	Valid	valid(av[1]);
	if (valid.validation(av)) {
		std::cout << RED << "Something wrong happens!" << RESET << std::endl;
		return (1);
	}
	return (0);
}