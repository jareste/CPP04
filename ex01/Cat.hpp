/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:46 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 03:47:56 by jareste-         ###   ########.fr       */
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
		void setIdeas(std::string ideas) const;
};

#endif
