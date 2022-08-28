/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:19:08 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 23:35:48 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	brain = new Brain();
	type = "Dog";
	std::cout << "System: chien créé.\n";
}

Dog::Dog(const Dog& from)
{
	std::cout << "Copy constructor called.\n";
	this->type = from.type;
	this->brain = new Brain(*from.brain);
}

Dog&	Dog::operator=(const Dog& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->type = from.type;
	delete brain;
	this->brain = new Brain(*from.brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf.\n";
}

Dog::~Dog()
{
	delete brain;
	std::cout << "System: chien mort.\n";
}
