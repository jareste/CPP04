/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:22 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:36:26 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
	protected:
		std::string	type;
	public:
		AAnimal();
		AAnimal( const AAnimal &src );
		virtual ~AAnimal();
		AAnimal	&operator=( const AAnimal& aanimal );
		virtual void	makeSound() const = 0;
		virtual std::string	getType() const = 0;
		virtual void setIdeas(std::string const &ideas) const = 0;
		virtual void	printIdeas() const = 0;
};

#endif
