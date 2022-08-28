/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:16:45 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 14:13:46 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	A("Baguette");
	ClapTrap	B("Tacos");

	A.attack("Wall");
	B.attack("Baguette");
	A.takeDamage(20);
	A.guardGate();
}