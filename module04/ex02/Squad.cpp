/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:50 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:51 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad&			Squad::operator=(const Squad& squad) {
	this->_countSquad = squad.getCount();
	for (int i = 0; i < squad.getCount(); ++i) {
		push(squad.getUnit(i)->clone());
	}
	return *this;
}

int				Squad::push(ISpaceMarine* ism) {
	if (ism == 0)
		return this->_countSquad;
	if (this->_countSquad == 0) {
		this->_countSquad++;
		this->_space = new ISpaceMarine*[this->_countSquad];
		this->_space[this->_countSquad - 1] = ism;
	}
	else {
		ISpaceMarine **newIsm = new ISpaceMarine*[++this->_countSquad];
		for (int i = 0; i < this->_countSquad - 1; ++i)
			newIsm[i] = _space[i];
		newIsm[this->_countSquad - 1] = ism;
		delete [] _space;
		this->_space = new ISpaceMarine*[this->_countSquad];
		for (int i = 0; i < this->_countSquad; ++i)
			_space[i] = newIsm[i];
		delete [] newIsm;
	}
	return (this->_countSquad);
}

ISpaceMarine*	Squad::getUnit(int num) const {
	return (this->_space[num]);
}

int		Squad::getCount(void) const {
	return (this->_countSquad);
}

Squad::Squad(): _countSquad(0), _space(0) {}

Squad::~Squad() {
	for (int i = 0; i < getCount(); ++i)
		delete this->_space[i];
}