/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 23:33:34 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/27 23:56:34 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <stdlib.h>
# include <time.h>
# include <iostream>

class Base
{
private:
	
public:
	virtual ~Base() =0;
};

class A: public Base
{
private:
	
public:

};

class B: public Base
{
	private:

	public:

};

class C: public Base
{
	private:

	public:
	
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif