/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:59:25 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/13 11:58:56 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapon;
public:
	HumanB();
	HumanB(std::string);
	~HumanB();

	void	setWeapon(Weapon &weap);
	void	attack();
};

#endif