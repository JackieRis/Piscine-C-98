/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:32:07 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:20:01 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Nothing";
	std::cout << "Animal cassé.\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& from)
{
	std::cout << "Copy constructor called.\n";
	this->type = from.type;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->type = from.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Bzztbzzt.\n";
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal cassé est mort.\n";
}
