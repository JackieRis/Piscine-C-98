/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:19:37 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/10 14:06:15 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
private:
	int					FixedNumber;
	static const int	nbits;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(const Fixed& n);
	Fixed(const int num);
	Fixed(const float num);

	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void)const;
	int		toInt(void)const;

	//Comparison operator
	bool	operator>(const Fixed& n);
	bool	operator<(const Fixed& n);
	bool	operator>=(const Fixed& n);
	bool	operator<=(const Fixed& n);
	bool	operator!=(const Fixed& n);
	bool	operator==(const Fixed& n);


	//Incrementation and decrementation
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);

	//arithmetic operator
	Fixed&	operator=(const Fixed& n);
	Fixed	operator+(const Fixed& n);
	Fixed	operator-(const Fixed& n);
	Fixed	operator*(const Fixed& n);
	Fixed	operator/(const Fixed& n);

	//MIN and MAX
	static Fixed&		min(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static Fixed&		max(Fixed& a, Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

	std::ostream &operator<<(std::ostream& os, const Fixed& from);
#endif