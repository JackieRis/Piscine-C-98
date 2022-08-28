/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 07:45:18 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/08/25 02:41:07 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	int a[] = {-512, 512, 0, 42, 1, 9, 2147483647, -2147483648, 3, -42};
	std::vector<int> vec2;

	for (int i = 0; i < 10; i++)
		vec2.push_back(a[i]);

	const std::vector<int> vec(vec2);

	try
	{
		std::cout << easyfind(vec, 42) << std::endl;
	}
	catch(notFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << easyfind(vec, 30) << std::endl;
	}
	catch(notFoundException& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
