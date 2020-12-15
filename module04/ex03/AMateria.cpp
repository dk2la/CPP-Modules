#include "AMateria.hpp"

void				AMateria::use(ICharacter& target) { (void)target; this->_xp += 10; }

uint				AMateria::getXP() const { return this->_xp; }

std::string const & AMateria::getType() const { return this->_type; }

AMateria&		AMateria::operator=(const AMateria& am) {
	this->_type = am.getType();
	this->_xp = am.getXP();
	return *this;
}

AMateria::AMateria(const AMateria& am) { *this = am; }

AMateria::AMateria(std::string const & type): _xp(0), _type(type) {}

AMateria::~AMateria() {}