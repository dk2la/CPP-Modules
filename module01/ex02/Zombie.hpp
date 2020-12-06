/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:08 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:08 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define YELLOW "\033[33m"
# define MAGENTA "\033[35m"
# define GREY "\033[37m"
# define CYAN "\033[36m" 
# define RESET "\033[0m"

class Zombie {
	public:
		Zombie(std::string name, std::string type);
		Zombie();
		void		announce(void);
		~Zombie();
	private:
		std::string _nameZombie;
		std::string _typeZombie;
};

#endif