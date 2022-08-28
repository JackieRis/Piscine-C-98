/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:44:50 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/12 11:14:51 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Zombie.hpp"

int	main()
{
	int	n;
	Zombie *test;

	n = 5;
	test = zombieHorde(n, "Billy");
	for(int i=0; i < n; i++)
	{
		test->announce();
	}
	delete [] test;
	return (0);
}
