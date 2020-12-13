#include "Form.hpp"

const char*	Form::GradeTooLowBureaucrat::what() const throw() {
	return ("Form is too lower!\n");
}

const char*	Form::GradeTooHighBureaucrat::what() const throw() {
	return ("Form is too higher!\n");
}

int		Form::getGradeExec(void) const {
	return (this->_gradeExec);
}

int		Form::getGradeCost(void) const{
	return (this->_gradeCost);
}

bool	Form::getStatusForm(void) const {
	return (this->_statusForm);
}

void	Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() > this->_gradeCost)
		throw Form::GradeTooLowBureaucrat();
	else if (this->_statusForm) {
		std::cout << "Form is signed!" << std::endl;
		return ;
	}
	this->_statusForm = true;
}

Form&	Form::operator=(const Form& f) {
	this->_statusForm = f.getStatusForm();
	return *this;
}

std::ostream&	operator<<(std::ostream& out, const Form& f) {
	
} 

Form::Form(const Form& f): _name(f._name), _statusForm(f._statusForm), _gradeCost(f._gradeCost), _gradeExec(f._gradeExec) {}

Form::Form(const std::string& name, int gradeCost, int gradeExec): _name(name), _statusForm(false), _gradeCost(gradeCost), _gradeExec(gradeExec) {
	if (this->_gradeCost > 150 || this->_gradeExec > 150)
		throw GradeTooHighBureaucrat();
	else if (this->_gradeCost < 1 || this->_gradeExec < 1)
		throw GradeTooLowBureaucrat();
}

Form::Form(): _name(0), _statusForm(false), _gradeCost(0), _gradeExec(0) {}

Form::~Form() {}