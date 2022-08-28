/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:20:18 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/09 16:07:32 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed	e(-5);
	Fixed	f(42.42f);

	std::cout << e.getRawBits() << std::endl;
	std::cout << f.getRawBits() << std::endl;

	std::cout << e << std::endl;

	std::cout << f.toFloat() << std::endl;
	std::cout << e.toInt() << std::endl;

	return (0);
}
