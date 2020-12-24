/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:23 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:23 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion&	RadScorpion::operator=(const RadScorpion& radScorpion) {
	this->_hp = radScorpion._hp;
	this->_type = radScorpion._type;
	return *this;
}

RadScorpion::RadScorpion(const RadScorpion& radScorpion) {
	*this = radScorpion;
}

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}