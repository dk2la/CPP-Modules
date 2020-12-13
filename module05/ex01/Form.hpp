#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Form {
	public:
		Form(const std::string& name, int gradeCont, int gradeExec);
		Form(const Form&);
		Form&	operator=(const Form&);
		struct	GradeTooLowBureaucrat: public std::exception {const char* what() const throw();};
		struct	GradeTooHighBureaucrat: public std::exception {const char* what() const throw();};
		void	beSigned(const Bureaucrat&);
		bool	getStatusForm(void) const;
		int		getGradeCost(void) const;
		int		getGradeExec(void) const;
		~Form();
	private:
		Form();
		const std::string	_name;
		bool				_statusForm;
		const int			_gradeCost;
		const int			_gradeExec;
};

std::ostream&	operator<<(std::ostream& out, const Form&);

#endif