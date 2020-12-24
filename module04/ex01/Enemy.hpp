/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:04 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:42:15 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		virtual ~Enemy();
	protected:
		Enemy();
		int			_hp;
		std::string	_type;
};

#endif