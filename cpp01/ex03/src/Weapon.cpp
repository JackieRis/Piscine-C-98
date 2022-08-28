/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:53:40 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/13 11:49:59 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string weap)
{
	setType(weap);
}

void	Weapon::setType(std::string type) {_type = type;}

std::string	Weapon::getType()const {return(_type);}

Weapon::~Weapon(){}
