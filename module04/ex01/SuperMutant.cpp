#include "SuperMutant.hpp"

SuperMutant&	SuperMutant::operator=(const SuperMutant& SuperMutant) {
	this->_hp = SuperMutant._hp;
	this->_type = SuperMutant._type;
	return *this;
}

SuperMutant::SuperMutant(const SuperMutant& SuperMutant) {
	*this = SuperMutant;
}

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}