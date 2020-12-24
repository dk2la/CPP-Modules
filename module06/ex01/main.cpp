#include <iostream>
#include <string>

struct Data {
	std::string stringV1;
	int			intV;
	std::string	stringV2;
};

void	*serialize(void) {
	// 8 bytes stroka -> 4 bytes int -> 8 bytes again string
	char* returnV = new char[20];
	std::srand(time(0));
	for (int i = 0; i < 8; ++i)
		returnV[i] = "abcdefghijklmnopqrstuvwxyz"[std::rand() % 26];
	*reinterpret_cast<int*>(returnV + 8) = std::rand(); // кастуем int 4 bytes;
	for (int i = 12; i < 20; ++i)
		returnV[i] = "abcdefghijklmnopqrstuvwxyz"[std::rand() % 26];
	return returnV;
}
	
Data*	deserialize(void *raw) {
	Data*	data = new Data();
	char*	tmp_raw = reinterpret_cast<char*>(raw);
	data->stringV1 = std::string(tmp_raw, 8);
	data->intV = *reinterpret_cast<int*>(tmp_raw + 8);
	data->stringV2 = std::string(&tmp_raw[12], 8);
	return data;
}

int		main() {
	void*	ser = serialize();
	Data*	data = deserialize(ser);

	std::cout << "stringV1: " << data->stringV1 << std::endl;
	std::cout << "intV: " << data->intV << std::endl;
	std::cout << "stringV2: " << data->stringV2 << std::endl;
	return (0);
}