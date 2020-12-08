#include "PlasmaRifle.hpp"
#include "AWeapon.hpp"

void			PlasmaRifle::attack(void) const { 
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& plasma) {
	*this = plasma;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& plasma) {
	return *this;
}

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {}