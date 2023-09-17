/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:37 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:18:21 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class	Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog( const Dog &src );
		~Dog();
		Dog	&operator=( const Dog& Dog );
		void	makeSound() const;
		std::string	getType() const;
		void 		setIdeas(std::string const &ideas) const;
		void		printIdeas() const;
};

#endif