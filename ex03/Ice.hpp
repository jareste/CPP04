/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 01:43:24 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/18 06:04:00 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		Ice( const Ice &src );
		~Ice();
		Ice	&operator=( const Ice& ice );
		AMateria* clone() const;
		void use(ICharacter& target) const;
};

#endif
