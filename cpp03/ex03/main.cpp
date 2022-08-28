/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:16:45 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/14 15:28:20 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap	A("Baguette");
	ClapTrap	B("Tacos");
	FragTrap	C("Grenada");

	std::cout << std::endl;
	B.attack("Wall");
	A.attack("Baguette");
	B.takeDamage(20);
	A.guardGate();
	C.HighFivesGuys();
	C.attack("Baguette");
	A.takeDamage(30);
	std::cout << std::endl;
}