//
// Created by Shonna Jakku on 12/16/20.
//

#ifndef CPP_MODULES_A_HPP
#define CPP_MODULES_A_HPP

# include "Base.hpp"

class A: public Base {
	public:
		virtual std::string  getClass(void) const { return "A"; };
};


#endif //CPP_MODULES_A_HPP
