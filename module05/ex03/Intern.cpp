//
// Created by Shonna Jakku on 12/16/20.
//

#include "Intern.hpp"

const char*     Intern::HaveNoFormException::what(void) const throw() { return ("Have no this form!"); }

Form*       Intern::makePPForm(const std::string& target) { return new PresidentialPardonForm(target); }

Form*       Intern::makeRRForm(const std::string& target) { return new RobotomyRequestForm(target); }

Form*        Intern::makeSHForm(const std::string& target) { return new ShrubberyCreationForm(target); }

Form*       Intern::makeForm(const std::string& name, const std::string& target) {
	Form*   (Intern:: *func[3])(const std::string&) = {
			&Intern::makePPForm,
			&Intern::makeRRForm,
			&Intern::makeSHForm
	};
	std::string nameForms[3] = {
			"Presidental Pardon",
			"Robotomy Request",
			"Shrubbery Creation"
	};
	for (int i = 0; i < 3; ++i) {
		if (name == nameForms[i]) {
			std::cout << "Intern creates " << nameForms[i] << std::endl;
			return (this->*func[i])(target);
		}
	}
	std::cout << "Form is not created!" << std::endl;
	throw Intern::HaveNoFormException();
	return nullptr;
}

Intern&     Intern::operator=(const Intern &i) { (void)i; return *this; }

Intern::Intern(const Intern &i) { *this = i; }

Intern::Intern() {}

Intern::~Intern() {}