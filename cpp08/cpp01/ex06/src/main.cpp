/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:32:40 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 17:44:30 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;
	std::string	str;

	if (argc != 2)
	{
		std::cout << "only one parameter !\n";
		return (-1);
	}
	str = argv[1];
	harl.complain(str);
}
