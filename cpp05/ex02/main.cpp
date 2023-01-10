/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:49 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/21 00:35:18 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int	main(void)
{
	Bureaucrat	Albert("Albert", 5);
	Bureaucrat	Kevin("Kevin", 72);
	ShrubberyCreationForm	jardin("jardin");
	RobotomyRequestForm		drone("mur");
	PresidentialPardonForm	Jean("Jean");
	std::cout << std::endl;

	//testing limits
	try
	{
		Bureaucrat	nul("Thomas", 151);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

	std::cout << "------- Shrubbery Form -------\n" << std::endl;
	Kevin.executeForm(jardin);
	Kevin.signForm(jardin);
	Albert.signForm(jardin);
	Kevin.executeForm(jardin);
	std::cout << std::endl;

	std::cout << "------- Presidential Form -------\n" << std::endl;
	Kevin.signForm(Jean);
	Kevin.executeForm(Jean);
	Albert.signForm(Jean);
	Kevin.executeForm(Jean);
	std::cout << std::endl;

	std::cout << "------- Robotomy Form -------\n" << std::endl;
	RobotomyRequestForm	test;
	test = drone;
	std::cout << test << std::endl;
	std::cout << std::endl;

	Kevin.signForm(drone);
	Kevin.executeForm(drone);
	std::cout << "Well... let's try with Albert !\n";
	Albert.executeForm(drone);
	
	std::cout << std::endl;
	return (0);
}
