/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:33:46 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:33:47 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int		main(void) {
	FragTrap fragTrap1("FR4G1");
	FragTrap fragTrap2("FR4G2");

	fragTrap1.rangedAttack(fragTrap2.getName());
	fragTrap2.takeDamage(30);
	fragTrap2.meleeAttack(fragTrap1.getName());
	fragTrap1.takeDamage(20);
	fragTrap2.beRepaired(50);
	fragTrap1.beRepaired(10);
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());
	fragTrap2.takeDamageSuperAttack();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << MAGENTA << "FROM THIS TIME WE PLAYING WITH SCAVTRAP" << RESET << std::endl;
	ScavTrap scavTrap("SCAV1");

	scavTrap.rangedAttack(fragTrap1.getName());
	fragTrap1.takeDamage(20);
	fragTrap1.meleeAttack(scavTrap.getName());
	scavTrap.takeDamage(30);
	scavTrap.challengeNewcomer();
	fragTrap1.beRepaired(100);
	fragTrap1.takeDamageSuperAttack();
	return (0);
}