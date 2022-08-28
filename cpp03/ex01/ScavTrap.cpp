/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 13:26:58 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 00:00:34 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "System: Hello Masterchief, i'm Cortana.\n";
}

ScavTrap::ScavTrap(const ScavTrap& from)
{
	std::cout << "Copy constructor called.\n";
	this->_name = from._name;
	this->_hitPoints = from._hitPoints;
	this->_energyPoints = from._energyPoints;
	this->_attack = from._attack;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	this->_name = from._name;
	this->_hitPoints = from._hitPoints;
	this->_energyPoints = from._energyPoints;
	this->_attack = from._attack;
	return (*this);
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
