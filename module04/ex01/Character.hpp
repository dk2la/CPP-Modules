#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {	
	public:
		Character(const std::string& name);
		Character(const Character& );
		Character&	operator=(const Character& );
		void		recoverAP(void);
		void		equip(AWeapon*);
		void		attack(Enemy*);
		std::string	getName(void) const;
		int			getAP(void) const;
		AWeapon*	getWeaponName(void) const;
		~Character();
	private:
		Character();
		std::string	_name;
		AWeapon 	*_weapon;
		int			_apcost;
};

std::ostream&	operator<<(std::ostream& out, const Character& );

#endif