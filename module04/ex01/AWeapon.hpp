/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:54 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:30:54 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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