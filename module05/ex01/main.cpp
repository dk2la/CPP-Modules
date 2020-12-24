#include "Bureaucrat.hpp"

int		main() {
	
	Bureaucrat chert("Chert", 50);
	Form	form51("FORM51", 51, 100);
	Form	form49("FORM49", 1, 49);
	Form	form50("FORM50", 50, 50);
	Form	form("Low exc", 1, 1);


	std::cout << "---------FORM51---------" << std::endl;

	try {
		Bureaucrat b0 ("keklol", 49);
		b0.signForm(form51);
		std::cout << form51;
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------FORM51---------" << std::endl;

	try {
		chert.signForm(form51);
		std::cout << form51;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}


	std::cout << "---------FORM49---------" << std::endl;

	try {
		chert.signForm(form49);
		std::cout << form49;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "---------FORM50---------" << std::endl;

	try {
		chert.signForm(form50);
		std::cout << form50;
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


	std::cout << "---------FORM---------" << std::endl;


	try {
		chert.signForm(form);
		std::cout << form;
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}