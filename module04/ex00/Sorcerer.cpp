/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:38 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:38:21 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

std::string		Sorcerer::getName(void) const {
	return (this->_name);
}

std::string		Sorcerer::getTitle(void) const {
	return (this->_name);
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& sorcerer) {
	this->_name = sorcerer.getName();
	this->_type = sorcerer.getTitle();
	return *this;
}

void	Sorcerer::polymorph(const Victim& victim) {
	victim.getPolymorphed();
}

std::ostream&	operator<<(std::ostream& out, const Sorcerer& sorcerer) {
	return (out << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", " << "and I like ponies!" << std::endl); 
}

Sorcerer::Sorcerer(const std::string& name, const std::string& type): _name(name), _type(type) {
	std::cout << _name << ", " << _type << ", " << "is born!" << std::endl;
}

Sorcerer::Sorcerer() {}

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _type << ", " << "is dead. Consequences will never be the same!" << std::endl;
}