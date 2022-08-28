/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:19:36 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/17 21:59:40 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::nbits = 8;

//***************** basic constructor

Fixed::Fixed() : FixedNumber(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed& n) : FixedNumber(n.FixedNumber)
{
	std::cout << "Copy constructor called\n";
}


Fixed::Fixed(const int num) : FixedNumber((num << nbits))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float num) : FixedNumber(roundf(num * (1 << nbits)))
{
	std::cout << "Float constructor called\n";
}

//**************************************************************************************

//***************** Create = operator for Fixed class

Fixed&	Fixed::operator=(const Fixed& n)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &n)
		return (*this);
	this->FixedNumber = n.FixedNumber;
	return (*this);
}

std::ostream &operator<<(std::ostream& os, const Fixed& from)
{
	os << from.toFloat();
	return (os);
}

//**************************************************************************************

//***************** getter and setter

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

//**************************************************************************************

//***************** Convert to float or to int

float	Fixed::toFloat(void) const
{
	return ((float)FixedNumber / (float)(1 << nbits));
}

int		Fixed::toInt(void) const
{
	return (FixedNumber >> nbits);
}

//**************************************************************************************

//comparison operator

bool	Fixed::operator>(const Fixed& n) {return (this->FixedNumber > n.FixedNumber);}
bool	Fixed::operator<(const Fixed& n) {return (this->FixedNumber < n.FixedNumber);}
bool	Fixed::operator>=(const Fixed& n) {return (this->FixedNumber >= n.FixedNumber);}
bool	Fixed::operator<=(const Fixed& n) {return (this->FixedNumber <= n.FixedNumber);}
bool	Fixed::operator!=(const Fixed& n) {return (this->FixedNumber != n.FixedNumber);}
bool	Fixed::operator==(const Fixed& n) {return (this->FixedNumber == n.FixedNumber);}

//**************************************************************************************

//Incrementation and decrementation

Fixed&	Fixed::operator++()
{
	this->FixedNumber++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	++*this;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	this->FixedNumber--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	--*this;
	return (tmp);
}

//**************************************************************************************

//Arithmetic operator

Fixed	Fixed::operator+(const Fixed& n)
{
	Fixed	tmp;

	tmp.FixedNumber = this->FixedNumber + n.FixedNumber;
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed& n)
{
	Fixed	tmp;

	tmp.FixedNumber = this->FixedNumber - n.FixedNumber;
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed& n)
{
	Fixed	tmp;

	tmp.FixedNumber = ((uint64_t)this->FixedNumber * (uint64_t)n.FixedNumber) >> nbits;
	return (tmp);
}

Fixed	Fixed::operator/(const Fixed& n)
{
	Fixed	tmp;

	tmp.FixedNumber = (this->FixedNumber * (1 << nbits)) / n.FixedNumber;
	return (tmp);
}

//**************************************************************************************

//MIN and MAX

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a.FixedNumber < b.FixedNumber)
		return (a);
	return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.FixedNumber < b.FixedNumber)
		return (a);
	return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a.FixedNumber > b.FixedNumber)
		return (a);
	return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.FixedNumber > b.FixedNumber)
		return (a);
	return (b);
}

//**************************************************************************************

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
