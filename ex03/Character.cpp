/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:44:00 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 05:03:25 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
}

Character::Character( const Character &src )
{
	std::cout << "Character copy constructor called" << std::endl;
	this->name = src.name;
	for (int i = 0; i < 4; i++)
	{
		if (src.inventory[i] == NULL)
			this->inventory[i] = NULL;
		else
			this->inventory[i] = src.inventory[i]->clone();
	}
}

Character::~Character()
{
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (inventory[i] != NULL)
			delete inventory[i];
}

Character	&Character::operator=( const Character& character )
{
	std::cout << "Character operator called" << std::endl;
	if (this != &character)
	{
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i] == NULL)
				std::cout << i << std::endl;
			if (this->inventory[i] != NULL)
				delete this->inventory[i];
			this->inventory[i] = NULL;
			
			if (character.inventory[i] == NULL)
				this->inventory[i] = NULL;
			
			else if (character.inventory[i] != NULL)
				this->inventory[i] = character.inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << "Character " << name << " failed to equip." << std::endl;
		return ;
	}

	for (int idx = 0; idx < 4; idx++)
		if (this->inventory[idx] == m)
			return ;

	std::string name = this->getName();
	bool		equipped = false;
	std::string type = m->getType();

	for (int idx = 0; idx < 4; idx++)
		if (this->inventory[idx] == NULL)
		{
			this->inventory[idx] = m;
			std::cout << "Character " << name << " equiped " << type << " at " << idx << std::endl;
			equipped = true;
			return ;
		}
	if (equipped == false)
		std::cout << "Character " << name << " failed to equip due to lack of space" << std::endl;
}

void Character::unequip(int idx)
{
	std::string name = this->getName();

	if (idx > 3 || idx < 0)
	{
		std::cout << "Unequip err: introduce a valid idx between 0-3." << std::endl;
		return ;
	}
	if (this->inventory[idx] == NULL)
		std::cout << "Unequip err: there's no weapon in slot: " << idx << std::endl;
	std::cout << "Character " << name << " unequiped " << idx << std::endl;
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}
