/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 09:55:05 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 10:22:34 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie *cZombie = new Zombie;
	cZombie->setName(name);
	cZombie->announce();
	delete cZombie;
}
