#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria{
	public:
		Cure();
		Cure(const Cure&);
		Cure&				operator=(const Cure&);
		void				use(ICharacter& target);
		unsigned int		getXP() const;
		AMateria*			clone() const;
		std::string const&	getType() const;
		~Cure();
};

#endif