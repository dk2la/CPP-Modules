#include "PowerFist.hpp"
#include "AWeapon.hpp"

void			PowerFist::attack(void) const { 
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::PowerFist(const PowerFist& plasma) {
	*this = plasma;
}

PowerFist&	PowerFist::operator=(const PowerFist& plasma) {
	return *this;
}

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {}