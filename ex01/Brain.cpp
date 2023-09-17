/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:24:14 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:02:34 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	std::string ideas = "No ideas i'm just a silly animal...";
	index = 0;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas;
}

Brain::Brain( const Brain &src )
{
	*this = src;
	this->index = src.index;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

Brain	&Brain::operator=( const Brain& brain )
{
	this->index = brain.index;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return (*this);
}

void Brain::setIdeas(std::string const &ideas)
{
	if (index == 100)
		index = 0;
	this->ideas[index] = ideas;
	index++;
}

void	Brain::printIdeas() const
{
	std::string idea;
	for (int i = 0; i < 100; i++)
	{
		idea = this->ideas[i];
		if (idea == "No ideas i'm just a silly animal...")
			break ;
		std::cout << "Idea " << i + 1 << " : " << idea << std::endl;
	}

}
