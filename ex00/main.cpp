/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:51:49 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/16 13:09:05 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include	<iomanip>

#define FILL		40
#define C_DEFAULT	"\033[0m"
#define C_RED		"\033[1;91m"
#define C_GREEN		"\033[1;92m"
#define C_YELLOW	"\033[1;93m"
#define C_BLUE		"\033[1;94m"
#define C_PINK		"\033[1;95m"
#define C_CYAN		"\033[1;96m"
#define C_WHITE		"\033[1;97m"
#define C_PURPLE	"\033[1;38;2;150;25;250m"


void    print_title( std::string msg, std::string clr_text, std::string clr_border )
{
	int	fill;
	int	odd;
	int	size;

	size = msg.length() >= FILL ? msg.length() + 10 : FILL;
	fill = ( size - msg.length() ) / 2;
	odd = msg.length() < FILL ? msg.length() % 2 : 0;
	std::cout << clr_border;
	std::cout << "\n " << std::setfill( '_' ) << std::setw( size ) << "" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( fill + odd ) << "" << clr_text << msg << clr_border << std::setw( fill + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( '_' ) << std::setw( size + 2 ) << "|\n" << std::endl;
	std::cout << C_DEFAULT;
}







int main(void)
{
	const Animal* animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl << std::endl;

	std::cout << "Animal-> " << animal->getType() << " " << std::endl;
	std::cout << "Dog-> " << dog->getType() << " " << std::endl;
	std::cout << "Cat-> " << cat->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "AnimalSound-> ";
	animal->makeSound();
	std::cout << std::endl;
	std::cout << "DogSound-> ";
	dog->makeSound();
	std::cout << std::endl;
	std::cout << "CatSound-> ";
	cat->makeSound();
	std::cout << std::endl;

	std::cout << std::endl << std::endl;
	
	
	std::cout << "AnimalDestructor-> ";
	delete animal;
	std::cout << std::endl;
	std::cout << "DogDestructor-> ";
	delete dog;
	std::cout << std::endl;
	std::cout << "CatDestructor-> ";
	delete cat;
	std::cout << std::endl;
	
	
	std::cout << std::endl << std::endl;

	const WrongAnimal* wrongAnimal = new WrongAnimal();
	const WrongAnimal* wrongAnimalCat = new WrongCat();
	const WrongCat* wrongCat = new WrongCat();

	std::cout << std::endl << std::endl;
	
	std::cout << "wrongAnimal -> " << wrongAnimal->getType() << " " << std::endl;
	std::cout << "wrongAnimalCat -> " << wrongAnimalCat->getType() << " " << std::endl;
	std::cout << "wrongCat -> " << wrongCat->getType() << " " << std::endl;

	std::cout << std::endl << std::endl;

	std::cout << "wrongAnimal -> ";
	wrongAnimal->makeSound();
	std::cout << "wrongAnimalCat -> ";
	wrongAnimalCat->makeSound();
	std::cout << "wrongCat -> ";
	wrongCat->makeSound();

	std::cout << std::endl << std::endl;

	delete wrongAnimal;
	delete wrongAnimalCat;
	delete wrongCat;
	/////////////////////////////









	return 0;
}
