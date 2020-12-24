//
// Created by Shonna Jakku on 12/20/20.
//

#ifndef INC_7_CONVERT_HPP
#define INC_7_CONVERT_HPP

# include <iostream>
# include <iomanip>
# include <stdexcept>

class Convert {
public:
	Convert(const char** av);
	Convert(const Convert &);
	Convert &operator=(const Convert &);
	void        castNum(void);
	void        validation();
	struct  HappensSomethingWrong: public std::exception {const char* what() const throw(); };
	struct  ValidationIsTrue:public std::exception {const char* what() const throw(); };
	~Convert();
private:
	Convert();
	std::string _arg;
};


#endif //INC_7_CONVERT_HPP
