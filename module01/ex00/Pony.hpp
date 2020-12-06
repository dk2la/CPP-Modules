/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:31 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:31 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

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

class Pony {
	public:
		Pony();
		void setPonySomethingAction(void);
		void ponyOneDay(void);
		~Pony();
	private:
		std::string	ponyIsEating;
		std::string ponyIsBooling;
		std::string ponyIsWalking;
		std::string ponyIsCrying;
		std::string ponyIsSleeping;
		std::string ponyIsPlayingTennis;
		std::string ponyIsTalkingAboutPolitics;
		std::string ponyName;
};

int		main(void);	

#endif