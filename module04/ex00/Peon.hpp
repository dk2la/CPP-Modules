#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim {
	public:
		Peon(const std::string&);
		Peon& operator=(const Peon& );
		virtual void	getPolymorphed(void) const;
		~Peon();
	private:
		Peon();
};

#endif