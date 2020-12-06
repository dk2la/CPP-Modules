/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:27 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:44:09 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(): ponyIsBooling("Boolind Jalvaro"), ponyIsCrying("Crying, cuz Javalro, booling back"), ponyIsEating("Eating soup"), ponyIsPlayingTennis("they play tennis"),
                ponyIsSleeping("Going to sleep"), ponyIsWalking("a walk"), ponyIsTalkingAboutPolitics("talk about politics") {
                    std::cout << GREEN << "Wow pony do somthing, constructor is working!" << RESET << std::endl;
                }

Pony::~Pony() {
    std::cout << RED << "Destructor is working" << RESET << std::endl;
}

void    Pony::setPonySomethingAction(void) {
    std::cout << BLUE << "Tell me who the pony is gonna fester: " << RESET;
    std::getline(std::cin, ponyIsBooling);
    std::cout << BLUE << "Tell me why the ponies will cry: " << RESET;
    std::getline(std::cin, ponyIsCrying);
    std::cout << BLUE << "Tell me what the ponies will eat: " << RESET;
    std::getline(std::cin, ponyIsEating);
    std::cout << BLUE << "Tell me what the ponies will play: " << RESET;
    std::getline(std::cin, ponyIsPlayingTennis);
    std::cout << BLUE << "Tell me what the ponies will be talking about: " << RESET;
    std::getline(std::cin, ponyIsTalkingAboutPolitics);
    ponyIsWalking = "a walk";
    ponyIsSleeping= "Going to sleep";
}

void    Pony::ponyOneDay(void) {
    std::cout << BLUE << "Hey hi, this is a video blog about how ponies spend their day: " << RESET << std::endl;
    std::cout << GREEN << " For first, after they are waking up: " << ponyIsEating << " next thing they do: " << ponyIsBooling
        << " after this pony is: " << ponyIsCrying << " that's how their morning goes." << RESET << std::endl;
    std::cout << CYAN << " In the daytime ponies go for " << ponyIsWalking << " while walking " << ponyIsPlayingTennis
        << " Then the ponies come home and " << ponyIsEating << RESET << std::endl;
    std::cout << YELLOW << " In the evening the ponies gather to barbecue and " << ponyIsTalkingAboutPolitics << " after, they going sleep!" << RESET << std::endl;
}