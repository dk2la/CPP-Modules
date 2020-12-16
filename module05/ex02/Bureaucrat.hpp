#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat&);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat&		operator=(const Bureaucrat&);
		struct			GradeTooLowBureaucrat: public std::exception {virtual const char*	what(void) const throw();};
		struct			GradeTooHighBureaucrat: public std::exception {virtual const char*	what(void) const throw();};
		void			incGrade(void);
		void			decGrade(void);
		std::string		getName(void) const;
		int				getGrade(void) const;
		void			signForm(Form& f) const;
		void			executeForm(Form const & f);
	private:
		Bureaucrat();
		std::string _name;
		int			_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat&);

#endif