/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:37 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:38 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

AMateria*		MateriaSource::createMateria(std::string const & type) {
//	if (type.find("cure") != std::string::npos || type.find("ice") != std::string::npos) {
		for (int i = 0; this->_amateria[i]; i++) {
			if (_amateria[i]->getType() == type)
				return _amateria[i]->clone();
			else if (this->_amateria[i] == nullptr)
				return nullptr;
		}
//	}
	return nullptr;
}

void			MateriaSource::learnMateria(AMateria* amateria) {
	for (int i = 0; i < 4; ++i) {
		if (!_amateria[i]) {
			this->_amateria[i] = amateria->clone();
			break ;
		}
		else if (this->_amateria[i] == amateria)
			return ;
		else
			continue ;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& ms) {
	for (int i = 0; i < 4; ++i) {
		if (this->_amateria[i] != nullptr)
			delete this->_amateria[i];
		this->_amateria[i] = ms._amateria[i]->clone();
	}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource& ms) { *this = ms; }

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		this->_amateria[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		delete this->_amateria[i];
	}
}
