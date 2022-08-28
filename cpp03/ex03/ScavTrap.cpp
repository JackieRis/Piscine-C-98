/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:26:58 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 14:36:41 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attack = 20;
	std::cout << "System: Hello Masterchief, i'm Cortana.\n";
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attack = 20;
	std::cout << "System: Hello Masterchief, i'm Cortana.\n";
}

void	ScavTrap::attack(std::string name)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "System: " << "ScavTrap " << _name << " attacks " << name << ", causing " << _attack << " points of damage.\n";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ScavTrap " << _name << ": Out of energy.\n";
	else
		std::cout << "ScavTrap " << _name << ": Are you stupid ? I'm dead !\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << ": is now in Gate Keeper position.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Error 404.\n";
}
