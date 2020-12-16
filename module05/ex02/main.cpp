#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main() {
	
	// Bureaucrat chert("Chert", 50);
	// Form	form51("FORM51", 51, 100);
	// Form	form49("FORM51", 1, 49);
	// Form	form50("FORM51", 50, 50);
	// Form	form("Low exc", 1, 1);

	// try {
	// 	Bureaucrat b1("Kek", 50);
	// 	std::cout << b1;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat b2("Lol", 151);
	// 	std::cout << b2;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	Bureaucrat b3("Chert", 0);
	// 	std::cout << b3;
	// }
	// catch(const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	chert.signForm(form51);
	// 	std::cout << form51;
	// }
	// catch (const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	chert.signForm(form49);
	// 	std::cout << form49;
	// }
	// catch (const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// try {
	// 	chert.signForm(form50);
	// 	std::cout << form50;
	// }
	// catch (const std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	Bureaucrat supervisor("Supervisor", 1);
	std::cout << supervisor << std::endl;

	Form *shrub = new ShrubberyCreationForm("home");
	std::cout << *shrub << std::endl;
	shrub->beSigned(supervisor);
	std::cout << *shrub << std::endl;
	try {
		shrub->execute(supervisor);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	delete shrub;
	Form *robot = new RobotomyRequestForm("Marvin");
	std::cout << *robot << std::endl;
	try {
		robot->beSigned(supervisor);
		robot->execute(supervisor);
		supervisor.executeForm(*robot);
		supervisor.executeForm(*robot);
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	delete robot;
	Form *president = new PresidentialPardonForm("Ford Perfect");
	std::cout << *president << std::endl;
	try {
		president->beSigned(supervisor);
		president->execute(supervisor);
		supervisor.executeForm(*president);
	}
	catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	delete president;
	return (0);
}