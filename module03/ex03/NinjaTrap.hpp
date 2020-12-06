#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

// # include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
class NinjaTrap: public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(const std::string &name);
		NinjaTrap& operator= (const NinjaTrap &fragTrap);
		void	ninjaShoebox(const ClapTrap &);
		void	ninjaShoebox(const FragTrap &);
		void	ninjaShoebox(const ScavTrap &);
		void	ninjaShoebox(const NinjaTrap &);
		~NinjaTrap();
};

#endif
