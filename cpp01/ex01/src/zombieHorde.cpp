/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:49:29 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 11:06:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*Horde = new Zombie[n];
	for(int i=0; i < n; i++)
	{
		Horde[i].setName(name);
	}
	return (Horde);
}