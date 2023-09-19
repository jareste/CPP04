/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:44:52 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 04:33:02 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*materias[4];
	public:
		MateriaSource();
		MateriaSource( const MateriaSource &src );
		~MateriaSource();
		MateriaSource	&operator=( const MateriaSource& materiasource );
		void learnMateria(AMateria* materia);
		AMateria* createMateria(std::string const & type);
};

#endif
