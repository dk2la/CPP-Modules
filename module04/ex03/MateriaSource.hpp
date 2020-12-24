/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjakku <sjakku@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 14:32:40 by sjakku            #+#    #+#             */
/*   Updated: 2020/12/17 14:32:41 by sjakku           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource&	operator=(const MateriaSource&);
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
		virtual ~MateriaSource();
	private:
		AMateria* _amateria[4];
};

#endif