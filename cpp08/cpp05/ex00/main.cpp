/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:25:49 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/18 02:08:40 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	Albert("Albert", 5);

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
	std::cout << Albert;
	return (0);
}
