/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:19 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:21 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIRST_HPP
# define POWERFIRST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist: public AWeapon {
	public:
		PowerFist();
		PowerFist(const PowerFist& );
		PowerFist& operator=(const PowerFist& );
		~PowerFist();
		void	attack(void) const;
};

#endif