#include "AMateria.hpp"

void		AMateria::use(ICharacter& target) {}

AMateria*	AMateria::clone(void) const {return (new AMateria(*this));}

unsigned int		AMateria::getXP(void) const {return (this->_xp);}

std::string const&	AMateria::getType(void) const {return (this->_name);}

AMateria::AMateria(std::string const& type): _xp(0), _name(type) {}

AMateria::AMateria() {}

AMateria::~AMateria() {}