/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:37:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 19:37:23 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "Cat";
	std::cout << "System: chat cassé créé.\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "Bruh.\n";
}

WrongCat::~WrongCat()
{
	std::cout << "System: chat cassé mort.\n";
}
