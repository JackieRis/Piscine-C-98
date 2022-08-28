/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:38:09 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 00:12:53 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}

Base*	generate(void)
{
	int	i;

	i = rand() % 3;
	switch (i)
	{
	case 0:
		return (new A());
		break;
	case 1:
		return (new B());
		break ;
	case 2:
		return (new C());
		break ;
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "identify pointer: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "identify pointer: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "identify pointer: C\n";
	else
		std::cout << "identify pointer: class doesn't exist.\n";
}

void	identify(Base& p)
{
	try
	{
		A& tmp = dynamic_cast<A&>(p);
		(void)tmp;
		std::cout << "identify reference: A\n";
		return ;
	}
	catch(const std::bad_cast &e)
	{}
	try
	{
		B& tmp = dynamic_cast<B&>(p);
		(void)tmp;
		std::cout << "identify reference: B\n";
		return ;
	}
	catch(const std::bad_cast &e)
	{}
	try
	{
		C& tmp = dynamic_cast<C&>(p);
		(void)tmp;
		std::cout << "identify reference: C\n";
		return ;
	}
	catch(const std::bad_cast &e)
	{}
	std::cout << "identify reference: class doesn't exist.\n";
}
