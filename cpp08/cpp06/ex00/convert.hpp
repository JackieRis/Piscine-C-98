/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnguyen- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 02:27:45 by tnguyen-          #+#    #+#             */
/*   Updated: 2022/07/26 11:51:55 by tnguyen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <ctype.h>

void	fromChar(char c);
void	fromInt(double n);
void	fromFloat(float n);
void	fromDouble(double n);
void	fromString(char *str);

#endif