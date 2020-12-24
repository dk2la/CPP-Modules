//
// Created by Shonna Jakku on 12/20/20.
//

#include "Convert.hpp"

const char* Convert::HappensSomethingWrong::what() const throw() { return ("SOMETHING WRONG!"); }

const char* Convert::ValidationIsTrue::what() const throw() { return (""); }

void   Convert::validation() {
	if (this->_arg.find("inf") != std::string::npos || this->_arg.find("nan") != std::string::npos) {
		std::cout << "char: " << "Impossible" << std::endl;
		std::cout << "int: " << "Impossible" << std::endl;
		std::cout << "float: " << std::stof(this->_arg) << "f" << std::endl;
		std::cout << "double: " << std::stod(this->_arg) << std::endl;
	}
	else if (this->_arg.length() == 1 && isprint(this->_arg[0]) && !isdigit(this->_arg[0])) {
		std::cout << "char: '" << this->_arg[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(this->_arg[0]) << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->_arg[0]) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->_arg[0]) << std::endl;
	}
	else
		castNum();
	throw   Convert::ValidationIsTrue();
}

void    Convert::castNum() {
	std::cout << "char: ";
	try {
		int num = std::stoi(this->_arg);
		if (num >= -128 && num <= 127) {
			if (std::isprint(num))
				std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
			else
				std::cout << "Not displayable" << std::endl;
		}
		else
			std::cout << "Impossible" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Impossible" << std::endl;

	}
	std::cout << "Int: ";
	try {
		int num = std::stoi(this->_arg);
		std::cout << num << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "Float: ";
	try {
		float num = static_cast<float>(std::stof(this->_arg));
		std::cout << std::fixed << std::setprecision(1) << num << "f" << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Impossible" << std::endl;
	}
	std::cout << "Double: ";
	try {
		double num = static_cast<double>(std::stod(this->_arg));
		std::cout << std::fixed << std::setprecision(1) << num << std::endl;
	}
	catch (const std::exception& e) {
		std::cout << "Impossible" << std::endl;
	}
}

Convert&    Convert::operator=(const Convert &c) {
	this->_arg = c._arg;
	return *this;
}

Convert::Convert(const Convert& c) { *this = c; }

Convert::Convert(const char** av): _arg(av[1]) {}

Convert::Convert() {}

Convert::~Convert() {}