#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form {
	private:
		const	std::string	_target;
		std::string			_three[1];
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
		void	execute(Bureaucrat const & b) const;
		virtual ~PresidentialPardonForm();
};

#endif
