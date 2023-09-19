/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:44:00 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/20 01:36:59 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->floorCapacity = 4;
	this->floorIdx = 0;
	AMateria** newFloor = new AMateria*[floorCapacity];
	floor = newFloor;
	for (unsigned int i = 0; i < floorCapacity; i++)
		floor[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character name constructor called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;	
	this->floorCapacity = 4;
	this->floorIdx = 0;
	AMateria** newFloor = new AMateria*[floorCapacity];
	floor = newFloor;
	for (unsigned int i = 0; i < floorCapacity; i++)
		floor[i] = NULL;
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
		{
			std::cout << "PREVaddressINV::::::::::::::::::::::::::::::::::::::::;" << &this->inventory[i] << std::endl;
			std::cout << "PREVaddressSRC::::::::::::::::::::::::::::::::::::::::;" << &src.inventory[i] << std::endl;
			// delete this->inventory[i];
			this->inventory[i] = src.inventory[i]->clone();
			std::cout << "AFTERaddress::::::::::::::::::::::::::::::::::::::::;" << &this->inventory[i] << std::endl;
		}
	}
	this->floorCapacity = src.getFloorCapacity();
	this->floorIdx = src.getFloorIdx();
	AMateria** newFloor = new AMateria*[floorCapacity];
	floor = newFloor;
	for (unsigned int i = 0; i < floorCapacity; i++)
		floor[i] = NULL;
}

Character::~Character()
{
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (inventory[i] != NULL)
		{
			for (unsigned int j = 0; j < floorCapacity; j++)
				if (floor[j] == inventory[i])
					floor[j] = NULL;
			delete inventory[i];
			inventory[i] = NULL;
		}
	this->clearFloor();
	delete [] floor;
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
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
			}
			this->inventory[i] = NULL;
			
			if (character.inventory[i] == NULL)
				this->inventory[i] = NULL;
			else if (character.inventory[i] != NULL)
			{	
				this->inventory[i] = character.inventory[i]->clone();
			}
		}
	}
	this->floorCapacity = character.getFloorCapacity();
	this->floorCapacity = character.getFloorIdx();
	AMateria** newFloor = new AMateria*[floorCapacity];
	if (floor != NULL)
		delete [] floor;
	floor = newFloor;
	for (unsigned int i = 0; i < floorCapacity; i++)
		floor[i] = NULL;
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
	{
		std::cout << "Character " << name << " failed to equip due to lack of space" << std::endl;
		this->addToFloor(*m);
	}
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
	this->addToFloor(*inventory[idx]);
	this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->inventory[idx] != NULL)
		this->inventory[idx]->use(target);
}

void Character::printMaterias() const
{
	std::string materia;
	std::string	name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
		{
			// std::cout << "address:::::::::::::::::::::::::::" << &inventory[i] << std::endl;
			materia = inventory[i]->getType();
			name = this->getName();
			std::cout << name << " materia " << i << " is " << materia << std::endl;
		}
	}
}

void		Character::addToFloor(AMateria &materia)
{
	if ((floorCapacity - 1 <= floorIdx))
	{
		floorCapacity += 4;
		AMateria** newFloor = new AMateria*[floorCapacity];
		for (unsigned int i = 0; i < floorCapacity - 4; i++)
			newFloor[i] = floor[i];
		delete [] floor;
		AMateria** auxFloor = new AMateria*[floorCapacity];
		floor = auxFloor;
		for (unsigned int i = 0; i < floorCapacity - 4; i++)
			floor[i] = newFloor[i];
		floor[floorIdx] = &materia;
		floorIdx++;
		delete [] newFloor;
	}
	else
	{
		floor[floorIdx] = &materia;
		floorIdx++;
	}
}

void		Character::clearFloor()
{
	for (unsigned int i = 0; i < floorCapacity; i++)
		if (floor[i] != NULL)
		{
			delete floor[i];
			floor[i] = NULL;
		}
}

unsigned int Character::getFloorCapacity() const
{
	return (this->floorCapacity);
}

unsigned int Character::getFloorIdx() const
{
	return (this->floorIdx);
}
