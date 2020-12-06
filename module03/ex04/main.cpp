#include "SuperTrap.hpp"

int		main(void) {
	FragTrap fragTrap1("FR4G1");
	FragTrap fragTrap2("FR4G2");
	ClapTrap clapTrap("CLAP1");

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
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << MAGENTA << "FROM THIS TIME WE PLAYING WITH NINJATRAP" << RESET << std::endl;
	NinjaTrap	ninjaTrap1("NiNJA1");
	NinjaTrap	ninjaTrap2("NiNJA2");

	ninjaTrap1.ninjaShoebox(scavTrap);
	scavTrap.takeDamageSuperAttack();
	ninjaTrap1.ninjaShoebox(fragTrap1);
	fragTrap1.takeDamageSuperAttack();
	ninjaTrap1.ninjaShoebox(ninjaTrap2);
	ninjaTrap2.takeDamageSuperAttack();
	ninjaTrap1.ninjaShoebox(clapTrap);
	clapTrap.takeDamageSuperAttack();

	std::cout << MAGENTA << "FROM THIS TIME WE PLAYING WITH NINJATRAP" << RESET << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	SuperTrap superTrap("SUPER1");

	superTrap.FragTrap::rangedAttack(clapTrap.getName());
	clapTrap.takeDamageSuperAttack();
	superTrap.NinjaTrap::meleeAttack(clapTrap.getName());
	clapTrap.takeDamageSuperAttack();
	superTrap.beRepaired(100);

	std::cout << CYAN << "THIS IS END OF GAME!" << RESET << std::endl;
	return (0);
}