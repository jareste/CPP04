/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:43:44 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 02:36:56 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		Cure( const Cure &src );
		~Cure();
		Cure	&operator=( const Cure& cure );
		AMateria* clone() const;
		void use(ICharacter& target) const;
};

#endif
