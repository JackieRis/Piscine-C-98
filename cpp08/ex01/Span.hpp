/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 04:59:18 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/08/25 05:33:08 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>

template <typename T>
class Span
{
private:
	std::vector<T>	array;
	T				_N;
public:
	Span(){std::cout << "Default constructor called.\n";}
	Span(T N):array(N), _N(N){std::cout << "Array of " << N << " elements created.\n";}
	~Span(){std::cout << "Default constructor called.\n"}

	void	addNumber(int nb)
	{
		uint64_t i = std::distance(array.begin(), array.end());

		if (_N >= i)
			throw;
		array.push_back(nb);
	}
};

#endif