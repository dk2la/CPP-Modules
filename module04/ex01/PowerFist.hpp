#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	public:
		PowerFist();
		PowerFist(const PowerFist& );
		PowerFist& operator=(const PowerFist& );
		~PowerFist();
		void	attack(void) const;
};

#endif