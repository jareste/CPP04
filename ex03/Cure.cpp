/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:43:38 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 02:39:19 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure &src ) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	this->type = src.type;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure	&Cure::operator=( const Cure& cure )
{
	std::cout << "Cure operator called" << std::endl;
	this->type = cure.type;
	return (*this);
}

AMateria* Cure::clone() const
{
	std::cout << "Cure clone called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target) const
{
	std::string _target;

	_target = target.getName();
	std::cout << "Cure: \"* shoots an Cure bolt at " << _target << " *\"" << std::endl;
}
