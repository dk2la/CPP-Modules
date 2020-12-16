//
// Created by Shonna Jakku on 12/16/20.
//

#ifndef CPP_MODULES_B_HPP
#define CPP_MODULES_B_HPP

# include "Base.hpp"

class B: public Base {
	public:
		virtual std::string   getClass(void) const { return "B"; }
};

#endif //CPP_MODULES_B_HPP
