/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:33:31 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/09 22:01:35 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

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

class FragTrap {
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap& operator= (const FragTrap &fragTrap);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		void			setEnergy(unsigned int enegry);
		void			setHitPoints(unsigned int hitPoints);
		void			vaulthunter_dot_exe(std::string const & target);
		void			takeDamageSuperAttack(void);
		~FragTrap();
	private:
		int						_hitPoints;
		unsigned int			_maxHitPoints;
		int						_energyPoints;
		unsigned int			_maxEnergyPoints;
		unsigned int			_level;
		std::string				_name;
		unsigned int			_meleeAttackDamage;
		unsigned int			_rangeAttackDamage;
		unsigned int			_armourDamageReduction;
};

#endif