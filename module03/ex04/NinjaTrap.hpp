/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:34:35 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:34:36 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

// # include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap: virtual public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(const std::string &name);
		NinjaTrap& operator= (const NinjaTrap &fragTrap);
		void	ninjaShoebox(const ClapTrap &);
		void	ninjaShoebox(const FragTrap &);
		void	ninjaShoebox(const ScavTrap &);
		void	ninjaShoebox(const NinjaTrap &);
		~NinjaTrap();
};

#endif
