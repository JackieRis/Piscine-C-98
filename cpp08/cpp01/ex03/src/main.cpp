/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 11:53:12 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/13 13:36:18 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Weapon.hpp"
#include "../headers/HumanA.hpp"
#include "../headers/HumanB.hpp"

int main()
{
	Weapon  club = Weapon("Baguette");

	HumanA bob("Billy", club);
	bob.attack();
	club.setType("Croissant");
	bob.attack();

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	return 0; 
}
