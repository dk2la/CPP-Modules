/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:31:39 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:31:39 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine {
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator&);
		AssaultTerminator&	operator=(const AssaultTerminator&);
		void				battleCry() const;
		void				rangedAttack() const;
		void				meleeAttack() const;
		ISpaceMarine*		clone() const;
		~AssaultTerminator();
};

std::ostream&	operator<<(std::ostream& out, const AssaultTerminator&);

#endif