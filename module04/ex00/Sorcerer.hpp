/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:42 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:30:42 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(const std::string& , const std::string& );
		Sorcerer& operator=(const Sorcerer& );
		Sorcerer(const Sorcerer&);
		void		polymorph(const Victim& );
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		~Sorcerer();
	private:
		Sorcerer();
		std::string _name;
		std::string _type;
};

std::ostream& operator<<(std::ostream& out, const Sorcerer& );

#endif