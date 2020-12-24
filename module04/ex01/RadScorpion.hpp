/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:26 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:26 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion: public Enemy {
	public:
		RadScorpion();
		RadScorpion(const RadScorpion& );
		RadScorpion&	operator=(const RadScorpion& );
		~RadScorpion();
};

#endif