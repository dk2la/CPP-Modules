/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:06 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:07 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

void				AMateria::use(ICharacter& target) { (void)target; this->_xp += 10; }

uint				AMateria::getXP() const { return this->_xp; }

std::string const & AMateria::getType() const { return this->_type; }

AMateria&		AMateria::operator=(const AMateria& am) {
	this->_type = am.getType();
	this->_xp = am.getXP();
	return *this;
}

AMateria::AMateria(const AMateria& am) { *this = am; }

AMateria::AMateria(std::string const & type): _xp(0), _type(type) {}

AMateria::~AMateria() {}