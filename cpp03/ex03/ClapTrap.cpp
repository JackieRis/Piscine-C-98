/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:19:09 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 14:40:17 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attack = 0;
	std::cout << "Bonjour, je suis ClapTrap, votre robot de défense personnel.\n";
}

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attack = 0;
	std::cout << "Bonjour, je suis ClapTrap " << _name << ", votre robot de défense personnel.\n";
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "System: " << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage.\n";
		_energyPoints--;
	}
	else if (_energyPoints == 0)
		std::cout << "ClapTrap " << _name << ": Out of energy.\n";
	else
		std::cout << "ClapTrap " << _name << ": Are you stupid ? I'm dead !\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int	tmp;

	tmp = _hitPoints - amount;
	if (tmp >= 0)
	{
		this->_hitPoints -= amount;
		std::cout << "System: ClapTrap " << this->_name << " lost " << amount << "HP.\n";
	}
	else
	{
		this->_hitPoints = 0;
		std::cout << "System: ClapTrap " << this->_name << " lost " << amount << "HP.\n";
		std::cout << "System: ClapTrap " << this->_name << " went to an other world..\n"; 
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_hitPoints += amount;
		std::cout << "System: ClapTrap " << this->_name << " repaired " << amount << " hit points.\n";
	}
}

ClapTrap::~ClapTrap(){std::cout << "ClapTrap " << _name << ": La team Rockette s'envolle vers d'autres cieuuuuuuuuuuuuuuuuux !\n";}
