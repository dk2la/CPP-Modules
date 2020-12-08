#include "Peon.hpp"

void	Peon::getPolymorphed(void) const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

Peon&	Peon::operator=(const Peon& peon) {
	return (*this = peon);
}

Peon::Peon(const std::string& name): Victim(name) {
	std::cout << "Zog Zog." << std::endl;
}

Peon::Peon() {}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}