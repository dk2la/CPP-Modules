/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:42:39 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/03 16:42:39 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human {
    public:
        Human();
        Brain const&    getBrain(void);
        std::string     identify(void);
        ~Human();
    private:
        Brain brain;
};

#endif