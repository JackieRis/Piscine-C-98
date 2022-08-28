/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:37:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:22:56 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "System: chat cassé créé.\n";
}

WrongCat::WrongCat(const WrongCat& from)
{
	std::cout << "Copy constructor called.\n";
	this->type = from.type;
}

WrongCat&	WrongCat::operator=(const WrongCat& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->type = from.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Bruh.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "System: chat cassé mort.\n";
}
