/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:11:53 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 10:11:30 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie	*nZombie = new Zombie;
	nZombie->setName(name);
	return (nZombie);
}