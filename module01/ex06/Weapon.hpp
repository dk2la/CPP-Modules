/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:13 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:15 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <sstream>

class Weapon {
    public:
        Weapon(std::string weaponD);
        void            setType(std::string weapon);
        std::string     getType(void);
        ~Weapon();
    private:
        std::string _weapon;
};

#endif
