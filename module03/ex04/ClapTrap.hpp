/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:34:20 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:34:20 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <cmath>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define GREY "\033[37m"
# define CYAN "\033[36m" 
# define RESET "\033[0m"

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const std::string &name, uint, uint, uint, uint, uint, uint, uint, uint);
		ClapTrap& operator= (const ClapTrap &clapTrap);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		void			setEnergy(unsigned int enegry);
		void			setHitPoints(unsigned int hitPoints);
		void			takeDamageSuperAttack(void);
		~ClapTrap();
	protected:
		unsigned int			_hitPoints;
		unsigned int			_maxHitPoints;
		unsigned int			_energyPoints;
		unsigned int			_maxEnergyPoints;
		unsigned int			_level;
		std::string				_name;
		unsigned int			_meleeAttackDamage;
		unsigned int			_rangeAttackDamage;
		unsigned int			_armourDamageReduction;
};

#endif