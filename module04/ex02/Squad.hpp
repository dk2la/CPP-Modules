#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"
# include <iostream>

class Squad: public ISquad {
	public:
		Squad();
		Squad(const Squad& );
		Squad&		operator=(const Squad& );
		int			getCount() const;
		int			push(ISpaceMarine*);
		ISpaceMarine*	getUnit(int) const;
		~Squad();
	private:
		int				_countSquad;
		ISpaceMarine**	_space;
};

#endif