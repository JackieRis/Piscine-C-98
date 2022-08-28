/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:49:19 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 11:07:33 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie::Zombie()
{
}

void	Zombie::setName(std::string name)
{
	_name = name;
}

void	Zombie::announce()
{
	std::cout << _name << ": : BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << _name << ": is dead\n";
}
