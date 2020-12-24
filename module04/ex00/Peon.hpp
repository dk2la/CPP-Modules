/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:30:34 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:30:35 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim {
	public:
		Peon(const std::string&);
		Peon& operator=(const Peon& );
		virtual void	getPolymorphed(void) const;
		~Peon();
	private:
		Peon();
};

#endif