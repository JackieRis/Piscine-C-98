/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:19:37 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/06/09 11:52:45 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int					FixedNumber;
	static const int	nbits;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(const Fixed& n);

	Fixed&	operator=(const Fixed& n);
	int		getRawBits(void) const;
	void	setRawBits(const int raw);
};

#endif