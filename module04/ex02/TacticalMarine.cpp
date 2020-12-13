#include "TacticalMarine.hpp"

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& tm) {
	return (*this = tm);
}

ISpaceMarine*	TacticalMarine::clone() const {
	return (new TacticalMarine(*this));
}

void	TacticalMarine::meleeAttack(void) const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

void	TacticalMarine::rangedAttack(void) const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::battleCry(void) const {
	std::cout << "For the holy PLOT" << std::endl;
}

TacticalMarine::TacticalMarine(const TacticalMarine& tm) {
	*this = tm;
}

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}