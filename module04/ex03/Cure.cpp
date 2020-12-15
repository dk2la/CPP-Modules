#include "Cure.hpp"

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
}

AMateria*	Cure::clone() const { return (new Cure(*this)); }

Cure&	Cure::operator=(const Cure& Cure) {
	this->_xp = Cure.getXP();
	this->_type = Cure.getType();
	return *this;
}

Cure::Cure(const Cure& Cure): AMateria(Cure) { *this = Cure; }

Cure::Cure(): AMateria("cure") {}

Cure::~Cure() {}