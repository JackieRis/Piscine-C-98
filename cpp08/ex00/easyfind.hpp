/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 07:48:00 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/08/25 02:49:10 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <string.h>
# include <algorithm>

class	notFoundException: std::exception
{
	public:
		virtual const char* what()const throw();
};

template <typename T>
int	easyfind(T& array, int a)
{
	typename T::iterator	i;

	i = find(array.begin(), array.end(), a);
	if (i == array.end())
		throw notFoundException();
	return (*i);
}

template <typename T>
int	easyfind(const T& array, int a)
{
	typename T::const_iterator	i = find(array.begin(), array.end(), a);

	if (i == array.end())
		throw notFoundException();
	
	return (std::distance(array.begin(), i));
}

#endif