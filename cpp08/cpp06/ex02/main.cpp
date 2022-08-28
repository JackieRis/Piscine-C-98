/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:38:20 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 00:10:07 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(void)
{	
	srand (time(NULL));
	Base*	i = generate();
	Base*	j = generate();
	Base*	k = generate();

	identify(i);
	identify(j);
	identify(k);

	std::cout << std::endl;

	identify(*i);
	identify(*j);
	identify(*k);
	return (0);
}
