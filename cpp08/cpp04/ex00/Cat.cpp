/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:19:07 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 22:09:33 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "System: chat créé.\n";
}

Cat::Cat(const Cat& from)
{
	std::cout << "Copy constructor called.\n";
	this->type = from.type;
}

Cat&	Cat::operator=(const Cat& from)
{
	std::cout << "copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->type = from.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Miaou.\n";
}

Cat::~Cat()
{
	std::cout << "System: chat mort.\n";
}
