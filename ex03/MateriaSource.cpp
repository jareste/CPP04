/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:44:43 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 05:03:58 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

MateriaSource::MateriaSource( const MateriaSource &src )
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.materias[i] == NULL)
			this->materias[i] = NULL;
		else
			this->materias[i] = src.materias[i]->clone();
	}}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] != NULL)
			delete this->materias[i];
}

MateriaSource	&MateriaSource::operator=( const MateriaSource& materiasource )
{
	std::cout << "MateriaSource operator called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if ( this->materias[i] != NULL )
			delete this->materias[i];
		this->materias[i] = NULL;
		if (materiasource.materias[i] == NULL)
			this->materias[i] = NULL;
		else
			this->materias[i] = materiasource.materias[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
		if (this->materias[i] == NULL)
		{
			this->materias[i] = materia;
			return ;
		}
	std::cout << "There's no space for more materia." << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		std::string _type = this->materias[i]->getType();
		if (_type == type)
			return (materias[i]->clone());
	}
	return (0);
}

