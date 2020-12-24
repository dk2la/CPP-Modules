/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:48 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:30:48 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {
	public:
		Victim(const std::string&);
		Victim& operator=(const Victim& );
		virtual void	getPolymorphed(void) const;
		std::string	getName(void) const;
		~Victim();
	protected:
		Victim();
		std::string _name;
		std::string _type;
};

std::ostream& operator<<(std::ostream& out, const Victim& victim);

#endif