/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:09 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:09 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class ICharacter;

# include <iostream>
# include  "ICharacter.hpp"
class AMateria
{
	protected:
		uint			_xp;
		std::string		_type;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria&);
		AMateria&	operator=(const AMateria&);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		uint				getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif