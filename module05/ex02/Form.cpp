#include "Form.hpp"

std::ostream&	operator<<(std::ostream& out, const Form& f) {
	// return (out << "Form: " << f.getName() << (f.getSignedStatus() ? " is signed " : " is unsigned ") << " Grade sign: " << f.getGradeSign() << " Grade exec: " << f.getGradeExec() << std::endl);
	out << "Form: " << f.getName();
	if (f.getSignedStatus())
		out << " is signed! ";
	else
		out << " in unsigned! ";
	out << " Grade sign: " << f.getGradeSign() << " Grade exec: " << f.getGradeExec() << std::endl;
	return out;
}

const char*	Form::FormIsSignedException::what(void) const throw() { return ("Form is already signed!"); }

const char*	Form::GradeTooLowException::what(void) const throw() { return ("Grade is too low!"); }

const char*	Form::GradeTooHighException::what(void) const throw() { return ("Grade is too high!"); }

void		Form::setSignStatusTrue(void){
	this->_signedStatus = true;
}

void		Form::beSigned(const Bureaucrat& b) {
	if (this->_gradeSign < b.getGrade())
		throw Form::GradeTooLowException();
	if (this->_signedStatus)
		throw Form::FormIsSignedException();
	setSignStatusTrue();
}

bool		Form::getSignedStatus(void) const { return this->_signedStatus; }

std::string	Form::getName(void) const { return this->_name; }

int			Form::getGradeSign(void) const { return this->_gradeSign; }

int			Form::getGradeExec(void) const { return this->_gradeExec; }

Form&		Form::operator=(const Form& f) {
	this->_signedStatus = f.getSignedStatus();
	return *this;
}

Form::Form(const Form& f): _name(f.getName()), _gradeSign(f.getGradeSign()), _gradeExec(f.getGradeExec()), _signedStatus(f.getSignedStatus()) { *this = f; }

Form::Form(const std::string& name, int gradeSign, int gradeExec): _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec), _signedStatus(false) {
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooLowException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooHighException();
}

Form::Form(): _name(0), _gradeSign(0), _gradeExec(0), _signedStatus(false) {}

Form::~Form() {}