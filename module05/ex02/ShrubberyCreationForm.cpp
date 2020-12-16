#include "ShrubberyCreationForm.hpp"
#include <fstream>

const char*		ShrubberyCreationForm::OpenFileException::what() const throw() { return ("Open file error!"); }

const char*		ShrubberyCreationForm::WriteFileException::what(void) const throw() { return ("Write file error!"); } 

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& scf) {
	for (int i = 0; i < 2; ++i)
		this->_three[i] = scf._target[i];
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf): Form(scf) {}

void		ShrubberyCreationForm::execute(Bureaucrat const & b) const {
	if (this->_gradeSign < b.getGrade())
		throw Form::GradeTooLowException();
	else if (!this->_signedStatus)
		throw Form::FormIsSignedException();
	std::string filename = this->_target + "_shrubbery";
	std::ofstream ofs;
	ofs.open(filename, std::ios::out);
	if (!ofs.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	for (int i = 0; i < 1; ++i) {
		ofs << this->_three[0] << std::endl;
		if (ofs.bad()) {
			ofs.close();
			throw ShrubberyCreationForm::WriteFileException();
		}
	}

}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):Form("Shrubbery Form", 145, 137), _target(target) {
	this->_three[0] =   "                          |                         _...._              \n"
  						"                       \\  _  /                    .::o:::::.            \n"
						"                        (\\o/)                    .:::'''':o:.           \n"
						"                    ---  / \\  ---                :o:_    _:::           \n"
						"                         >*<                     `:}_>()<_{:'           \n"
						"                        >0<@<                 @    `'//\\'`    @        \n"
						"                       >>>@<<*              @ #     //  \\     # @      \n"
						"                      >@>*<0<<<           __#_#____/'____'\\____#_#__    \n"
						"                     >*>>@<<<@<<         [__________________________]   \n"
						"                    >@>>0<<<*<<@<         |=_- .-/\\ /\\ /\\ /\\--. =_-|    \n"
						"                   >*>>0<<@<<<@<<<        |-_= | \\ \\\\ \\\\ \\\\ \\ |-_=-|    \n"
						"                  >@>>*<<@<>*<<0<*<       |_=-=| / // // // / |_=-_|    \n"
						"    \\*/         >0>>*<<@<>0><<*<@<<      |=_- |`-'`-'`-'`-'  |=_=-|    \n"
						"___\\U//___     >*>>@><0<<*>>@><*<0<<     | =_-| o          o |_==_|    \n"
						"|\\ | | \\|    >@>>0<*<<0>>@<<0<<<*<@<    |=_- | !     (    ! |=-_=|    \n"
						"| \\| | _(UU)_ >((*))_>0><*<0><@<<<0<*<  _|-,-=| !    ).    ! |-_-=|_   \n"
						"|\\ \\| || / //||.*.*.*.|>>@<<*<<@>><0<<@</=-((=_| ! __(:')__ ! |=_==_-\\  \n"
						"|\\_|_|&&_// ||*.*.*.*|_\\db//__     (\\_/)-=))-|/^\\=^=^^=^=/^\\| _=-_-_\\ \n"
						"""""|'.'.'.|~~|.*.*.*|     ____|_   =('.')=//   ,------------.          \n"
						"jgs |'.'.'.|   ^^^^^^|____|>>>>>>|  ( ~~~ )/   (((((((())))))))         \n"
						"    ~~~~~~~~         '""""`------'  `w---w`     `------------'          \n";

}

ShrubberyCreationForm::ShrubberyCreationForm(): _target(0) {
	for (int i = 0; i < 2; ++i) {
		_three[i] = nullptr;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}