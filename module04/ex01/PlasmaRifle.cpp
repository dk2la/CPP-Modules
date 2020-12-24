/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:09 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:43:34 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

void			PlasmaRifle::attack(void) const { 
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& plasma) {
	*this = plasma;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& plasma) {
	(void)plasma;
	return *this;
}

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}