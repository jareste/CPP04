/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:44:00 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 02:40:21 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	index = 0;
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
	index = 0;
}

Character::Character( const Character &src )
{
	std::cout << "Character copy constructor called" << std::endl;
	this->name = src.name;
	this->index = src.index;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = src.inventory[i];
}

Character::~Character()
{
	std::cout << "Character default destructor called" << std::endl;
}

Character	&Character::operator=( const Character& character )
{
	std::cout << "Character operator called" << std::endl;
	this->name = character.name;
	this->index = character.index;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	std::string name = this->getName();
	bool		equipped = false;
	std::string type = m->getType();

	for (index = 0; index < 4; index++)
		if (this->inventory[index] == NULL)
		{
			this->inventory[index] = m;
			std::cout << "Character " << name << " equiped " << type << " at " << index << std::endl;
			equipped = true;
		}
	if (equipped == false)
		std::cout << "Character " << name << " failed to equip due to lack of space" << std::endl;
}

void Character::unequip(int idx)
{
	std::string name = this->getName();

	if (idx > 3 || idx < 0)
	{
		std::cout << "Unequip err: introduce a valid index between 0-3." << std::endl;
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
