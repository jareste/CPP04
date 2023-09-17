/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:27:22 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/15 23:47:43 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal( const WrongAnimal &src );
		virtual ~WrongAnimal();
		WrongAnimal	&operator=( const WrongAnimal& WrongAnimal );
		void	makeSound() const;
		std::string	getType() const;
};

std::ostream&	operator<<( std::ostream& out, const WrongAnimal* wrongAnimal );
std::ostream&	operator<<( std::ostream& out, const WrongAnimal& wrongAnimal );

#endif
