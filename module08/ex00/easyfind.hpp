#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <string>

template <typename T>
typename T::iterator   easyfind(T& firstParams, int secondParams) {
	return (std::find(firstParams.begin(), firstParams.end(), secondParams));
};

#endif