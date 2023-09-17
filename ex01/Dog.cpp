/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 03:48:22 by jareste-         ###   ########.fr       */
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
	*this = src;
	this->brain = new Brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
	delete this->brain;
}

Dog	&Dog::operator=( const Dog& Dog )
{
	(void) Dog;
	this->type = type;
	// this->brain = brain;
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

void Dog::setIdeas(std::string ideas) const
{
	brain->setIdeas(ideas);
}