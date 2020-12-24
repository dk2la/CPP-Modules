/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:36 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:46:04 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine*	AssaultTerminator::clone() const {
	return (new AssaultTerminator(*this));
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& at) {
	(void)at;
	return (*this);
}

void	AssaultTerminator::meleeAttack(void) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

void	AssaultTerminator::rangedAttack(void) const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::battleCry(void) const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& at) {
	*this = at;
}

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}