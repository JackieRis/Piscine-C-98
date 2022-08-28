/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:46:27 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 23:35:38 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain create.\n";
}

Brain::Brain(const Brain& from)
{
	std::cout << "Copy constructor called.\n";
	size_t	count = 100;
	for (size_t i = 0; i < count; i++)
		this->ideas[i] = from.ideas[i];
}

Brain&	Brain::operator=(const Brain& from)
{
	std::cout << "Copy assignement operator called.\n";
	if (this == &from)
		return (*this);
	size_t	count = 100;
	for (size_t i = 0; i < count; i++)
		this->ideas[i] = from.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destroy.\n";
}