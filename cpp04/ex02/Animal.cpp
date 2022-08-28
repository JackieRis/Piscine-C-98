/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:18:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:26:26 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Nothing";
	std::cout << "Un nouvel animal rentre dans l'arène.\n";
}

Animal::Animal(const Animal& from)
{
	std::cout << "Copy constructor called.\n";
	this->type = from.type;
}

Animal&	Animal::operator=(const Animal& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->type = from.type;
	return (*this);
}

std::string	Animal::getType() const
{
	return(this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Can't make a sound.\n";
}

Animal::~Animal()
{
	std::cout << "Une nouvelle espèce de disparue.\n";
}
