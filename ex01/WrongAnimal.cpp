/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:27 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/16 00:57:44 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal( const WrongAnimal &src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=( const WrongAnimal& WrongAnimal )
{
	this->type = WrongAnimal.type;
	return(*this);
}

void	WrongAnimal::makeSound()  const
{
	std::cout << "Beep boop simulating animal sound beep boop..." << std::endl;
}

std::string	WrongAnimal::getType()	const
{
	return (this->type);
}

std::ostream&	operator<<( std::ostream& out, const WrongAnimal& wrongAnimal )
{
	out << "Type: " << wrongAnimal.getType();
	return ( out );
}

std::ostream&	operator<<( std::ostream& out, const WrongAnimal* wrongAnimal )
{
	if ( wrongAnimal != NULL )
		out << "Type: " << wrongAnimal->getType();
	return ( out );
}

