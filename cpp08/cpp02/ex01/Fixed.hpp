/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:19:37 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/09 16:05:05 by tnguyen-         ###   ########.fr       */
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

	Fixed&	operator=(const Fixed& n);
	int		getRawBits(void) const;
	void	setRawBits(const int raw);
	float	toFloat(void)const;
	int		toInt(void)const;
};

	std::ostream &operator<<(std::ostream& os, const Fixed& from);
#endif