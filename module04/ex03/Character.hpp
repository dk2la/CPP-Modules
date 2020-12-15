#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	public:
		Character(const std::string&);
		Character(const Character&);
		Character&	operator=(const Character&);
		std::string	const &	getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		~Character();
	private:
		Character();
		AMateria**	_pool;
		uint		_countPool;
		std::string	_name;
};

#endif