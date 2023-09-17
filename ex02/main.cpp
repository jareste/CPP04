/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:51:49 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:38:33 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iomanip>

int main(void)
{
	// const AAnimal i; //error showing animal is an abstract class.
	// const Animal* animal = new Animal();
	const AAnimal* dog = new Dog();
	std::cout << std::endl;
	
	const Cat ccat;// = new Cat();
	ccat.setIdeas("jk");
	std::cout << std::endl;

	const AAnimal* cat = new Cat(ccat);

	cat->setIdeas("holo");
	std::cout << std::endl << std::endl;

	std::cout << "Dog-> " << dog->getType() << " " << std::endl;
	std::cout << "Cat-> " << cat->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "DogSound-> ";
	dog->makeSound();
	std::cout << std::endl;
	std::cout << "CatSound-> ";
	cat->makeSound();
	std::cout << std::endl;

	ccat.printIdeas();
	std::cout << std::endl;
	cat->printIdeas();

	std::cout << std::endl << std::endl;
	
	
	std::cout << std::endl;
	std::cout << "DogDestructor-> ";
	delete dog;
	std::cout << std::endl;
	std::cout << "CatDestructor-> ";
	delete cat;
	std::cout << std::endl;
	std::cout << "CcatDestructor-> ";
	return 0;
}
