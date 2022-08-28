/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 12:03:58 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/05/24 16:28:43 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/Harl.hpp"

int	main()
{
	Harl	baguette;
	baguette.complain("DEBUG");
	baguette.complain("INFO");
	baguette.complain("WARNING");
	baguette.complain("ERROR");
	return (0);
}