/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:43:18 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:43:18 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent {
    public:
        ZombieEvent();
        Zombie      *newZombie(std::string name);
        Zombie      *randomChump(void);
        void        setType(std::string type);
        ~ZombieEvent();

    private:
        std::string _type;
};

#endif