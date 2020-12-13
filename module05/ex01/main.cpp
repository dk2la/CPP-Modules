#include "Bureaucrat.hpp"

int		main() {
	try {
		Bureaucrat b1("Kek", 50);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b2("Lol", 151);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b3("Chert", 0);
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}