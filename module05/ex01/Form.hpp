#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		Form(const std::string& _name, int gradeSign, int gradeExec);
		Form(const Form&);
		Form&	operator=(const Form&);
		struct		GradeTooHighException {const char* what() const throw();};
		struct		GradeTooLowException {const char* what() const throw();};
		struct		FormIsSignedException {const char* what() const throw();};
		void		beSigned(const Bureaucrat& b);
		bool		getSignedStatus(void) const;
		int			getGradeExec(void) const;
		int			getGradeSign(void) const;
		std::string	getName(void) const;
		void		setSignStatusTrue(void);
		~Form();
	private:
		Form();
		const std::string	_name;
		const int		 	_gradeSign;
		const int			_gradeExec;
		bool				_signedStatus;
};

std::ostream&	operator<<(std::ostream& out, const Form&);

#endif