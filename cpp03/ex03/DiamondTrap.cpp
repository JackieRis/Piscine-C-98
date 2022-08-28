/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 15:37:30 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 15:46:09 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Je suis ton père.\n";
}

DiamondTrap::DiamondTrap(std::string oui)
{
	std::cout << oui << "... je suis ton père.\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "NOOOOOOOOOOOOOOOOOOOOOO !\n";
}
