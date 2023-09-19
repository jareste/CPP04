/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:43:18 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/20 01:26:30 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice &src ) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	this->type = src.type;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice	&Ice::operator=( const Ice& ice )
{
	std::cout << "Ice operator called" << std::endl;
	this->type = ice.type;
	return (*this);
}

AMateria* Ice::clone() const
{
	std::cout << "Ice clone called" << std::endl;
	AMateria *ice = new Ice(*this);
	return (ice);
}

void Ice::use(ICharacter& target) const
{
	std::string _target;

	_target = target.getName();
	std::cout << "Ice: \"* shoots an ice bolt at " << _target << " *\"" << std::endl;
}
