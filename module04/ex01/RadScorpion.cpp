#include "RadScorpion.hpp"

RadScorpion&	RadScorpion::operator=(const RadScorpion& radScorpion) {
	this->_hp = radScorpion._hp;
	this->_type = radScorpion._type;
	return *this;
}

RadScorpion::RadScorpion(const RadScorpion& radScorpion) {
	*this = radScorpion;
}

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}