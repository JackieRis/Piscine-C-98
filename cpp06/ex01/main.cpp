/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:18:59 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/27 22:12:01 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void	printStruct(Data* s)
{
	std::cout << "uintptr_t: " << s->n << std::endl;
	std::cout << "void*: " << s->yes << std::endl;
	std::cout << "what: " << s->what << std::endl;
}

int	main(void)
{
	Data		a;
	Data		*b;
	uintptr_t	tmp;

	a.n = 2147483647;
	a.yes = NULL;
	a.what = -42;
	std::cout << &a << std::endl;
	tmp = serialize(&a);
	std::cout << "0x" << std::hex << tmp << std::dec << std::endl;
	printStruct(&a);
	std::cout << std::endl;
	b = deserialize(tmp);
	std::cout << b << std::endl;
	printStruct(b);
	return (0);
}
