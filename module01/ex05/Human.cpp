/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:37 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:37 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {
    std::cout << "Constructor is working" << std::endl;
}

Human::~Human() {
    std::cout << "Destructor is working" << std::endl;
}

std::string     Human::identify(void) {
    return (this->brain.identify());
}

const Brain     &Human::getBrain(void) {
    return this->brain;
}