/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 01:17:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/28 01:41:37 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>
# include <iostream>

template <typename T>
void	fp(const T &b)
{
	std::cout << std::hex << static_cast<unsigned int>(b) << std::endl;
}

template <typename T>
void	iter(T *array, const size_t size, void (*f)(T &))
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		(*f)(array[i]);
		i++;
	}
}

template <typename T>
void	iter(T *array, const size_t size, void (*f)(const T &))
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		(*f)(array[i]);
		i++;
	}
}
#endif