//
// Created by Shonna Jakku on 12/16/20.
//

#ifndef CPP_MODULES_C_HPP
#define CPP_MODULES_C_HPP

# include "Base.hpp"

class C: public Base {
	public:
		virtual std::string getClass(void) const { return "C"; }
};

#endif //CPP_MODULES_C_HPP
