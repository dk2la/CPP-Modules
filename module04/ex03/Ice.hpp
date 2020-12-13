#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice&);
		Ice&				operator=(const Ice&);
		unsigned int		getXP() const;
		AMateria*			clone() const;
		void				use(ICharacter& target);
		std::string	const&	getType() const;	
		~Ice();
};

#endif