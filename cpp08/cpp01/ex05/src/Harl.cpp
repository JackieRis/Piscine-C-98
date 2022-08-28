/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:07:38 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 16:28:00 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

Harl::Harl(){}

void	Harl::debug()
{
	std::cout << DEB;
}

void	Harl::info()
{
	std::cout << INF;
}

void	Harl::warning()
{
	std::cout << WARN;
}

void	Harl::error()
{
	std::cout << ERR;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*complain[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	complainLevels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 5; i++)
	{
		void	(Harl::*selectedComplain)(void) = complain[i];
		if (level == complainLevels[i])
			(this->*selectedComplain)();
	}
	
}

Harl::~Harl(){}
