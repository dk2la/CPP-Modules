/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:34 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:35 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    // std::cout << "HERE\n" << std::endl;
    src->learnMateria(new Ice());
    // std::cout << "HERE\n" << std::endl;
    src->learnMateria(new Cure());
    // std::cout << "HERE\n" << std::endl;
    
    ICharacter* me = new Character("me");
    // std::cout << "HERE\n" << std::endl;
    AMateria* tmp;
    // std::cout << "HERE\n" << std::endl;
    tmp = src->createMateria("ice");
    // std::cout << "HERE\n" << std::endl;
    me->equip(tmp);
    // std::cout << "HERE\n" << std::endl;
    tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("lol");
    // std::cout << "HERE\n" << std::endl;
    me->equip(tmp);
    // std::cout << "HERE\n" << std::endl;
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}