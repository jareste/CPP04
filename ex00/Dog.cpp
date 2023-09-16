/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/16 13:06:56 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &src )
{
	*this = src;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog	&Dog::operator=( const Dog& Dog )
{
	(void) Dog;
	this->type = type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof... woooof....." << std::endl;
}

std::string	Dog::getType() const
{
	return (this->type);
}
