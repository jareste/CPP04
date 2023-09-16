/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:51 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/16 13:06:49 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &src )
{
	*this = src;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat& Cat )
{
	(void) Cat;
	this->type = type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miauuuu....." << std::endl;
}

std::string	Cat::getType() const
{
	return (this->type);
}
