/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:33 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:33 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const {
	std::stringstream str;

	str << this;
	return (str.str());
}

Brain::Brain() {
	 std::cout << "Constructor is working" << std::endl;
}