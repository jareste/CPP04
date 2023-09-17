/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:51 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 03:48:25 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat( const Cat &src )
{
	*this = src;
	this->brain = new Brain;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=( const Cat& Cat )
{
	(void) Cat;
	this->type = type;
	// this->brain = new Brain;
	std::cout << "here" << std::endl;
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

void Cat::setIdeas(std::string ideas) const
{
	brain->setIdeas(ideas);
}
