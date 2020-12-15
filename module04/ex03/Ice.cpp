#include "Ice.hpp"

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria*	Ice::clone() const { return (new Ice(*this)); }

Ice&	Ice::operator=(const Ice& ice) {
	this->_xp = ice.getXP();
	this->_type = ice.getType();
	return *this;
}

Ice::Ice(const Ice& ice): AMateria(ice) { *this = ice; }

Ice::Ice(): AMateria("ice") {}

Ice::~Ice() {}