/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:20 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:21 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria { 
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure&);
		Cure&	operator=(const Cure&);
		virtual	AMateria*	clone() const;
		virtual void		use(ICharacter& target);
};

#endif