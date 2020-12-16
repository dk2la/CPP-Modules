#include "PresidentialPardonForm.hpp"

void		PresidentialPardonForm::execute(Bureaucrat const & b) const {
		if (this->_gradeSign < b.getGrade())
			throw Form::GradeTooLowException();
		else if (!this->_signedStatus)
			throw Form::GradeTooHighException();
		std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& ppf) {
	static_cast<void>(ppf);
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ppf): Form(ppf) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): Form("Presidential", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential", 25, 5), _target(0) {}

PresidentialPardonForm::~PresidentialPardonForm() {}