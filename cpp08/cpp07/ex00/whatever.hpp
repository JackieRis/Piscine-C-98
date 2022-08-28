/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 00:55:35 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 01:10:42 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	ft_swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	&ft_min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template <typename T>
T	&ft_max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif