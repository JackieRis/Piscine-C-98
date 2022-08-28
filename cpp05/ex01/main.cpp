/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:49 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 06:20:22 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int	main(void)
{
	Bureaucrat	Albert("Albert", 5);
	Form		impot("Impot", 3, 1);

	//testing limits
	try
	{
		Bureaucrat	nul("Thomas", 151);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form	intra("intra.42.fr", 151, 200);
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cerr << e.what() << '\n';
	}


	//grade too low
	Albert.signForm(impot);

	//testing promotion
	bool	oui = 0;
	while (oui != 1)
	{
		std::cout << Albert;
		try
		{
			Albert.promote();
		}
		catch(Bureaucrat::GradeTooHighException &e)
		{
			oui = 1;
			std::cerr << e.what() << '\n';
		}
	}
	//grade ok
	Albert.signForm(impot);

	//already sign
	Albert.signForm(impot);

	//testing surcharge operator
	std::cout << Albert;
	std::cout << impot;
	return (0);
}
