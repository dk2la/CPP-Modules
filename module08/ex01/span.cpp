#include "span.hpp"

int			Span::longestSpan() {
	if (_vect.empty() || _vect.size() == 1)
		throw Span::LowNumberException();
	std::sort(_vect.begin(), _vect.end());
	return (_vect.back() - _vect.front());
}

int			Span::shortestSpan() {
	if (_vect.empty() || _vect.size() == 1)
		throw Span::LowNumberException();
	std::sort(_vect.begin(), _vect.end());
	int shortestResult = _vect.back() - _vect.front();
	_second = ++_vect.begin();
	for (_first = _vect.begin(); _first != _vect.end() - 1; ++_first, ++_second)
		if (*_second - *_first < shortestResult)
			shortestResult = *_second - *_first;
	return (shortestResult);
}

const char*	Span::DuplicateException::what() const throw() {
	return ("Have duplicate symbol!");
}

const char*	Span::LowNumberException::what() const throw() {
	return ("Low nomber of arguments!");
}

const char*	Span::OutOfRangeException::what() const throw() {
	return ("Out of range!");
}

void	Span::addNumber(uint n) {
	if (this->_size == _vect.size())
		throw Span::OutOfRangeException();
	_it = find(_vect.begin(), _vect.end(), n);
	if (_it != _vect.end())
		throw Span::DuplicateException();
	this->_vect.push_back(n);
}

Span&	Span::operator=(const Span& span) {
	this->_size = span._size;
	this->_vect = span._vect;
	return *this;
}

Span::Span(const Span& span): _size(span._size), _vect(span._vect) {}

Span::Span(uint n): _size(n) {}

Span::Span(): _size(0) {}

Span::~Span() {}