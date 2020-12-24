/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:32 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:41:56 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

void	Peon::getPolymorphed(void) const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon&	Peon::operator=(const Peon& peon) {
	this->_name = peon.getName();
	return *this;
}

Peon::Peon(const std::string& name): Victim(name) {
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon() {}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}