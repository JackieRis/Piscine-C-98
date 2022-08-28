/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:32:07 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 19:35:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "Nothing";
	std::cout << "Animal cassé.\n";
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
