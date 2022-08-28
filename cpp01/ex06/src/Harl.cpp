/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 16:25:04 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 18:04:39 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

Harl::Harl(){}

void	Harl::debug()
{
	std::cout	<< "[ DEBUG ]\n"
				<< DEB
				<< std::endl;
}

void	Harl::info()
{
	std::cout	<< "[ INFO ]\n"
				<< INF
				<< std::endl;
}

void	Harl::warning()
{
	std::cout	<< "[ WARNING ]\n"
				<< WARN
				<< std::endl;
}

void	Harl::error()
{
	std::cout	<< "[ ERROR ]\n"
				<< ERR
				<< std::endl;
}

void	Harl::complain(std::string str)
{
	std::string	liste[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = -1; i < 4; i++)
	{
		if (str == liste[i])
			break ;
	}
	
	switch (i)
	{
	case 0:
		Harl::debug();
	case 1:
		Harl::info();
	case 2:
		Harl::warning();
	case 3:
		Harl::error();
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
	
}

Harl::~Harl(){}
