/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:58 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:59 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine {
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine&);
		TacticalMarine&	operator=(const TacticalMarine&);
		virtual void	battleCry() const;
		virtual void	rangedAttack() const;
		virtual void	meleeAttack() const;
		ISpaceMarine*	clone() const;	
		~TacticalMarine();
};

std::ostream&	operator<<(std::ostream& out, const TacticalMarine&);

#endif