#include "Convert.hpp"

int     main(int ac, const char** av) {
	try {
		if (ac != 2)
			throw Convert::HappensSomethingWrong();
	}
	catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
		return 0;
	}
	Convert *conv = new Convert(av);
	try {
		conv->validation();
	}
	catch (const std::bad_cast& b){
		std::cout << b.what() << std::endl;
		delete conv;
		return (0);
	}
	catch (const std::exception& e) {
		delete conv;
		return (0);
	}
	delete conv;
	return (0);
}
