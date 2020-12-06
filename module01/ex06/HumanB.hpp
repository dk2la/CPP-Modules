/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:04 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:05 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANEB_HPP
# define HUMANEB_HPP

# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(const std::string &name);
        void    attack(void);
        void    setWeapon(Weapon &weapon);
    private:
        std::string _name;
        Weapon *_weapon;
};

#endif