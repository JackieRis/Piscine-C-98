/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:29:32 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 15:27:41 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attack = 30;
	std::cout << "Hello motherf*cker.\n";
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attack = 30;
	std::cout << name << ": Hello motherf*cker.\n";
}

void	FragTrap::HighFivesGuys(void)
{
	std::cout << this->_name << ": High Fives guys ?\n";
}

void	FragTrap::attack(std::string str)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "System: " << "ScavTrap " << _name << " attacks " << str << ", causing " << _attack << " points of damage.\n";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << ": Out of energy.\n";
	else
		std::cout << "ScavTrap " << _name << ": Are you stupid ? I'm dead !\n";
}

FragTrap::~FragTrap()
{
	std::cout << "Bye, have a nice day !\n";
}
