/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:15 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:45:04 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include "AWeapon.hpp"

void			PowerFist::attack(void) const { 
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist& plasma) {
	*this = plasma;
}

PowerFist&	PowerFist::operator=(const PowerFist& plasma) {
	(void)plasma;
	return *this;
}

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}