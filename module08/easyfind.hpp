#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template <typename T>
T   easyfind(std::vector<T> firstParams, int secondParams) {
    for (int i = 0; i < firstParams.size(); ++i) {
        if (firstParams[i] == secondParams)
            return (firstParams[i]);
    }
    throw std::out_of_range("Index is not true!\n");
    return (1);
};

#endif