/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 11:16:34 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/13 11:59:37 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanB.hpp"

HumanB::HumanB(){}

HumanB::HumanB(std::string name):_name(name) 
{
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weap)
{
	_weapon = &weap;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " can't attack without weapon\n";
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

HumanB::~HumanB()
{
}
