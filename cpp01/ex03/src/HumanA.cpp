/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:53:01 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/13 10:50:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap):_weapon(weap)
{
	_name = name;
	
}

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
}
