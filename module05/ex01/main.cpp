#include "Bureaucrat.hpp"

int		main() {
	
	Bureaucrat chert("Chert", 50);
	Form	form51("FORM51", 51, 100);
	Form	form49("FORM51", 1, 49);
	Form	form50("FORM51", 50, 50);
	Form	form("Low exc", 1, 1);

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
		Bureaucrat b3("Chert", 0);
		std::cout << b3;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		chert.signForm(form51);
		std::cout << form51;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		chert.signForm(form49);
		std::cout << form49;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		chert.signForm(form50);
		std::cout << form50;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}