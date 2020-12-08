#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
	public:
		AWeapon& operator=(const AWeapon& );
		AWeapon(const std::string& name, int apcost, int damage);
		AWeapon(const AWeapon& );
		~AWeapon();
		std::string 		getName(void) const;
		int					getAPCoast(void) const;
		int					getDamage(void) const;
		virtual void		attack() const = 0;
	protected:
		AWeapon();
		std::string _name;
		int			_apcost;
		int			_damage;
};

#endif