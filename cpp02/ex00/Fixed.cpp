/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:19:36 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/09 11:53:23 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbits = 8;

Fixed::Fixed() : FixedNumber(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& n) : FixedNumber(n.FixedNumber)
{
	std::cout << "Copy constructor called\n";
}

Fixed&	Fixed::operator=(const Fixed& n)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &n)
		return (*this);
	this->FixedNumber = n.FixedNumber;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (FixedNumber);
}

void	Fixed::setRawBits(const int raw)
{
	FixedNumber = raw;
	std::cout << "getRawBits member function called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
