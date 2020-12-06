#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap& operator= (const ScavTrap &fragTrap);
		void			challengeNewcomer(void);
		~ScavTrap();
};

#endif