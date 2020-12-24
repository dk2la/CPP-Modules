/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:12 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:12 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle: public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& );
		PlasmaRifle& operator=(const PlasmaRifle& );
		~PlasmaRifle();
		void	attack(void) const;
};

#endif