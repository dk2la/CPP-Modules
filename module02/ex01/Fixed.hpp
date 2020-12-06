#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const int &parametersInt);
		Fixed(const float &parametersFloat);
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed) {
			std::cout << "Assignation operator called" << std::endl;
			this->_value = fixed._value;
			return (*this);
		}
		float	toFloat(void) const;
		int		toInt(void) const;
		~Fixed();
	private:
		int					_value;
		static const int	_valueAfterPointer = 8;
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);
// int main( void );

#endif