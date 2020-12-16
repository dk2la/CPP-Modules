//
// Created by Shonna Jakku on 12/16/20.
//

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

std::ostream&   operator<<(std::ostream& out, const Base& b) {
	return (out << b.getClass());
}

void    identify_from_reference(Base &p) {
	try {
		A &a = dynamic_cast<A&>(p);
		std::cout << "class " << a << std::endl;
	}
	catch (const std::bad_cast& bc) {
		std::cout << bc.what() << " with class a" << std::endl;
	}
	std::cout << "pointer" << std::endl;
	try {
		B &b = dynamic_cast<B&>(p);
		std::cout << "class " << b << std::endl;
	}
	catch (const std::bad_cast& bc) {
		std::cout << bc.what() << " with class b" << std::endl;
	}
	try {
		C &c = dynamic_cast<C&>(p);
		std::cout << "class " << c << std::endl;
	}
	catch (const std::bad_cast& bc) {
		std::cout << bc.what() << " with class c" << std::endl;
	}

}

void    identify_from_pointer(Base *p) {
	A *a = dynamic_cast<A*>(p);
	if (a) {
		std::cout << "class " << *a << std::endl;
	}
	else {
		B *b = dynamic_cast<B*>(p);
		if (b)
			std::cout << "class " << *b << std::endl;
		else {
			C *c = dynamic_cast<C*>(p);
			if (c)
				std::cout << "class " << *c << std::endl;
			else
				return;
		}
	}
}

Base*   generate(void) {
	std::srand(time(0));
	int rand = std::rand() % 3;
	if (rand == 0)
		return (new A());
	else if (rand == 1)
		return (new B());
	else if (rand == 2)
		return (new C());
	return nullptr;
}

int     main() {
	Base* base = generate();
	identify_from_reference(*base);
	identify_from_pointer(base);
	delete base;
	return 0;
}
