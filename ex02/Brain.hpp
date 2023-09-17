/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 03:24:22 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/17 11:38:45 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		int			index;
		std::string	ideas[100];
	public:
		Brain();
		Brain( const Brain &src );
		virtual ~Brain();
		Brain	&operator=( const Brain& Brain );
		void 	setIdeas(std::string const &ideas);
		void	printIdeas() const;
};

#endif
