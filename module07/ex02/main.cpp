#include "Array.hpp"

int		main() {
	Array<int>	tmp_arr(7);

	std::cout << "-----------------INDEX-----------------" << std::endl;
	std::cout << tmp_arr.getSize() << std::endl;
	try {
		std::cout << tmp_arr[7] << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	for (uint i = 0; i < tmp_arr.getSize() - 1; ++i)
		tmp_arr[i] = 5;

	std::cout << "-----------------PRISV-----------------" << std::endl;
	Array<int> oper_prisv = tmp_arr;
	for (uint i = 0; i < oper_prisv.getSize() - 1; ++i)
		std::cout << "PARAMS NUMBER: [" << i << "]" << oper_prisv[i] << std::endl;

	std::cout << "-----------------COPY-----------------" << std::endl;
	Array<int> cp_const(tmp_arr);
	for (uint i = 0; i < cp_const.getSize() - 1; ++i)
		std::cout << "PARAMS NUMBER: [" << i << "]" << cp_const[i] << std::endl;
	return (0);
}

