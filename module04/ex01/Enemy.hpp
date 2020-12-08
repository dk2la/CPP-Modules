#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy {
	public:
		Enemy(const Enemy& );
		Enemy& operator=(const Enemy& );
		Enemy(int hp, const std::string& type);
		std::string 	getType(void) const;
		int				getHp(void) const;
		virtual void	takeDamage(int);
		~Enemy();
	protected:
		Enemy();
		int			_hp;
		std::string	_type;
};

#endif