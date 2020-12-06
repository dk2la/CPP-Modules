#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap& operator= (const FragTrap &fragTrap);
		void			vaulthunter_dot_exe(std::string const & target);
		~FragTrap();
};

#endif