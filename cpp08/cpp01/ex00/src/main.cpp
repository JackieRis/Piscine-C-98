/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 12:16:03 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 10:23:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

void	Zombie::setName(std::string name)
{
	_name = name;
}

int	main()
{
	Zombie	*truc;
	truc = newZombie("baguette");
	truc->announce();
	randomChump("Jackie");
	delete truc;
	return (0);
}