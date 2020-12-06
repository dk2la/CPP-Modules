#include "FragTrap.hpp"

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
	return (0);
}