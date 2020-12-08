#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& );
		PlasmaRifle& operator=(const PlasmaRifle& );
		~PlasmaRifle();
		void	attack(void) const;
};

#endif