/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:27 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/16 13:06:38 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal( const Animal &src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal	&Animal::operator=( const Animal& animal )
{
	this->type = animal.type;
	return(*this);
}

void	Animal::makeSound()  const
{
	std::cout << "I'm only an animal I make no sound......" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
