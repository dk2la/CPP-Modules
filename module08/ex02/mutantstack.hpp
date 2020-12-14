#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T> {
	public:
		MutantStack(): std::stack<T>() {};
		MutantStack(const MutantStack& ms): std::stack<T>(ms) {};
		MutantStack&	operator=(const MutantStack& ms) {
			if (this != ms)
				this->_it = ms._it;
			return *this;
		};
		class iterator: std::iterator<std::bidirectional_iterator_tag, T> {
			public:
				iterator(): _it(nullptr) {};
				iterator(T* it): _it(it) {};
				iterator(const MutantStack<T>::iterator &it) { *this = it; };
				MutantStack<T>::iterator&	operator=(const MutantStack<T>::iterator& it) { return (*this = it); };
				MutantStack<T>::iterator&	operator++() { this->_it += 1; return *this; };
				MutantStack<T>::iterator&	operator--() { this->_it -= 1; return *this; };
				bool	operator==(const MutantStack<T>::iterator& it) { return (this->_it == it._it); };
				bool	operator!=(const MutantStack<T>::iterator& it) { return (this->_it != it._it); };
				MutantStack<T>::iterator	operator++(int) {
					MutantStack<T>::iterator tmp = *this;
					this->operator++();
					return (tmp);
				};
				MutantStack<T>::iterator	operator--(int) {
					MutantStack<T>::iterator tmp = *this;
					this->operator--();
					return (tmp);
				};
				T&	operator*() {
					return *(this->_it);
				};
				~iterator() {};
			private:
				T *_it;
		};
		MutantStack<T>::iterator begin() { return iterator(&this->top()); };
		MutantStack<T>::iterator end() { return iterator(&this->top() - this->size() - 1); };
		virtual ~MutantStack() {};
};

#endif