/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:03:39 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog( const Dog &src )
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=( const Dog& dog )
{
	std::cout << "Dog operator called" << std::endl;
	this->type = type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain(*dog.brain);
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

void	Dog::setIdeas(std::string const &ideas) const
{
	brain->setIdeas(ideas);
}

void	Dog::printIdeas() const
{
	brain->printIdeas();
}
