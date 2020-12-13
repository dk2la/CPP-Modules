#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat {
	public:
		Bureaucrat(const Bureaucrat&);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();
		Bureaucrat&		operator=(const Bureaucrat&);
		struct			GradeTooLowBureaucrat: public std::exception {const char*	what(void) const throw();};
		struct			GradeTooHighBureaucrat: public std::exception {const char*	what(void) const throw();};
		void			incGrade(void);
		void			decGrade(void);
		void			signForm(const Form&);
		std::string		getName(void) const;
		int				getGrade(void) const;
	private:
		Bureaucrat();
		std::string _name;
		int			_grade;
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat&);

#endif