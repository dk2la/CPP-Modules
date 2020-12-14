#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <iterator>
# include <vector>
# include <algorithm>

class Span {
	public:
		Span(uint n);
		Span(const Span&);
		Span&	operator=(const Span&);
		void	addNumber(uint n);
		struct	OutOfRangeException {const char* what() const throw();};
		struct	DuplicateException {const char* what() const throw();};
		struct	LowNumberException {const char* what() const throw();};
		int		shortestSpan();
		int		longestSpan();
		~Span();
	private:
		Span();
		uint 						_size;
		std::vector<int>			_vect;
		std::vector<int>::iterator	_it;
		std::vector<int>::iterator	_first;
		std::vector<int>::iterator	_second;
};

#endif