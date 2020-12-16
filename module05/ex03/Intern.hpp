//
// Created by Shonna Jakku on 12/16/20.
//

#ifndef CPP_MODULES_INTERN_HPP
#define CPP_MODULES_INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
public:
	Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &);
	Form*   makeSHForm(const std::string& target);
	Form*   makeRRForm(const std::string& target);
	Form*   makePPForm(const std::string& target);
	struct  HaveNoFormException: public std::exception {const char* what() const throw(); };
	Form*   makeForm(const std::string& name, const std::string& target);
	~Intern();
};


#endif //CPP_MODULES_INTERN_HPP
