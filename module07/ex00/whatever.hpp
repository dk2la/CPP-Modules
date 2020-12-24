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
	if (a > b)
		return (b);
	else if (a == b)
		return (b);
	else
		return (a);
}

template <typename M>
M&	myMax(M& a, M& b) {
	if (a > b)
		return (a);
	else if (a == b)
		return (b);
	else
		return (b);
}

#endif