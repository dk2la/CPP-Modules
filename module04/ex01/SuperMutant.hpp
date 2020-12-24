/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:31 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:31 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"

class SuperMutant: public Enemy {
	public:
		SuperMutant();
		SuperMutant(const SuperMutant& );
		SuperMutant&	operator=(const SuperMutant& );
		~SuperMutant();
};

#endif