/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:26 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:26 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria { 
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice&);
		Ice&	operator=(const Ice&);
		virtual	AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif