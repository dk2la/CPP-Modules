#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter {
	public:
		Character(const std::string&);
		Character(const Character&);
		Character&	operator=(const Character&);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		std::string			const&	getName() const;
		~Character();
	private:
		Character();
		std::string	_name;
		AMateria**	_pool;
		int			_countPool;
		
};

#endif