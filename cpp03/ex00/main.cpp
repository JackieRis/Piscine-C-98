/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:16:45 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 12:09:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	A("A");
	ClapTrap	B("B");

	A.attack("Wall");
	A.attack("B");
	B.takeDamage(3);
	A.attack("Dirt");
	A.attack("B");
	B.takeDamage(3);
	A.attack("You");
	A.attack("B");
	B.takeDamage(3);
	A.attack("B");
	B.takeDamage(3);
	B.attack("A");
	B.beRepaired(5);
}