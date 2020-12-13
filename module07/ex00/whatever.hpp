#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	mySwap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename K>
K&	myMin(K& a, K& b) {
	return (a > b) ? b : a;
}

template <typename M>
M&	myMax(M& a, M& b) {
	return (a > b) ? a : b;
}

#endif