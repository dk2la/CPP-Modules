#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator&);
		AssaultTerminator&	operator=(const AssaultTerminator&);
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
		ISpaceMarine*		clone() const;
		~AssaultTerminator();
};

std::ostream&	operator<<(std::ostream& out, const AssaultTerminator&);

#endif