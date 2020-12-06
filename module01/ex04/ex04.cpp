/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:46 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:47 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string subjString = "HI THIS IS BRAIN";
	std::string* pointSubjString = &subjString;
	std::string& ampSubjString = subjString;
	std::cout << *pointSubjString << std::endl;
	std::cout << ampSubjString << std::endl;
	return (0);
}