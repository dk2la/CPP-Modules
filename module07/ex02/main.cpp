#include "Array.hpp"

int		main() {
	Array<int>	tmp_arr(7);

	std::cout << tmp_arr.getSize() << std::endl;
	try {
		std::cout << tmp_arr[7] << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	tmp_arr[0] = 5;
	Array<int> oper_prisv = tmp_arr;
	std::cout << oper_prisv[4] << std::endl;
	Array<int> cp_const(tmp_arr);
	std::cout << cp_const[4] << std::endl;
	return (0);
}
