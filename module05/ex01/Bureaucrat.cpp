#include "Bureaucrat.hpp"

const	char*	Bureaucrat::GradeTooLowBureaucrat::what() const throw() {
	return ("Bureaucrat grade lower!");
}

const	char*	Bureaucrat::GradeTooHighBureaucrat::what() const throw() {
	return ("Bureaucrat grade higher!");
}

void		Bureaucrat::decGrade(void) {
	if (this->_grade + 1 < 1)
		throw GradeTooLowBureaucrat();
	this->_grade += 1;
}

void		Bureaucrat::incGrade(void) {
	if (this->_grade - 1 > 150)
		throw GradeTooHighBureaucrat();
	this->_grade -= 1;
}

int			Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

void		Bureaucrat::signForm(Form& f) const {
	if (f.getSignedStatus())
		std::cout << "form is already singned!" << std::endl;
	else if (this->_grade > f.getGradeSign())
		std::cout << "Bureaucrat grade too low for this form" << std::endl;
	f.beSigned(*this);
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& b) {
	this->_name = b._name;
	this->_grade = b._grade;
	return *this;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat& b) {
	return (out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl);
}

Bureaucrat::Bureaucrat(const Bureaucrat& b) {
	*this = b;
}

Bureaucrat::Bureaucrat(const std::string& name, int	grade): _name(name) {
	if (grade < 1)
		throw GradeTooLowBureaucrat();
	else if (grade > 150)
		throw GradeTooHighBureaucrat();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(): _name(0), _grade(0) {}

Bureaucrat::~Bureaucrat() {}