/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:18:57 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:05:24 by tnguyen-         ###   ########.fr       */
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

std::string	Animal::getType() const
{
	return(this->type);
}

Animal&	Animal::operator=(const Animal& n)
{
	std::cout << "copy assignement operator called.\n";
	if (this == &n)
		return (*this);
	this->type = n.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "Can't make a sound.\n";
}

Animal::~Animal()
{
	std::cout << "Une nouvelle espèce de disparue.\n";
}
