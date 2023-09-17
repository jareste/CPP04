/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:51 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:03:56 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat( const Cat &src )
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
	delete this->brain;
}

Cat	&Cat::operator=( const Cat& cat )
{
	std::cout << "Cat operator called" << std::endl;
	this->type = type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*cat.brain);
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

void Cat::setIdeas(std::string const &ideas) const
{
	brain->setIdeas(ideas);
}

void	Cat::printIdeas() const
{
	brain->printIdeas();
}

