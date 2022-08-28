/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:56:08 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 01:15:41 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <stdint.h>

int	main(void)
{
	uint64_t	a = 2147483647;
	uint64_t	b = 2147483649;
	uint64_t	c = 42;
	char		d = 'd';
	char		star = '*';

	std::cout << ft_min(a, b) << std::endl;
	ft_swap(c, b);
	std::cout << "Swap result: b: " << b << " | c: " << c << std::endl;
	std::cout << ft_max(d, star) << std::endl;
	return (0);
}
