/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 00:43:31 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/21 01:15:13 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "New Intern hired.\n";
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	const std::string	str[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	size_t i = 0;

	for (; i < 3; i++)
	{
		if (name == str[i])
			break ;
	}
	switch (i)
	{
	case 0:
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));
	case 1:
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));
	case 2:
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	default:
		std::cout << "Intern tried to create " << name << " but it doesn't exist.\n";
		break;
	}
	return (NULL);
}

Intern::~Intern()
{
	std::cout << "The Intern get fired.\n";
}
