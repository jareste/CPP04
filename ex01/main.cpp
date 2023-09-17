/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:51:49 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:06:02 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main(void)
{
	const Dog *k = new Dog();
	std::cout << std::endl;
	const Dog l;
	std::cout << std::endl;
	l.setIdeas("lllll");
	std::cout << std::endl;
	const Dog *i = new Dog(l);
	std::cout << std::endl;

	k->makeSound();
	k->setIdeas("hola");
	k->setIdeas("hola1");
	k->setIdeas("hola2");
	k->setIdeas("hola3");
	k->setIdeas("hola4");
	k->setIdeas("hola5");
	k->setIdeas("hola6");
	k->setIdeas("hola7");
	k->setIdeas("hola8");
	k->setIdeas("hola9");
	std::cout << std::endl << "k ideas: " << std::endl;
	k->printIdeas();
	
	std::cout << std::endl << "l ideas: " << std::endl;
	l.printIdeas();

	std::cout << std::endl << "i ideas: " << std::endl;
	i->printIdeas();
	std::cout << std::endl;
	delete i;
	delete k;

	return 0;
}
