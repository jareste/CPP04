/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 06:11:13 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/19 06:38:11 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"


class Character : public ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character();
		Character(std::string name);
		Character( const Character &src );
		~Character();
		Character	&operator=( const Character& character );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};


#endif