#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class Form;

class ShrubberyCreationForm: public Form {
	private:
		const	std::string	_target;
		std::string			_three[1];
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
		struct WriteFileException: public std::exception { const char* what() const throw(); };
		struct OpenFileException: public std::exception { const char* what() const throw(); };
		void	execute(Bureaucrat const & b) const;
		virtual ~ShrubberyCreationForm();
};

#endif
