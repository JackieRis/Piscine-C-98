/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:29:32 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 00:12:30 by tnguyen-         ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap& from)
{
	std::cout << "Copy constructor called.\n";
	this->_name = from._name;
	this->_hitPoints = from._hitPoints;
	this->_energyPoints = from._energyPoints;
	this->_attack = from._attack;
}

FragTrap&	FragTrap::operator=(const FragTrap& from)
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
