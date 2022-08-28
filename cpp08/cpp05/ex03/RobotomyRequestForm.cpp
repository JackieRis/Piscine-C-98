/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/20 21:37:05 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("Robotomy Creation Form.", 72, 45, "Default")
{
	std::cout << "Robotomy form created.\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Creation Form.", 72, 45, target)
{
	std::cout << "Bruit de perceuse.\n";
}

void	RobotomyRequestForm::execin() const
{
	int i;

	srand(time(NULL));
	i = rand() % 100;
	if (i < 50)
		std::cout << this->getTarget() << " get Robotomised.\n";
	else
		std::cout << this->getTarget() << " didn't get Robotomised.\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){std::cout << "Robotomy form destroyed.\n";}
