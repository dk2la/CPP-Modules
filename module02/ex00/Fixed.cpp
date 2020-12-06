#include "Fixed.hpp"

int		Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

Fixed::Fixed(const Fixed &fixed): _value(fixed._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed() {
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor is working" << std::endl;
}

