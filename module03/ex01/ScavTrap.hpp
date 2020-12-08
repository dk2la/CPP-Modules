/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 18:33:51 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/07 18:33:52 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "FragTrap.hpp"

class ScavTrap {
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap& operator= (const ScavTrap &fragTrap);
		void			rangedAttack(std::string const &target);
		void			meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		void			setEnergy(unsigned int enegry);
		void			setHitPoints(unsigned int hitPoints);
		void			challengeNewcomer(void);
		void			takeDamageSuperAttack(void);
		~ScavTrap();
	private:
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