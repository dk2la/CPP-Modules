#include "Iter.hpp"

template <typename T>
void	print(T something) {
	std::cout << something << " ";
}

int		main() {
	std::cout << "-----------INT-----------" << std::endl;
	int num[7] = {1, 2, 3, 4, 5, 6, 7};
	std::cout << "print massive int" << std::endl;
	iter(num, 7, &print);
	std::cout << std::endl;

	std::cout << "-----------DOUBLE-----------" << std::endl;
	double num1[7] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
	std::cout << "printf double massive" << std::endl;
	iter(num1, 7, &print);
	std::cout << std::endl;
}
