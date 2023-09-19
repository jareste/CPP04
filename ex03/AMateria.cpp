/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:42:28 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/20 01:21:12 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}


AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=( const AMateria& materia )
{
	std::cout << "AMateria: Assignation operator called" << std::endl;
	this->type = materia.type;
	return ( *this );
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target) const
{
	std::string _target;
	_target = target.getName();
	std::cout << "* shoots an ice bolt at " << _target << " *" << std::endl;
	(void) target;
}
