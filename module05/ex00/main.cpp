#include "Bureaucrat.hpp"

int		main() {
	try {
		Bureaucrat b1("Kek", 50);
		std::cout << b1;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b2("Lol", 151);
		std::cout << b2;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat test_inc("Test", 150);
		test_inc.incGrade();
		std::cout << test_inc;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b3("Chert", 0);
		std::cout << b3;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b4("Chert", 60);
		std::cout << b4;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}