#include "RobotomyRequestForm.hpp"

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rrf) {
	static_cast<void>(rrf);
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rrf): Form(rrf) {}

void	RobotomyRequestForm::execute(Bureaucrat const & b) const {
	std::srand(time(0));
	if (this->_gradeSign < b.getGrade())
		throw Form::GradeTooLowException();
	else if (!this->_signedStatus)
		throw Form::GradeTooHighException();
	if (std::rand() % 2 == 1)
		std::cout << "* drill sounds * " << this->_target << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "* drill sounds * " << this->_target << " has been robotomized failed!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): Form("Robotomy", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy", 72, 45), _target(0) {}

RobotomyRequestForm::~RobotomyRequestForm() {}