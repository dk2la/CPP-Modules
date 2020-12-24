#include "easyfind.hpp"
#include <vector>

int     main() {
    std::vector<int> vect;

    for (int count = 0; count < 5; ++count) {
        vect.push_back(10 - count);
    }
    int     secondParams = 8;
    try {
        std::cout << *easyfind(vect, secondParams) << std::endl;
    }
    catch(const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}