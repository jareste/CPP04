/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:46 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 12:18:29 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat( const Cat &src );
		~Cat();
		Cat	&operator=( const Cat& Cat );
		void	makeSound() const;
		std::string	getType() const;
		void setIdeas(std::string const &ideas) const;
		void	printIdeas() const;
};

#endif
