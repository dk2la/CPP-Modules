#include "Fixed.hpp"

float	Fixed::toFloat(void) const {
	return((float)this->_value / (1 << this->_valueAfterPointer));
}

int		Fixed::toInt(void) const {
	return (this->_value / (1 << this->_valueAfterPointer));
}

Fixed::Fixed(const int &parametersInt): _value(parametersInt * (1 << this->_valueAfterPointer)) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &parametersFloat): _value(roundf(parametersFloat * (1 << this->_valueAfterPointer))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed): _value(fixed._value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(): _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor is working" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}