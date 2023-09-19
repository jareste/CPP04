/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:14:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 02:41:24 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"

int main()
{
	Ice* k = new Ice();
	AMateria *l = k->clone();
	AMateria *cure = new Cure();
	Character *ch = new Character("Tommy");
	Character *bob = new Character("Bob");
	
	ch->equip(l);
	ch->equip(l);
	ch->equip(cure);
	ch->equip(l);
	ch->unequip(3);
	ch->unequip(2);
	ch->equip(l);
	ch->unequip(1);
	ch->equip(cure);
	ch->unequip(0);
	ch->equip(l);
	ch->use(1, *bob);
	ch->use(3, *bob);
	delete l;
	delete k;
	delete cure;
	delete ch;
	delete bob;
	return 0;
}