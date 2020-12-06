/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:25 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:25 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap(void) {
    Pony *ponyOnTheHeap;
    ponyOnTheHeap = new Pony();
    ponyOnTheHeap->setPonySomethingAction();
    ponyOnTheHeap->ponyOneDay();
    delete(ponyOnTheHeap);
}

void    ponyOnTheStack(void) {
    Pony        ponyOnTheStack;
    std::string metodAction;

    std::cout << MAGENTA << "If u want to told me ur action for pony, write (ACTION), else (STANDART)" << RESET << std::endl;
    std::cout << MAGENTA << "Told me action: " << RESET << std::endl;
    while (1) {
        std::getline(std::cin, metodAction);
        if (metodAction == "ACTION") {
                ponyOnTheStack.setPonySomethingAction();
                break ;
            }
            else if (metodAction == "STANDART") {
                break ;
            }
            else
                std::cout << MAGENTA << "Told me action: " << RESET << std::endl;
    }
    ponyOnTheStack.ponyOneDay();
}

int     main(void) {
    ponyOnTheStack();
    ponyOnTheHeap();
    while (1)
        NULL;
    return (0);
}