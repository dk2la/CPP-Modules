#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	public:
		Array(): _size(0), _array(nullptr) {}
		Array(uint size): _size(size), _array(nullptr) {
			this->_array = new T[this->_size];
		}
		Array(const Array& arr): _size(arr._size), _array(nullptr) { *this = arr; }
		Array&	operator=(const Array& arr) {
			if (this->_array)
				delete [] this->_array;
			this->_size = arr._size;
			this->_array = new T[this->_size];
			for (uint i = 0; i <= this->_size; ++i)
				_array[i] = arr._array[i];
			return *this;
		}
		T&	operator[](uint index) {
			if (this->_size <= index)
				throw std::out_of_range("Index too high");
			return this->_array[index];
		}
		uint		getSize(void) const { return this->_size; }
		~Array() {}
	private:
		uint	_size;
		T		*_array;
};

#endif
