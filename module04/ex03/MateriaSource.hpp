#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource&	operator=(const MateriaSource&);
		MateriaSource(std::string const& type);
		MateriaSource(const MateriaSource&);
		~MateriaSource();
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const& type);
	private:
		std::string _type;
		AMateria**	_backPool;
		int			_count;
};

#endif