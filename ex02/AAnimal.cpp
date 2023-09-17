/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:27 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:38:42 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &src )
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=( const AAnimal& aanimal )
{
	this->type = aanimal.type;
	return(*this);
}
