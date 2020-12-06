#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed& operator= (const Fixed &fixed) {
			std::cout << "Assignation operator called" << std::endl;
			this->_value = fixed._value;
			return (*this);
		}
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		~Fixed();
	private:
		int					_value;
		static const int	_valueAfterPointer;
};

#endif