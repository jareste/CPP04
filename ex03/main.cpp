/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 03:14:32 by jareste-          #+#    #+#             */
/*   Updated: 2023/09/18 06:01:53 by jareste-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"

int main()
{
	const Ice* k = new Ice();
	const AMateria *l = k->clone();

	k->use("o");
	delete l;
	delete k;
	return 0;
}