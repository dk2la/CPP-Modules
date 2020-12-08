#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
	public:
		Victim(const std::string&);
		Victim& operator=(const Victim& );
		void	getPolymorphed(void) const;
		std::string	getName(void) const;
		~Victim();
	protected:
		Victim();
		std::string _name;
		std::string _type;
};

std::ostream& operator<<(std::ostream& out, const Victim& victim);

#endif