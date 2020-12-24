//
// Created by Shonna Jakku on 12/16/20.
//

#ifndef CPP_MODULES_BASE_HPP
#define CPP_MODULES_BASE_HPP

#include <iostream>

class Base {
public:
	Base() {}
	Base(const Base& b) { *this = b; }
	Base&   operator=(const Base& b) { (void)b; return *this; }
	virtual std::string    getClass(void) const = 0;
	virtual ~Base() {}
};

std::ostream&   operator<<(std::ostream& out, const Base&);

#endif //CPP_MODULES_BASE_HPP
