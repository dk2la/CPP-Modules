#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class Form;

class RobotomyRequestForm: public Form {
	private:
		const	std::string	_target;
		std::string			_three[1];
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
		void	execute(Bureaucrat const & b) const;
		virtual ~RobotomyRequestForm();
};

#endif
