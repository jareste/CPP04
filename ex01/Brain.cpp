/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:24:14 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 04:00:14 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	std::string ideas = "No ideas i'm just a silly animal...";
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << std::endl;
		this->ideas[i] = ideas[i];
	}
}

Brain::Brain( const Brain &src )
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain	&Brain::operator=( const Brain& brain )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

void Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

